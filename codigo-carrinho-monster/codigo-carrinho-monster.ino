
#include <NewPing.h>

// =========================
// Pinos de controle do L298N
// =========================

// Lado esquerdo do robo
const int LeftMotorForward  = 7;
const int LeftMotorBackward = 6;

// Lado direito do robo
const int RightMotorForward = 4;
const int RightMotorBackward = 5;

// =========================
// Sensor ultrassonico fixo
// =========================

const int trig_pin = A1;
const int echo_pin = A2;

const int maximum_distance = 250;
const int obstacle_distance = 20;

NewPing sonar(trig_pin, echo_pin, maximum_distance);

// =========================
// Temporizacoes (ms)
// =========================

const unsigned long life_signal_time = 180;
const unsigned long preparation_time = 5000;

const unsigned long reverse_time = 400;
const unsigned long turn_time = 500;
const unsigned long stop_time = 300;

// =========================
// Inicializacao
// =========================

void setup() {
  Serial.begin(9600);

  pinMode(LeftMotorForward, OUTPUT);
  pinMode(LeftMotorBackward, OUTPUT);
  pinMode(RightMotorForward, OUTPUT);
  pinMode(RightMotorBackward, OUTPUT);

  moveStop();

  // Aguarda o sensor estar pronto
  delay(500);

  // Leituras iniciais
  aguardarComandoInicializacao();
}



void aguardarComandoInicializacao() {
  const int distanciaMinima = 2;
  const int distanciaMaxima = 5;
  const unsigned long tempoConfirmacao = 5000;

  unsigned long inicioComando = 0;
  unsigned long ultimaContagem = 0;

  bool contando = false;
  bool avisoInterrupcaoExibido = false;
  int ultimoSegundoExibido = -1;

  moveStop();

  Serial.println();
  Serial.println("================================");
  Serial.println(" AGUARDANDO INICIALIZACAO");
  Serial.println(" Mantenha um objeto entre");
  Serial.println(" 2 e 5 cm durante 5 segundos.");
  Serial.println("================================");

  while (true) {
    int distancia = readPing();

    if (distancia >= distanciaMinima &&
        distancia <= distanciaMaxima) {

      if (!contando) {
        inicioComando = millis();
        ultimaContagem = inicioComando;
        contando = true;
        avisoInterrupcaoExibido = false;
        ultimoSegundoExibido = -1;

        Serial.println("Comando detectado!");
      }

      unsigned long decorrido = millis() - inicioComando;
      int segundoAtual =
          (tempoConfirmacao - decorrido + 999) / 1000;

      if (segundoAtual != ultimoSegundoExibido) {
        ultimoSegundoExibido = segundoAtual;

        if (segundoAtual > 0) {
          Serial.print("Inicializando em ");
          Serial.print(segundoAtual);
          Serial.println("...");
        }
      }

      if (decorrido >= tempoConfirmacao) {
        moveStop();

        Serial.println();
        Serial.println(" ROBO ATIVADO COM SUCESSO!");
        Serial.println("********************************");

        delay(500);

        sinalDeVida();

        Serial.println("Aguardando posicionamento...");
        delay(preparation_time);

        Serial.println("Iniciando navegacao!");
        return;
      }

    } else {
      if (contando) {
        contando = false;

        if (!avisoInterrupcaoExibido) {
          Serial.println(
              "Comando interrompido. "
              "Ajuste a distancia e tente novamente."
          );

          avisoInterrupcaoExibido = true;
        }
      }
    }
  }
}


void sinalDeVida() {
  Serial.println();
  Serial.println("Sinal de vida!");

  // Pequeno movimento para frente
  moveForward();
  delay(life_signal_time);
  moveStop();
  delay(200);

  // Pequeno movimento para tras
  moveBackward();
  delay(life_signal_time);
  moveStop();
  delay(200);

  Serial.println("Motores testados.");
  Serial.println("Coloque o carrinho no chao!");
}

// =========================
// Loop principal
// =========================

void loop() {
  int distance = readPing();

  if (distance < 0) {
    // Distancia desconhecida: comportamento conservador
    moveStop();
    Serial.println("Sem eco valido. Parando.");
    delay(150);
    return;
  }

  Serial.print("Distancia frontal: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > obstacle_distance) {
    moveForward();
    delay(50);
    return;
  }

  // Obstaculo detectado
  Serial.println("Obstaculo detectado!");

  moveStop();
  delay(stop_time);

  moveBackward();
  delay(reverse_time);

  moveStop();
  delay(stop_time);

  // Tenta desviar sempre para a direita
  turnRight();

  moveStop();
  delay(stop_time);

  // O loop recomeca e mede novamente a frente
}

// =========================
// Leitura do sensor
// =========================

// Retorna a distancia em cm.
// Retorna -1 se nao houver eco valido.

int readPing() {
  delay(70);

  unsigned int distance = sonar.ping_cm();

  if (distance == 0) {
    return -1;
  }

  return (int) distance;
}

// =========================
// Controle dos motores
// =========================

void moveStop() {
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(LeftMotorBackward, LOW);

  digitalWrite(RightMotorForward, LOW);
  digitalWrite(RightMotorBackward, LOW);
}

void moveForward() {
  digitalWrite(LeftMotorBackward, LOW);
  digitalWrite(RightMotorBackward, LOW);

  digitalWrite(LeftMotorForward, HIGH);
  digitalWrite(RightMotorForward, HIGH);
}

void moveBackward() {
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(RightMotorForward, LOW);

  digitalWrite(LeftMotorBackward, HIGH);
  digitalWrite(RightMotorBackward, HIGH);
}

void turnRight() {
  Serial.println("Tentando desviar para a direita");

  // Lado esquerdo para frente
  // Lado direito para tras

  digitalWrite(LeftMotorBackward, LOW);
  digitalWrite(RightMotorForward, LOW);

  digitalWrite(LeftMotorForward, HIGH);
  digitalWrite(RightMotorBackward, HIGH);

  delay(turn_time);

  moveStop();
}
