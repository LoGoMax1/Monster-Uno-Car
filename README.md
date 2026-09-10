#  Carrinho Arduino

Projeto de construção e desenvolvimento de um carrinho robótico utilizando Arduino Uno, driver L298N, motores DC, sensor ultrassônico e módulo seguidor de linha.

O projeto está sendo desenvolvido de forma incremental, começando pela montagem mecânica e testes dos componentes, seguindo posteriormente para a programação e automação do carrinho.

##  Integrantes

| RM | Nome |
|:---:|---|
| 551117 | Lorenzo Gomes Andreata |
| 97158 | Lucas Moreno Matheus |
| 99756 | Kayky Oliveira Schunck |

##  Objetivos

O projeto tem como principais objetivos:

- [X] Montar a estrutura física do carrinho
- [ ] Controlar os quatro motores através do Arduino
- [ ] Implementar movimentos para frente e para trás
- [ ] Implementar curvas para esquerda e direita
- [ ] Detectar obstáculos com o sensor ultrassônico
- [ ] Implementar o modo seguidor de linha
- [ ] Integrar os sensores ao sistema de controle
- [ ] Desenvolver um carrinho parcialmente ou totalmente autônomo

##  Imagens
Conceito gerado com auxílio de IA

![Conceitual feito pelo Gemini](assets/Conceitual-gemini.jpg)

Mockup desenvolvido no CAD

![Mockup-CAD](assets/mockup-CAD.jpg)

## 📋 Componentes

O kit utilizado possui os seguintes componentes:

| Quantidade | Componente |
|:---:|---|
| 4 | Motores DC |
| 4 | Pneus |
| 4 | Suportes para motores |
| 2 | Chassis de acrílico |
| 1 | Driver L298N |
| 1 | Arduino Uno R3 (ATmega328P) |
| 1 | Placa/suporte para sensores |
| 1 | Kit de suporte |
| 1 | Engrenagem de direção |
| 1 | Sensor ultrassônico |
| 1 | Módulo seguidor de linha |
| 1 | Cabo USB |
| - | Parafusos e porcas |

## Arquitetura Eletrônica
- Baterias: 4x Pilhas AA
- Diagrama de https://saladeeletronica.blogspot.com/2022/10/carro-4wd-arduino.html:
  ![alt text](assets/eletronica.jpg)

## Tabela Dimensional

| Componente | Dimensões | Altura |
|---|:---:|:---:|
| Arduino Uno R3 | 68,6 mm x 53,4 mm | ~15 mm |
| Servo DC M2D3C11 | 70mm x 23mm | 37mm |
| Driver Motor Ponte H L298N | 43,0 mm x 43,0 mm | ~27,0 mm |
| Sensor Ultrassônico HC-SR04 | 45,0 mm x 20,0 mm | ~15,0 mm |

## Croqui Chassi

```stl
solid Mesh
  facet normal 0 0 -1
    outer loop
      vertex -4.98608 -0.510096 0
      vertex -5 -0.25 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 -1.75 0
      vertex -3.5 -2.5 0
      vertex -3.73474 -2.38712 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 1.75 0
      vertex -4.98608 0.510096 0
      vertex -4.94449 0.767222 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.73474 -2.38712 0
      vertex -3.95609 -2.24983 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.95609 -2.24983 0
      vertex -4.16152 -2.08971 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 -1.75 0
      vertex -4.16152 -2.08971 0
      vertex -4.3487 -1.90858 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.94449 0.767222 0
      vertex -4.8757 1.01844 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.8757 1.01844 0
      vertex -4.7805 1.26089 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 1.75 0
      vertex -4.7805 1.26089 0
      vertex -4.65997 1.49179 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.3487 -1.90858 0
      vertex 4.16152 -2.08971 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.3487 -1.90858 0
      vertex -4.51548 -1.70851 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.51548 -1.70851 0
      vertex -4.65997 -1.49179 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 -1.75 0
      vertex -4.65997 -1.49179 0
      vertex -4.7805 -1.26089 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.7805 -1.26089 0
      vertex -4.8757 -1.01844 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.8757 -1.01844 0
      vertex -4.94449 -0.767222 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 -1.75 0
      vertex -4.94449 -0.767222 0
      vertex -4.98608 -0.510096 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.65997 1.49179 0
      vertex -4.51548 1.70851 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.51548 1.70851 0
      vertex -4.3487 1.90858 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 1.75 0
      vertex -4.3487 1.90858 0
      vertex -4.16152 2.08971 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.17631 -0.381081 0
      vertex 3 -3.06162e-17 0
      vertex -3.21941 -0.413845 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3 -3.06162e-17 0
      vertex -3.2658 -0.441756 0
      vertex -3.21941 -0.413845 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.863 0.34385 0
      vertex -3.89805 0.302587 0
      vertex -4.98608 0.510096 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.89805 0.302587 0
      vertex -3.92843 0.257777 0
      vertex -4.98608 0.510096 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 -1.75 0
      vertex 5 -0.25 0
      vertex 4.98608 -0.510096 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 1.75 0
      vertex -0.75 1.75 0
      vertex 3.58089 0.493413 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -0.75 1.75 0
      vertex 3.63376 0.481775 0
      vertex 3.58089 0.493413 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 1.75 0
      vertex 4.8757 1.01844 0
      vertex 4.94449 0.767222 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.16152 2.08971 0
      vertex -3.95609 2.24983 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.95609 2.24983 0
      vertex -3.73474 2.38712 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 1.75 0
      vertex -3.73474 2.38712 0
      vertex -3.5 2.5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.41911 -0.493413 0
      vertex -3.36624 -0.481775 0
      vertex 3 -3.06162e-17 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.36624 -0.481775 0
      vertex -3.31493 -0.464488 0
      vertex 3 -3.06162e-17 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3 -3.06162e-17 0
      vertex -3.31493 -0.464488 0
      vertex -3.2658 -0.441756 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.98608 -0.510096 0
      vertex 4.94449 -0.767222 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.94449 -0.767222 0
      vertex 4.8757 -1.01844 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 -1.75 0
      vertex 4.8757 -1.01844 0
      vertex 4.7805 -1.26089 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.7805 -1.26089 0
      vertex 4.65997 -1.49179 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.65997 -1.49179 0
      vertex 4.51548 -1.70851 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 -1.75 0
      vertex 4.51548 -1.70851 0
      vertex 4.3487 -1.90858 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.16152 -2.08971 0
      vertex 3.95609 -2.24983 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.95609 -2.24983 0
      vertex 3.73474 -2.38712 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 -1.75 0
      vertex 3.73474 -2.38712 0
      vertex 3.5 -2.5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 0.75 -2.5 0
      vertex -0.75 -2.5 0
      vertex 0.75 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -0.75 -2.5 0
      vertex -0.75 -1.75 0
      vertex 0.75 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 0.75 -1.75 0
      vertex -0.75 -1.75 0
      vertex 3 -3.06162e-17 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.95609 2.24983 0
      vertex 3.5 1.75 0
      vertex 3.73474 2.38712 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 1.75 0
      vertex 3.5 2.5 0
      vertex 3.73474 2.38712 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.95609 2.24983 0
      vertex 4.16152 2.08971 0
      vertex 3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.16152 2.08971 0
      vertex 4.3487 1.90858 0
      vertex 3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 1.75 0
      vertex 4.3487 1.90858 0
      vertex 4.51548 1.70851 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.51548 1.70851 0
      vertex 4.65997 1.49179 0
      vertex 3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.65997 1.49179 0
      vertex 4.7805 1.26089 0
      vertex 3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 1.75 0
      vertex 4.7805 1.26089 0
      vertex 4.8757 1.01844 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.137 0.34385 0
      vertex 3.07157 0.257777 0
      vertex 3.04621 0.209945 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.98831 0.107485 0
      vertex -5 0.25 0
      vertex -3.97383 0.159651 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -5 0.25 0
      vertex -4.98608 0.510096 0
      vertex -3.97383 0.159651 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.97383 0.159651 0
      vertex -4.98608 0.510096 0
      vertex -3.95379 0.209945 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.98608 0.510096 0
      vertex -3.92843 0.257777 0
      vertex -3.95379 0.209945 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.17631 -0.381081 0
      vertex -3.137 -0.34385 0
      vertex 3 -3.06162e-17 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.137 -0.34385 0
      vertex -3.10195 -0.302587 0
      vertex 3 -3.06162e-17 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3 -3.06162e-17 0
      vertex -3.10195 -0.302587 0
      vertex -3.07157 -0.257777 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.07157 -0.257777 0
      vertex -3.04621 -0.209945 0
      vertex 3 -3.06162e-17 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.04621 -0.209945 0
      vertex -3.02617 -0.159651 0
      vertex 3 -3.06162e-17 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3 -3.06162e-17 0
      vertex -3.02617 -0.159651 0
      vertex -3.01169 -0.107485 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.31493 0.464488 0
      vertex -3.5 1.75 0
      vertex -3.2658 0.441756 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 1.75 0
      vertex -3.21941 0.413845 0
      vertex -3.2658 0.441756 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.98831 0.107485 0
      vertex -3.99707 0.0540595 0
      vertex -5 0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.99707 0.0540595 0
      vertex -4 3.06162e-17 0
      vertex -5 0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -5 0.25 0
      vertex -4 3.06162e-17 0
      vertex -5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4 3.06162e-17 0
      vertex -3.99707 -0.0540595 0
      vertex -5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -5 -0.25 0
      vertex -3.99707 -0.0540595 0
      vertex -3.98831 -0.107485 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.98831 -0.107485 0
      vertex -3.97383 -0.159651 0
      vertex -5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.97383 -0.159651 0
      vertex -3.95379 -0.209945 0
      vertex -5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -5 -0.25 0
      vertex -3.95379 -0.209945 0
      vertex -3.92843 -0.257777 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.92843 -0.257777 0
      vertex -3.89805 -0.302587 0
      vertex -5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.89805 -0.302587 0
      vertex -3.863 -0.34385 0
      vertex -5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -5 -0.25 0
      vertex -3.863 -0.34385 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.863 -0.34385 0
      vertex -3.82369 -0.381081 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 -1.75 0
      vertex -3.82369 -0.381081 0
      vertex -3.78059 -0.413845 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.137 0.34385 0
      vertex 3.21941 0.413845 0
      vertex 3.17631 0.381081 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.01169 0.107485 0
      vertex 3.01169 0.107485 0
      vertex 3.00293 0.0540595 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.04621 0.209945 0
      vertex 3.02617 0.159651 0
      vertex -3.137 0.34385 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.02617 0.159651 0
      vertex 3.01169 0.107485 0
      vertex -3.137 0.34385 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.137 0.34385 0
      vertex 3.01169 0.107485 0
      vertex -3.10195 0.302587 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.01169 0.107485 0
      vertex -3.07157 0.257777 0
      vertex -3.10195 0.302587 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.31493 0.464488 0
      vertex -3.36624 0.481775 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.36624 0.481775 0
      vertex -3.41911 0.493413 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 1.75 0
      vertex -3.41911 0.493413 0
      vertex -3.47293 0.499267 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 1.75 0
      vertex -3.63376 0.481775 0
      vertex -3.68507 0.464488 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.7342 -0.441756 0
      vertex 3.78059 -0.413845 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.78059 -0.413845 0
      vertex 3.82369 -0.381081 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 -1.75 0
      vertex 3.82369 -0.381081 0
      vertex 5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5 0.25 0
      vertex 3.98831 0.107485 0
      vertex 3.97383 0.159651 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.41911 -0.493413 0
      vertex 3 -3.06162e-17 0
      vertex -3.47293 -0.499267 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3 -3.06162e-17 0
      vertex -0.75 -1.75 0
      vertex -3.47293 -0.499267 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.47293 -0.499267 0
      vertex -0.75 -1.75 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.17631 0.381081 0
      vertex 3.47293 0.499267 0
      vertex -3.137 0.34385 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.47293 0.499267 0
      vertex 3.41911 0.493413 0
      vertex -3.137 0.34385 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.137 0.34385 0
      vertex 3.41911 0.493413 0
      vertex 3.36624 0.481775 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.36624 0.481775 0
      vertex 3.31493 0.464488 0
      vertex -3.137 0.34385 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.31493 0.464488 0
      vertex 3.2658 0.441756 0
      vertex -3.137 0.34385 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.137 0.34385 0
      vertex 3.2658 0.441756 0
      vertex 3.21941 0.413845 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.17631 0.381081 0
      vertex 3.137 0.34385 0
      vertex -3.137 0.34385 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.137 0.34385 0
      vertex 3.10195 0.302587 0
      vertex -3.137 0.34385 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.137 0.34385 0
      vertex 3.10195 0.302587 0
      vertex 3.07157 0.257777 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.01169 0.107485 0
      vertex -3.02617 0.159651 0
      vertex 3.01169 0.107485 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.02617 0.159651 0
      vertex -3.04621 0.209945 0
      vertex 3.01169 0.107485 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.01169 0.107485 0
      vertex -3.04621 0.209945 0
      vertex -3.07157 0.257777 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.58089 0.493413 0
      vertex 3.52707 0.499267 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.52707 0.499267 0
      vertex 3.47293 0.499267 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 1.75 0
      vertex 3.47293 0.499267 0
      vertex -3.21941 0.413845 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.47293 0.499267 0
      vertex -3.17631 0.381081 0
      vertex -3.21941 0.413845 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.47293 0.499267 0
      vertex -3.52707 0.499267 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.52707 0.499267 0
      vertex -3.58089 0.493413 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 1.75 0
      vertex -3.58089 0.493413 0
      vertex -3.63376 0.481775 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.97383 0.159651 0
      vertex 3.95379 0.209945 0
      vertex 5 0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.95379 0.209945 0
      vertex 3.92843 0.257777 0
      vertex 5 0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5 0.25 0
      vertex 3.92843 0.257777 0
      vertex 3.89805 0.302587 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.89805 0.302587 0
      vertex 3.863 0.34385 0
      vertex 5 0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.863 0.34385 0
      vertex 3.5 1.75 0
      vertex 5 0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5 0.25 0
      vertex 3.5 1.75 0
      vertex 4.98608 0.510096 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 1.75 0
      vertex 4.94449 0.767222 0
      vertex 4.98608 0.510096 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.01169 -0.107485 0
      vertex -3.00293 -0.0540595 0
      vertex 3 -3.06162e-17 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.00293 -0.0540595 0
      vertex -3 2.14313e-16 0
      vertex 3 -3.06162e-17 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3 -3.06162e-17 0
      vertex -3 2.14313e-16 0
      vertex 3.00293 0.0540595 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3 2.14313e-16 0
      vertex -3.00293 0.0540595 0
      vertex 3.00293 0.0540595 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.00293 0.0540595 0
      vertex -3.00293 0.0540595 0
      vertex -3.01169 0.107485 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.68507 0.464488 0
      vertex -3.7342 0.441756 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.7342 0.441756 0
      vertex -3.78059 0.413845 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 1.75 0
      vertex -3.78059 0.413845 0
      vertex -4.98608 0.510096 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.78059 0.413845 0
      vertex -3.82369 0.381081 0
      vertex -4.98608 0.510096 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.98608 0.510096 0
      vertex -3.82369 0.381081 0
      vertex -3.863 0.34385 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.17631 -0.381081 0
      vertex 0.75 -1.75 0
      vertex 3.137 -0.34385 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 0.75 -1.75 0
      vertex 3.10195 -0.302587 0
      vertex 3.137 -0.34385 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.82369 -0.381081 0
      vertex 3.863 -0.34385 0
      vertex 5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.863 -0.34385 0
      vertex 3.89805 -0.302587 0
      vertex 5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5 -0.25 0
      vertex 3.89805 -0.302587 0
      vertex 3.92843 -0.257777 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.92843 -0.257777 0
      vertex 3.95379 -0.209945 0
      vertex 5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.95379 -0.209945 0
      vertex 3.97383 -0.159651 0
      vertex 5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5 -0.25 0
      vertex 3.97383 -0.159651 0
      vertex 3.98831 -0.107485 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.863 0.34385 0
      vertex 3.82369 0.381081 0
      vertex 3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.82369 0.381081 0
      vertex 3.78059 0.413845 0
      vertex 3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 1.75 0
      vertex 3.78059 0.413845 0
      vertex 3.7342 0.441756 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.78059 -0.413845 0
      vertex -3.7342 -0.441756 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.7342 -0.441756 0
      vertex -3.68507 -0.464488 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 -1.75 0
      vertex -3.68507 -0.464488 0
      vertex -3.63376 -0.481775 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.63376 -0.481775 0
      vertex -3.58089 -0.493413 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.58089 -0.493413 0
      vertex -3.52707 -0.499267 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.5 -1.75 0
      vertex -3.52707 -0.499267 0
      vertex -3.47293 -0.499267 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3 -3.06162e-17 0
      vertex 3.00293 -0.0540595 0
      vertex 0.75 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.00293 -0.0540595 0
      vertex 3.01169 -0.107485 0
      vertex 0.75 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 0.75 -1.75 0
      vertex 3.01169 -0.107485 0
      vertex 3.02617 -0.159651 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.98831 -0.107485 0
      vertex 3.99707 -0.0540595 0
      vertex 5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.99707 -0.0540595 0
      vertex 4 1.53081e-16 0
      vertex 5 -0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5 -0.25 0
      vertex 4 1.53081e-16 0
      vertex 5 0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4 1.53081e-16 0
      vertex 3.99707 0.0540595 0
      vertex 5 0.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5 0.25 0
      vertex 3.99707 0.0540595 0
      vertex 3.98831 0.107485 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.7342 0.441756 0
      vertex 3.68507 0.464488 0
      vertex 3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.68507 0.464488 0
      vertex 3.63376 0.481775 0
      vertex 3.5 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 1.75 0
      vertex 3.63376 0.481775 0
      vertex 0.75 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.63376 0.481775 0
      vertex -0.75 1.75 0
      vertex 0.75 1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 0.75 1.75 0
      vertex -0.75 1.75 0
      vertex 0.75 2.5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -0.75 1.75 0
      vertex -0.75 2.5 0
      vertex 0.75 2.5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.02617 -0.159651 0
      vertex 3.04621 -0.209945 0
      vertex 0.75 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.04621 -0.209945 0
      vertex 3.07157 -0.257777 0
      vertex 0.75 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 0.75 -1.75 0
      vertex 3.07157 -0.257777 0
      vertex 3.10195 -0.302587 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 -1.75 0
      vertex 3.52707 -0.499267 0
      vertex 3.58089 -0.493413 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.36624 -0.481775 0
      vertex 3.41911 -0.493413 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.41911 -0.493413 0
      vertex 3.47293 -0.499267 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 -1.75 0
      vertex 3.47293 -0.499267 0
      vertex 3.52707 -0.499267 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.58089 -0.493413 0
      vertex 3.63376 -0.481775 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.63376 -0.481775 0
      vertex 3.68507 -0.464488 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 -1.75 0
      vertex 3.68507 -0.464488 0
      vertex 3.7342 -0.441756 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.17631 -0.381081 0
      vertex 3.21941 -0.413845 0
      vertex 0.75 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.21941 -0.413845 0
      vertex 3.2658 -0.441756 0
      vertex 0.75 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 0.75 -1.75 0
      vertex 3.2658 -0.441756 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.2658 -0.441756 0
      vertex 3.31493 -0.464488 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 3.5 -1.75 0
      vertex 3.31493 -0.464488 0
      vertex 3.36624 -0.481775 0
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.98608 0.510096 0.2
      vertex -5 0.25 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.98608 -0.510096 0.2
      vertex 5 -0.25 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.73474 -2.38712 0.2
      vertex -3.5 -2.5 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.65997 1.49179 0.2
      vertex -4.7805 1.26089 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.41911 0.493413 0.2
      vertex -3.36624 0.481775 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 -1.75 0.2
      vertex -5 -0.25 0.2
      vertex -4.98608 -0.510096 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex 4.98608 0.510096 0.2
      vertex 4.94449 0.767222 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.41911 0.493413 0.2
      vertex 3.5 1.75 0.2
      vertex -3.47293 0.499267 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.98608 -0.510096 0.2
      vertex 3.5 -1.75 0.2
      vertex 4.94449 -0.767222 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.94449 0.767222 0.2
      vertex 4.8757 1.01844 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.8757 1.01844 0.2
      vertex 4.7805 1.26089 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex 4.7805 1.26089 0.2
      vertex 4.65997 1.49179 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.65997 1.49179 0.2
      vertex 4.51548 1.70851 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.51548 1.70851 0.2
      vertex 4.3487 1.90858 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex 4.3487 1.90858 0.2
      vertex 4.16152 2.08971 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.16152 2.08971 0.2
      vertex 3.95609 2.24983 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.95609 2.24983 0.2
      vertex 3.73474 2.38712 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex 3.73474 2.38712 0.2
      vertex 3.5 2.5 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 0.75 1.75 0.2
      vertex -3.63376 0.481775 0.2
      vertex -3.58089 0.493413 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 2.5 0.2
      vertex -3.73474 2.38712 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.73474 2.38712 0.2
      vertex -3.95609 2.24983 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 1.75 0.2
      vertex -3.95609 2.24983 0.2
      vertex -4.16152 2.08971 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.7805 1.26089 0.2
      vertex -4.8757 1.01844 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.8757 1.01844 0.2
      vertex -4.94449 0.767222 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 1.75 0.2
      vertex -4.94449 0.767222 0.2
      vertex -4.98608 0.510096 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 0.75 1.75 0.2
      vertex -3.58089 0.493413 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.58089 0.493413 0.2
      vertex -3.52707 0.499267 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex -3.52707 0.499267 0.2
      vertex -3.47293 0.499267 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.36624 0.481775 0.2
      vertex -3.31493 0.464488 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.31493 0.464488 0.2
      vertex -3.2658 0.441756 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex -3.2658 0.441756 0.2
      vertex -3.21941 0.413845 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.21941 -0.413845 0.2
      vertex 3.17631 -0.381081 0.2
      vertex -3 9.18485e-17 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.863 0.34385 0.2
      vertex 3.89805 0.302587 0.2
      vertex 4.98608 0.510096 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.89805 0.302587 0.2
      vertex 3.92843 0.257777 0.2
      vertex 4.98608 0.510096 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.98831 0.107485 0.2
      vertex 5 0.25 0.2
      vertex 3.97383 0.159651 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5 0.25 0.2
      vertex 4.98608 0.510096 0.2
      vertex 3.97383 0.159651 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.97383 0.159651 0.2
      vertex 4.98608 0.510096 0.2
      vertex 3.95379 0.209945 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.98608 0.510096 0.2
      vertex 3.92843 0.257777 0.2
      vertex 3.95379 0.209945 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.16152 2.08971 0.2
      vertex -4.3487 1.90858 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.3487 1.90858 0.2
      vertex -4.51548 1.70851 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 1.75 0.2
      vertex -4.51548 1.70851 0.2
      vertex -4.65997 1.49179 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.98608 -0.510096 0.2
      vertex -4.94449 -0.767222 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.94449 -0.767222 0.2
      vertex -4.8757 -1.01844 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 -1.75 0.2
      vertex -4.8757 -1.01844 0.2
      vertex -4.7805 -1.26089 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.7805 -1.26089 0.2
      vertex -4.65997 -1.49179 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.65997 -1.49179 0.2
      vertex -4.51548 -1.70851 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 -1.75 0.2
      vertex -4.51548 -1.70851 0.2
      vertex -4.3487 -1.90858 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.3487 -1.90858 0.2
      vertex -4.16152 -2.08971 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.16152 -2.08971 0.2
      vertex -3.95609 -2.24983 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 -1.75 0.2
      vertex -3.95609 -2.24983 0.2
      vertex -3.73474 -2.38712 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.17631 -0.381081 0.2
      vertex 3.137 -0.34385 0.2
      vertex -3 9.18485e-17 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.137 -0.34385 0.2
      vertex 3.10195 -0.302587 0.2
      vertex -3 9.18485e-17 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3 9.18485e-17 0.2
      vertex 3.10195 -0.302587 0.2
      vertex 3.07157 -0.257777 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 -2.5 0.2
      vertex 3.73474 -2.38712 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.73474 -2.38712 0.2
      vertex 3.95609 -2.24983 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 -1.75 0.2
      vertex 3.95609 -2.24983 0.2
      vertex 4.16152 -2.08971 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.16152 -2.08971 0.2
      vertex 4.3487 -1.90858 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.3487 -1.90858 0.2
      vertex 4.51548 -1.70851 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 -1.75 0.2
      vertex 4.51548 -1.70851 0.2
      vertex 4.65997 -1.49179 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.65997 -1.49179 0.2
      vertex 4.7805 -1.26089 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.7805 -1.26089 0.2
      vertex 4.8757 -1.01844 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 -1.75 0.2
      vertex 4.8757 -1.01844 0.2
      vertex 4.94449 -0.767222 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.36624 -0.481775 0.2
      vertex -3 9.18485e-17 0.2
      vertex 3.41911 -0.493413 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3 9.18485e-17 0.2
      vertex 3.47293 -0.499267 0.2
      vertex 3.41911 -0.493413 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.36624 -0.481775 0.2
      vertex 3.31493 -0.464488 0.2
      vertex -3 9.18485e-17 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.31493 -0.464488 0.2
      vertex 3.2658 -0.441756 0.2
      vertex -3 9.18485e-17 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3 9.18485e-17 0.2
      vertex 3.2658 -0.441756 0.2
      vertex 3.21941 -0.413845 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.10195 0.302587 0.2
      vertex -3.07157 0.257777 0.2
      vertex 3.01169 0.107485 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.07157 0.257777 0.2
      vertex -3.04621 0.209945 0.2
      vertex 3.01169 0.107485 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.10195 0.302587 0.2
      vertex 3.01169 0.107485 0.2
      vertex -3.137 0.34385 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.01169 0.107485 0.2
      vertex 3.02617 0.159651 0.2
      vertex -3.137 0.34385 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.137 0.34385 0.2
      vertex 3.02617 0.159651 0.2
      vertex 3.04621 0.209945 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -0.75 -2.5 0.2
      vertex 0.75 -2.5 0.2
      vertex -0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 0.75 -2.5 0.2
      vertex 0.75 -1.75 0.2
      vertex -0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.78059 -0.413845 0.2
      vertex 3.7342 -0.441756 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.07157 -0.257777 0.2
      vertex 3.04621 -0.209945 0.2
      vertex -3 9.18485e-17 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.04621 -0.209945 0.2
      vertex 3.02617 -0.159651 0.2
      vertex -3 9.18485e-17 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3 9.18485e-17 0.2
      vertex 3.02617 -0.159651 0.2
      vertex 3.01169 -0.107485 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.01169 -0.107485 0.2
      vertex -3.02617 -0.159651 0.2
      vertex -0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.02617 -0.159651 0.2
      vertex -3.04621 -0.209945 0.2
      vertex -0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -0.75 -1.75 0.2
      vertex -3.04621 -0.209945 0.2
      vertex -3.07157 -0.257777 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.78059 0.413845 0.2
      vertex -3.7342 0.441756 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.01169 -0.107485 0.2
      vertex 3.00293 -0.0540595 0.2
      vertex -3 9.18485e-17 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.00293 -0.0540595 0.2
      vertex 3 -3.06162e-17 0.2
      vertex -3 9.18485e-17 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3 9.18485e-17 0.2
      vertex 3 -3.06162e-17 0.2
      vertex -3.00293 0.0540595 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3 -3.06162e-17 0.2
      vertex 3.00293 0.0540595 0.2
      vertex -3.00293 0.0540595 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.00293 0.0540595 0.2
      vertex 3.00293 0.0540595 0.2
      vertex -3.01169 0.107485 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.00293 0.0540595 0.2
      vertex 3.01169 0.107485 0.2
      vertex -3.01169 0.107485 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.01169 0.107485 0.2
      vertex 3.01169 0.107485 0.2
      vertex -3.02617 0.159651 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.01169 0.107485 0.2
      vertex -3.04621 0.209945 0.2
      vertex -3.02617 0.159651 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex 3.63376 0.481775 0.2
      vertex 3.68507 0.464488 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.78059 -0.413845 0.2
      vertex -3.82369 -0.381081 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.92843 0.257777 0.2
      vertex -3.89805 0.302587 0.2
      vertex -5 0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.89805 0.302587 0.2
      vertex -3.863 0.34385 0.2
      vertex -5 0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -5 0.25 0.2
      vertex -3.863 0.34385 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.863 0.34385 0.2
      vertex -3.82369 0.381081 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 1.75 0.2
      vertex -3.82369 0.381081 0.2
      vertex -3.78059 0.413845 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.98831 0.107485 0.2
      vertex 3.99707 0.0540595 0.2
      vertex 5 0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.99707 0.0540595 0.2
      vertex 4 3.06162e-17 0.2
      vertex 5 0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5 0.25 0.2
      vertex 4 3.06162e-17 0.2
      vertex 5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4 3.06162e-17 0.2
      vertex 3.99707 -0.0540595 0.2
      vertex 5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5 -0.25 0.2
      vertex 3.99707 -0.0540595 0.2
      vertex 3.98831 -0.107485 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.98831 -0.107485 0.2
      vertex 3.97383 -0.159651 0.2
      vertex 5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.97383 -0.159651 0.2
      vertex 3.95379 -0.209945 0.2
      vertex 5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5 -0.25 0.2
      vertex 3.95379 -0.209945 0.2
      vertex 3.92843 -0.257777 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.04621 0.209945 0.2
      vertex 3.07157 0.257777 0.2
      vertex -3.137 0.34385 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.07157 0.257777 0.2
      vertex 3.10195 0.302587 0.2
      vertex -3.137 0.34385 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.137 0.34385 0.2
      vertex 3.10195 0.302587 0.2
      vertex 3.137 0.34385 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.137 0.34385 0.2
      vertex 3.17631 0.381081 0.2
      vertex -3.137 0.34385 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.17631 0.381081 0.2
      vertex 3.5 1.75 0.2
      vertex -3.137 0.34385 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.137 0.34385 0.2
      vertex 3.5 1.75 0.2
      vertex -3.17631 0.381081 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex -3.21941 0.413845 0.2
      vertex -3.17631 0.381081 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.68507 0.464488 0.2
      vertex 3.7342 0.441756 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.7342 0.441756 0.2
      vertex 3.78059 0.413845 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex 3.78059 0.413845 0.2
      vertex 4.98608 0.510096 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.78059 0.413845 0.2
      vertex 3.82369 0.381081 0.2
      vertex 4.98608 0.510096 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.98608 0.510096 0.2
      vertex 3.82369 0.381081 0.2
      vertex 3.863 0.34385 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.07157 -0.257777 0.2
      vertex -3.10195 -0.302587 0.2
      vertex -0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.10195 -0.302587 0.2
      vertex -3.137 -0.34385 0.2
      vertex -0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -0.75 -1.75 0.2
      vertex -3.137 -0.34385 0.2
      vertex -3.17631 -0.381081 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.89805 -0.302587 0.2
      vertex -3.92843 -0.257777 0.2
      vertex -5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.92843 -0.257777 0.2
      vertex -3.95379 -0.209945 0.2
      vertex -5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -5 -0.25 0.2
      vertex -3.95379 -0.209945 0.2
      vertex -3.97383 -0.159651 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.99707 0.0540595 0.2
      vertex -3.98831 0.107485 0.2
      vertex -5 0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.92843 -0.257777 0.2
      vertex 3.89805 -0.302587 0.2
      vertex 5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.89805 -0.302587 0.2
      vertex 3.863 -0.34385 0.2
      vertex 5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5 -0.25 0.2
      vertex 3.863 -0.34385 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.863 -0.34385 0.2
      vertex 3.82369 -0.381081 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 -1.75 0.2
      vertex 3.82369 -0.381081 0.2
      vertex 3.78059 -0.413845 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.17631 0.381081 0.2
      vertex 3.21941 0.413845 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.21941 0.413845 0.2
      vertex 3.2658 0.441756 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex 3.2658 0.441756 0.2
      vertex 3.31493 0.464488 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.41911 -0.493413 0.2
      vertex -3.47293 -0.499267 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 -1.75 0.2
      vertex -3.82369 -0.381081 0.2
      vertex -5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.82369 -0.381081 0.2
      vertex -3.863 -0.34385 0.2
      vertex -5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -5 -0.25 0.2
      vertex -3.863 -0.34385 0.2
      vertex -3.89805 -0.302587 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.98831 0.107485 0.2
      vertex -3.97383 0.159651 0.2
      vertex -5 0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.97383 0.159651 0.2
      vertex -3.95379 0.209945 0.2
      vertex -5 0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -5 0.25 0.2
      vertex -3.95379 0.209945 0.2
      vertex -3.92843 0.257777 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.7342 0.441756 0.2
      vertex -3.68507 0.464488 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.68507 0.464488 0.2
      vertex -3.63376 0.481775 0.2
      vertex -3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 1.75 0.2
      vertex -3.63376 0.481775 0.2
      vertex -0.75 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.63376 0.481775 0.2
      vertex 0.75 1.75 0.2
      vertex -0.75 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -0.75 1.75 0.2
      vertex 0.75 1.75 0.2
      vertex -0.75 2.5 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 0.75 1.75 0.2
      vertex 0.75 2.5 0.2
      vertex -0.75 2.5 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.7342 -0.441756 0.2
      vertex 3.68507 -0.464488 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.68507 -0.464488 0.2
      vertex 3.63376 -0.481775 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 -1.75 0.2
      vertex 3.63376 -0.481775 0.2
      vertex 3.58089 -0.493413 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.58089 -0.493413 0.2
      vertex 3.52707 -0.499267 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.52707 -0.499267 0.2
      vertex 3.47293 -0.499267 0.2
      vertex 3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 -1.75 0.2
      vertex 3.47293 -0.499267 0.2
      vertex 0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.47293 -0.499267 0.2
      vertex -3 9.18485e-17 0.2
      vertex 0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 0.75 -1.75 0.2
      vertex -3 9.18485e-17 0.2
      vertex -0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3 9.18485e-17 0.2
      vertex -3.00293 -0.0540595 0.2
      vertex -0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -0.75 -1.75 0.2
      vertex -3.00293 -0.0540595 0.2
      vertex -3.01169 -0.107485 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.31493 0.464488 0.2
      vertex 3.36624 0.481775 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.36624 0.481775 0.2
      vertex 3.41911 0.493413 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex 3.41911 0.493413 0.2
      vertex 3.47293 0.499267 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.41911 -0.493413 0.2
      vertex -3.5 -1.75 0.2
      vertex -3.36624 -0.481775 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.47293 0.499267 0.2
      vertex 3.52707 0.499267 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.52707 0.499267 0.2
      vertex 3.58089 0.493413 0.2
      vertex 3.5 1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 3.5 1.75 0.2
      vertex 3.58089 0.493413 0.2
      vertex 3.63376 0.481775 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.17631 -0.381081 0.2
      vertex -3.21941 -0.413845 0.2
      vertex -0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.21941 -0.413845 0.2
      vertex -3.2658 -0.441756 0.2
      vertex -0.75 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -0.75 -1.75 0.2
      vertex -3.2658 -0.441756 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.2658 -0.441756 0.2
      vertex -3.31493 -0.464488 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 -1.75 0.2
      vertex -3.31493 -0.464488 0.2
      vertex -3.36624 -0.481775 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.97383 -0.159651 0.2
      vertex -3.98831 -0.107485 0.2
      vertex -5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.98831 -0.107485 0.2
      vertex -3.99707 -0.0540595 0.2
      vertex -5 -0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -5 -0.25 0.2
      vertex -3.99707 -0.0540595 0.2
      vertex -5 0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.99707 -0.0540595 0.2
      vertex -4 3.06162e-17 0.2
      vertex -5 0.25 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -5 0.25 0.2
      vertex -4 3.06162e-17 0.2
      vertex -3.99707 0.0540595 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.47293 -0.499267 0.2
      vertex -3.52707 -0.499267 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.52707 -0.499267 0.2
      vertex -3.58089 -0.493413 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 -1.75 0.2
      vertex -3.58089 -0.493413 0.2
      vertex -3.63376 -0.481775 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.63376 -0.481775 0.2
      vertex -3.68507 -0.464488 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.68507 -0.464488 0.2
      vertex -3.7342 -0.441756 0.2
      vertex -3.5 -1.75 0.2
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.5 -1.75 0.2
      vertex -3.7342 -0.441756 0.2
      vertex -3.78059 -0.413845 0.2
    endloop
  endfacet
  facet normal -0.433385 0.901209 0
    outer loop
      vertex -3.5 2.5 0.2
      vertex -3.5 2.5 0
      vertex -3.73474 2.38712 0
    endloop
  endfacet
  facet normal -0.433385 0.901209 0
    outer loop
      vertex -3.5 2.5 0.2
      vertex -3.73474 2.38712 0
      vertex -3.73474 2.38712 0.2
    endloop
  endfacet
  facet normal -0.527076 0.849818 0
    outer loop
      vertex -3.73474 2.38712 0
      vertex -3.95609 2.24983 0
      vertex -3.73474 2.38712 0.2
    endloop
  endfacet
  facet normal -0.527076 0.849818 0
    outer loop
      vertex -3.73474 2.38712 0.2
      vertex -3.95609 2.24983 0
      vertex -3.95609 2.24983 0.2
    endloop
  endfacet
  facet normal -0.614747 0.788724 0
    outer loop
      vertex -3.95609 2.24983 0
      vertex -4.16152 2.08971 0
      vertex -3.95609 2.24983 0.2
    endloop
  endfacet
  facet normal -0.614747 0.788724 0
    outer loop
      vertex -3.95609 2.24983 0.2
      vertex -4.16152 2.08971 0
      vertex -4.16152 2.08971 0.2
    endloop
  endfacet
  facet normal -0.695399 0.718623 0
    outer loop
      vertex -4.16152 2.08971 0
      vertex -4.3487 1.90858 0
      vertex -4.16152 2.08971 0.2
    endloop
  endfacet
  facet normal -0.695399 0.718623 0
    outer loop
      vertex -4.16152 2.08971 0.2
      vertex -4.3487 1.90858 0
      vertex -4.3487 1.90858 0.2
    endloop
  endfacet
  facet normal -0.76811 0.640318 0
    outer loop
      vertex -4.3487 1.90858 0
      vertex -4.51548 1.70851 0
      vertex -4.3487 1.90858 0.2
    endloop
  endfacet
  facet normal -0.76811 0.640318 0
    outer loop
      vertex -4.3487 1.90858 0.2
      vertex -4.51548 1.70851 0
      vertex -4.51548 1.70851 0.2
    endloop
  endfacet
  facet normal -0.83205 0.5547 0
    outer loop
      vertex -4.51548 1.70851 0
      vertex -4.65997 1.49179 0
      vertex -4.51548 1.70851 0.2
    endloop
  endfacet
  facet normal -0.83205 0.5547 0
    outer loop
      vertex -4.51548 1.70851 0.2
      vertex -4.65997 1.49179 0
      vertex -4.65997 1.49179 0.2
    endloop
  endfacet
  facet normal -0.886489 0.462749 0
    outer loop
      vertex -4.65997 1.49179 0
      vertex -4.7805 1.26089 0
      vertex -4.65997 1.49179 0.2
    endloop
  endfacet
  facet normal -0.886489 0.462749 0
    outer loop
      vertex -4.65997 1.49179 0.2
      vertex -4.7805 1.26089 0
      vertex -4.7805 1.26089 0.2
    endloop
  endfacet
  facet normal -0.930806 0.365512 0
    outer loop
      vertex -4.7805 1.26089 0
      vertex -4.8757 1.01844 0
      vertex -4.7805 1.26089 0.2
    endloop
  endfacet
  facet normal -0.930806 0.365512 0
    outer loop
      vertex -4.7805 1.26089 0.2
      vertex -4.8757 1.01844 0
      vertex -4.8757 1.01844 0.2
    endloop
  endfacet
  facet normal -0.964494 0.264103 0
    outer loop
      vertex -4.8757 1.01844 0
      vertex -4.94449 0.767222 0
      vertex -4.8757 1.01844 0.2
    endloop
  endfacet
  facet normal -0.964494 0.264103 0
    outer loop
      vertex -4.8757 1.01844 0.2
      vertex -4.94449 0.767222 0
      vertex -4.94449 0.767222 0.2
    endloop
  endfacet
  facet normal -0.987169 0.159678 0
    outer loop
      vertex -4.94449 0.767222 0
      vertex -4.98608 0.510096 0
      vertex -4.94449 0.767222 0.2
    endloop
  endfacet
  facet normal -0.987169 0.159678 0
    outer loop
      vertex -4.94449 0.767222 0.2
      vertex -4.98608 0.510096 0
      vertex -4.98608 0.510096 0.2
    endloop
  endfacet
  facet normal -0.998572 0.0534291 0
    outer loop
      vertex -4.98608 0.510096 0
      vertex -5 0.25 0
      vertex -4.98608 0.510096 0.2
    endloop
  endfacet
  facet normal -0.998572 0.0534291 0
    outer loop
      vertex -4.98608 0.510096 0.2
      vertex -5 0.25 0
      vertex -5 0.25 0.2
    endloop
  endfacet
  facet normal 0.998533 -0.0541396 0
    outer loop
      vertex 3 -3.06162e-17 0.2
      vertex 3 -3.06162e-17 0
      vertex 3.00293 0.0540595 0.2
    endloop
  endfacet
  facet normal 0.998533 -0.0541396 0
    outer loop
      vertex 3 -3.06162e-17 0
      vertex 3.00293 0.0540595 0
      vertex 3.00293 0.0540595 0.2
    endloop
  endfacet
  facet normal 0.986826 -0.161782 0
    outer loop
      vertex 3.00293 0.0540595 0.2
      vertex 3.00293 0.0540595 0
      vertex 3.01169 0.107485 0.2
    endloop
  endfacet
  facet normal 0.986826 -0.161782 0
    outer loop
      vertex 3.00293 0.0540595 0
      vertex 3.01169 0.107485 0
      vertex 3.01169 0.107485 0.2
    endloop
  endfacet
  facet normal 0.96355 -0.267529 0
    outer loop
      vertex 3.01169 0.107485 0.2
      vertex 3.01169 0.107485 0
      vertex 3.02617 0.159651 0.2
    endloop
  endfacet
  facet normal 0.96355 -0.267529 0
    outer loop
      vertex 3.01169 0.107485 0
      vertex 3.02617 0.159651 0
      vertex 3.02617 0.159651 0.2
    endloop
  endfacet
  facet normal 0.928977 -0.370138 0
    outer loop
      vertex 3.02617 0.159651 0.2
      vertex 3.02617 0.159651 0
      vertex 3.04621 0.209945 0.2
    endloop
  endfacet
  facet normal 0.928977 -0.370138 0
    outer loop
      vertex 3.02617 0.159651 0
      vertex 3.04621 0.209945 0
      vertex 3.04621 0.209945 0.2
    endloop
  endfacet
  facet normal 0.883513 -0.468406 0
    outer loop
      vertex 3.04621 0.209945 0.2
      vertex 3.04621 0.209945 0
      vertex 3.07157 0.257777 0.2
    endloop
  endfacet
  facet normal 0.883513 -0.468406 0
    outer loop
      vertex 3.04621 0.209945 0
      vertex 3.07157 0.257777 0
      vertex 3.07157 0.257777 0.2
    endloop
  endfacet
  facet normal 0.827688 -0.561189 0
    outer loop
      vertex 3.07157 0.257777 0.2
      vertex 3.07157 0.257777 0
      vertex 3.10195 0.302587 0.2
    endloop
  endfacet
  facet normal 0.827688 -0.561189 0
    outer loop
      vertex 3.07157 0.257777 0
      vertex 3.10195 0.302587 0
      vertex 3.10195 0.302587 0.2
    endloop
  endfacet
  facet normal 0.762163 -0.647385 0
    outer loop
      vertex 3.10195 0.302587 0.2
      vertex 3.10195 0.302587 0
      vertex 3.137 0.34385 0.2
    endloop
  endfacet
  facet normal 0.762163 -0.647385 0
    outer loop
      vertex 3.10195 0.302587 0
      vertex 3.137 0.34385 0
      vertex 3.137 0.34385 0.2
    endloop
  endfacet
  facet normal 0.687698 -0.725997 0
    outer loop
      vertex 3.137 0.34385 0.2
      vertex 3.137 0.34385 0
      vertex 3.17631 0.381081 0.2
    endloop
  endfacet
  facet normal 0.687698 -0.725997 0
    outer loop
      vertex 3.137 0.34385 0
      vertex 3.17631 0.381081 0
      vertex 3.17631 0.381081 0.2
    endloop
  endfacet
  facet normal 0.605176 -0.796092 0
    outer loop
      vertex 3.17631 0.381081 0.2
      vertex 3.17631 0.381081 0
      vertex 3.21941 0.413845 0.2
    endloop
  endfacet
  facet normal 0.605176 -0.796092 0
    outer loop
      vertex 3.17631 0.381081 0
      vertex 3.21941 0.413845 0
      vertex 3.21941 0.413845 0.2
    endloop
  endfacet
  facet normal 0.515552 -0.856858 0
    outer loop
      vertex 3.21941 0.413845 0.2
      vertex 3.21941 0.413845 0
      vertex 3.2658 0.441756 0.2
    endloop
  endfacet
  facet normal 0.515552 -0.856858 0
    outer loop
      vertex 3.21941 0.413845 0
      vertex 3.2658 0.441756 0
      vertex 3.2658 0.441756 0.2
    endloop
  endfacet
  facet normal 0.41989 -0.907575 0
    outer loop
      vertex 3.2658 0.441756 0.2
      vertex 3.2658 0.441756 0
      vertex 3.31493 0.464488 0.2
    endloop
  endfacet
  facet normal 0.41989 -0.907575 0
    outer loop
      vertex 3.2658 0.441756 0
      vertex 3.31493 0.464488 0
      vertex 3.31493 0.464488 0.2
    endloop
  endfacet
  facet normal 0.3193 -0.947654 0
    outer loop
      vertex 3.31493 0.464488 0.2
      vertex 3.31493 0.464488 0
      vertex 3.36624 0.481775 0.2
    endloop
  endfacet
  facet normal 0.3193 -0.947654 0
    outer loop
      vertex 3.31493 0.464488 0
      vertex 3.36624 0.481775 0
      vertex 3.36624 0.481775 0.2
    endloop
  endfacet
  facet normal 0.214971 -0.97662 0
    outer loop
      vertex 3.36624 0.481775 0.2
      vertex 3.36624 0.481775 0
      vertex 3.41911 0.493413 0.2
    endloop
  endfacet
  facet normal 0.214971 -0.97662 0
    outer loop
      vertex 3.36624 0.481775 0
      vertex 3.41911 0.493413 0
      vertex 3.41911 0.493413 0.2
    endloop
  endfacet
  facet normal 0.108119 -0.994138 0
    outer loop
      vertex 3.41911 0.493413 0.2
      vertex 3.41911 0.493413 0
      vertex 3.47293 0.499267 0.2
    endloop
  endfacet
  facet normal 0.108119 -0.994138 0
    outer loop
      vertex 3.41911 0.493413 0
      vertex 3.47293 0.499267 0
      vertex 3.47293 0.499267 0.2
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 3.47293 0.499267 0.2
      vertex 3.47293 0.499267 0
      vertex 3.52707 0.499267 0.2
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 3.47293 0.499267 0
      vertex 3.52707 0.499267 0
      vertex 3.52707 0.499267 0.2
    endloop
  endfacet
  facet normal -0.108119 -0.994138 0
    outer loop
      vertex 3.52707 0.499267 0.2
      vertex 3.52707 0.499267 0
      vertex 3.58089 0.493413 0.2
    endloop
  endfacet
  facet normal -0.108119 -0.994138 0
    outer loop
      vertex 3.52707 0.499267 0
      vertex 3.58089 0.493413 0
      vertex 3.58089 0.493413 0.2
    endloop
  endfacet
  facet normal -0.214971 -0.97662 0
    outer loop
      vertex 3.58089 0.493413 0.2
      vertex 3.58089 0.493413 0
      vertex 3.63376 0.481775 0.2
    endloop
  endfacet
  facet normal -0.214971 -0.97662 0
    outer loop
      vertex 3.58089 0.493413 0
      vertex 3.63376 0.481775 0
      vertex 3.63376 0.481775 0.2
    endloop
  endfacet
  facet normal -0.3193 -0.947654 0
    outer loop
      vertex 3.63376 0.481775 0.2
      vertex 3.63376 0.481775 0
      vertex 3.68507 0.464488 0.2
    endloop
  endfacet
  facet normal -0.3193 -0.947654 0
    outer loop
      vertex 3.63376 0.481775 0
      vertex 3.68507 0.464488 0
      vertex 3.68507 0.464488 0.2
    endloop
  endfacet
  facet normal -0.41989 -0.907575 0
    outer loop
      vertex 3.68507 0.464488 0.2
      vertex 3.68507 0.464488 0
      vertex 3.7342 0.441756 0.2
    endloop
  endfacet
  facet normal -0.41989 -0.907575 0
    outer loop
      vertex 3.68507 0.464488 0
      vertex 3.7342 0.441756 0
      vertex 3.7342 0.441756 0.2
    endloop
  endfacet
  facet normal -0.515555 -0.856857 0
    outer loop
      vertex 3.7342 0.441756 0.2
      vertex 3.7342 0.441756 0
      vertex 3.78059 0.413845 0.2
    endloop
  endfacet
  facet normal -0.515555 -0.856857 0
    outer loop
      vertex 3.7342 0.441756 0
      vertex 3.78059 0.413845 0
      vertex 3.78059 0.413845 0.2
    endloop
  endfacet
  facet normal -0.605173 -0.796094 0
    outer loop
      vertex 3.78059 0.413845 0.2
      vertex 3.78059 0.413845 0
      vertex 3.82369 0.381081 0.2
    endloop
  endfacet
  facet normal -0.605173 -0.796094 0
    outer loop
      vertex 3.78059 0.413845 0
      vertex 3.82369 0.381081 0
      vertex 3.82369 0.381081 0.2
    endloop
  endfacet
  facet normal -0.687698 -0.725997 0
    outer loop
      vertex 3.82369 0.381081 0.2
      vertex 3.82369 0.381081 0
      vertex 3.863 0.34385 0.2
    endloop
  endfacet
  facet normal -0.687698 -0.725997 0
    outer loop
      vertex 3.82369 0.381081 0
      vertex 3.863 0.34385 0
      vertex 3.863 0.34385 0.2
    endloop
  endfacet
  facet normal -0.762163 -0.647385 0
    outer loop
      vertex 3.863 0.34385 0.2
      vertex 3.863 0.34385 0
      vertex 3.89805 0.302587 0.2
    endloop
  endfacet
  facet normal -0.762163 -0.647385 0
    outer loop
      vertex 3.863 0.34385 0
      vertex 3.89805 0.302587 0
      vertex 3.89805 0.302587 0.2
    endloop
  endfacet
  facet normal -0.82769 -0.561186 0
    outer loop
      vertex 3.89805 0.302587 0.2
      vertex 3.89805 0.302587 0
      vertex 3.92843 0.257777 0.2
    endloop
  endfacet
  facet normal -0.82769 -0.561186 0
    outer loop
      vertex 3.89805 0.302587 0
      vertex 3.92843 0.257777 0
      vertex 3.92843 0.257777 0.2
    endloop
  endfacet
  facet normal -0.883512 -0.468409 0
    outer loop
      vertex 3.92843 0.257777 0.2
      vertex 3.92843 0.257777 0
      vertex 3.95379 0.209945 0.2
    endloop
  endfacet
  facet normal -0.883512 -0.468409 0
    outer loop
      vertex 3.92843 0.257777 0
      vertex 3.95379 0.209945 0
      vertex 3.95379 0.209945 0.2
    endloop
  endfacet
  facet normal -0.928975 -0.370141 0
    outer loop
      vertex 3.95379 0.209945 0.2
      vertex 3.95379 0.209945 0
      vertex 3.97383 0.159651 0.2
    endloop
  endfacet
  facet normal -0.928975 -0.370141 0
    outer loop
      vertex 3.95379 0.209945 0
      vertex 3.97383 0.159651 0
      vertex 3.97383 0.159651 0.2
    endloop
  endfacet
  facet normal -0.963551 -0.267526 0
    outer loop
      vertex 3.97383 0.159651 0.2
      vertex 3.97383 0.159651 0
      vertex 3.98831 0.107485 0.2
    endloop
  endfacet
  facet normal -0.963551 -0.267526 0
    outer loop
      vertex 3.97383 0.159651 0
      vertex 3.98831 0.107485 0
      vertex 3.98831 0.107485 0.2
    endloop
  endfacet
  facet normal -0.986827 -0.161779 0
    outer loop
      vertex 3.98831 0.107485 0.2
      vertex 3.98831 0.107485 0
      vertex 3.99707 0.0540595 0.2
    endloop
  endfacet
  facet normal -0.986827 -0.161779 0
    outer loop
      vertex 3.98831 0.107485 0
      vertex 3.99707 0.0540595 0
      vertex 3.99707 0.0540595 0.2
    endloop
  endfacet
  facet normal -0.998533 -0.0541396 0
    outer loop
      vertex 3.99707 0.0540595 0.2
      vertex 3.99707 0.0540595 0
      vertex 4 3.06162e-17 0.2
    endloop
  endfacet
  facet normal -0.998533 -0.0541396 -3.05577e-17
    outer loop
      vertex 3.99707 0.0540595 0
      vertex 4 1.53081e-16 0
      vertex 4 3.06162e-17 0.2
    endloop
  endfacet
  facet normal -0.998533 0.0541396 3.31509e-17
    outer loop
      vertex 4 3.06162e-17 0.2
      vertex 4 1.53081e-16 0
      vertex 3.99707 -0.0540595 0.2
    endloop
  endfacet
  facet normal -0.998533 0.0541396 0
    outer loop
      vertex 4 1.53081e-16 0
      vertex 3.99707 -0.0540595 0
      vertex 3.99707 -0.0540595 0.2
    endloop
  endfacet
  facet normal -0.986827 0.161779 0
    outer loop
      vertex 3.99707 -0.0540595 0.2
      vertex 3.99707 -0.0540595 0
      vertex 3.98831 -0.107485 0.2
    endloop
  endfacet
  facet normal -0.986827 0.161779 0
    outer loop
      vertex 3.99707 -0.0540595 0
      vertex 3.98831 -0.107485 0
      vertex 3.98831 -0.107485 0.2
    endloop
  endfacet
  facet normal -0.963551 0.267526 0
    outer loop
      vertex 3.98831 -0.107485 0.2
      vertex 3.98831 -0.107485 0
      vertex 3.97383 -0.159651 0.2
    endloop
  endfacet
  facet normal -0.963551 0.267526 0
    outer loop
      vertex 3.98831 -0.107485 0
      vertex 3.97383 -0.159651 0
      vertex 3.97383 -0.159651 0.2
    endloop
  endfacet
  facet normal -0.928975 0.370141 0
    outer loop
      vertex 3.97383 -0.159651 0.2
      vertex 3.97383 -0.159651 0
      vertex 3.95379 -0.209945 0.2
    endloop
  endfacet
  facet normal -0.928975 0.370141 0
    outer loop
      vertex 3.97383 -0.159651 0
      vertex 3.95379 -0.209945 0
      vertex 3.95379 -0.209945 0.2
    endloop
  endfacet
  facet normal -0.883512 0.468409 0
    outer loop
      vertex 3.95379 -0.209945 0.2
      vertex 3.95379 -0.209945 0
      vertex 3.92843 -0.257777 0.2
    endloop
  endfacet
  facet normal -0.883512 0.468409 0
    outer loop
      vertex 3.95379 -0.209945 0
      vertex 3.92843 -0.257777 0
      vertex 3.92843 -0.257777 0.2
    endloop
  endfacet
  facet normal -0.82769 0.561186 0
    outer loop
      vertex 3.92843 -0.257777 0.2
      vertex 3.92843 -0.257777 0
      vertex 3.89805 -0.302587 0.2
    endloop
  endfacet
  facet normal -0.82769 0.561186 0
    outer loop
      vertex 3.92843 -0.257777 0
      vertex 3.89805 -0.302587 0
      vertex 3.89805 -0.302587 0.2
    endloop
  endfacet
  facet normal -0.762163 0.647385 0
    outer loop
      vertex 3.89805 -0.302587 0.2
      vertex 3.89805 -0.302587 0
      vertex 3.863 -0.34385 0.2
    endloop
  endfacet
  facet normal -0.762163 0.647385 0
    outer loop
      vertex 3.89805 -0.302587 0
      vertex 3.863 -0.34385 0
      vertex 3.863 -0.34385 0.2
    endloop
  endfacet
  facet normal -0.687698 0.725997 0
    outer loop
      vertex 3.863 -0.34385 0.2
      vertex 3.863 -0.34385 0
      vertex 3.82369 -0.381081 0.2
    endloop
  endfacet
  facet normal -0.687698 0.725997 0
    outer loop
      vertex 3.863 -0.34385 0
      vertex 3.82369 -0.381081 0
      vertex 3.82369 -0.381081 0.2
    endloop
  endfacet
  facet normal -0.605173 0.796094 0
    outer loop
      vertex 3.82369 -0.381081 0.2
      vertex 3.82369 -0.381081 0
      vertex 3.78059 -0.413845 0.2
    endloop
  endfacet
  facet normal -0.605173 0.796094 0
    outer loop
      vertex 3.82369 -0.381081 0
      vertex 3.78059 -0.413845 0
      vertex 3.78059 -0.413845 0.2
    endloop
  endfacet
  facet normal -0.515555 0.856857 0
    outer loop
      vertex 3.78059 -0.413845 0.2
      vertex 3.78059 -0.413845 0
      vertex 3.7342 -0.441756 0.2
    endloop
  endfacet
  facet normal -0.515555 0.856857 0
    outer loop
      vertex 3.78059 -0.413845 0
      vertex 3.7342 -0.441756 0
      vertex 3.7342 -0.441756 0.2
    endloop
  endfacet
  facet normal -0.41989 0.907575 0
    outer loop
      vertex 3.7342 -0.441756 0.2
      vertex 3.7342 -0.441756 0
      vertex 3.68507 -0.464488 0.2
    endloop
  endfacet
  facet normal -0.41989 0.907575 0
    outer loop
      vertex 3.7342 -0.441756 0
      vertex 3.68507 -0.464488 0
      vertex 3.68507 -0.464488 0.2
    endloop
  endfacet
  facet normal -0.3193 0.947654 0
    outer loop
      vertex 3.68507 -0.464488 0.2
      vertex 3.68507 -0.464488 0
      vertex 3.63376 -0.481775 0.2
    endloop
  endfacet
  facet normal -0.3193 0.947654 0
    outer loop
      vertex 3.68507 -0.464488 0
      vertex 3.63376 -0.481775 0
      vertex 3.63376 -0.481775 0.2
    endloop
  endfacet
  facet normal -0.214971 0.97662 0
    outer loop
      vertex 3.63376 -0.481775 0.2
      vertex 3.63376 -0.481775 0
      vertex 3.58089 -0.493413 0.2
    endloop
  endfacet
  facet normal -0.214971 0.97662 0
    outer loop
      vertex 3.63376 -0.481775 0
      vertex 3.58089 -0.493413 0
      vertex 3.58089 -0.493413 0.2
    endloop
  endfacet
  facet normal -0.108119 0.994138 0
    outer loop
      vertex 3.58089 -0.493413 0.2
      vertex 3.58089 -0.493413 0
      vertex 3.52707 -0.499267 0.2
    endloop
  endfacet
  facet normal -0.108119 0.994138 0
    outer loop
      vertex 3.58089 -0.493413 0
      vertex 3.52707 -0.499267 0
      vertex 3.52707 -0.499267 0.2
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 3.52707 -0.499267 0.2
      vertex 3.52707 -0.499267 0
      vertex 3.47293 -0.499267 0.2
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 3.52707 -0.499267 0
      vertex 3.47293 -0.499267 0
      vertex 3.47293 -0.499267 0.2
    endloop
  endfacet
  facet normal 0.108119 0.994138 0
    outer loop
      vertex 3.47293 -0.499267 0.2
      vertex 3.47293 -0.499267 0
      vertex 3.41911 -0.493413 0.2
    endloop
  endfacet
  facet normal 0.108119 0.994138 0
    outer loop
      vertex 3.47293 -0.499267 0
      vertex 3.41911 -0.493413 0
      vertex 3.41911 -0.493413 0.2
    endloop
  endfacet
  facet normal 0.214971 0.97662 0
    outer loop
      vertex 3.41911 -0.493413 0.2
      vertex 3.41911 -0.493413 0
      vertex 3.36624 -0.481775 0.2
    endloop
  endfacet
  facet normal 0.214971 0.97662 0
    outer loop
      vertex 3.41911 -0.493413 0
      vertex 3.36624 -0.481775 0
      vertex 3.36624 -0.481775 0.2
    endloop
  endfacet
  facet normal 0.3193 0.947654 0
    outer loop
      vertex 3.36624 -0.481775 0.2
      vertex 3.36624 -0.481775 0
      vertex 3.31493 -0.464488 0.2
    endloop
  endfacet
  facet normal 0.3193 0.947654 0
    outer loop
      vertex 3.36624 -0.481775 0
      vertex 3.31493 -0.464488 0
      vertex 3.31493 -0.464488 0.2
    endloop
  endfacet
  facet normal 0.41989 0.907575 0
    outer loop
      vertex 3.31493 -0.464488 0.2
      vertex 3.31493 -0.464488 0
      vertex 3.2658 -0.441756 0.2
    endloop
  endfacet
  facet normal 0.41989 0.907575 0
    outer loop
      vertex 3.31493 -0.464488 0
      vertex 3.2658 -0.441756 0
      vertex 3.2658 -0.441756 0.2
    endloop
  endfacet
  facet normal 0.515552 0.856858 0
    outer loop
      vertex 3.2658 -0.441756 0.2
      vertex 3.2658 -0.441756 0
      vertex 3.21941 -0.413845 0.2
    endloop
  endfacet
  facet normal 0.515552 0.856858 0
    outer loop
      vertex 3.2658 -0.441756 0
      vertex 3.21941 -0.413845 0
      vertex 3.21941 -0.413845 0.2
    endloop
  endfacet
  facet normal 0.605176 0.796092 0
    outer loop
      vertex 3.21941 -0.413845 0.2
      vertex 3.21941 -0.413845 0
      vertex 3.17631 -0.381081 0.2
    endloop
  endfacet
  facet normal 0.605176 0.796092 0
    outer loop
      vertex 3.21941 -0.413845 0
      vertex 3.17631 -0.381081 0
      vertex 3.17631 -0.381081 0.2
    endloop
  endfacet
  facet normal 0.687698 0.725997 0
    outer loop
      vertex 3.17631 -0.381081 0.2
      vertex 3.17631 -0.381081 0
      vertex 3.137 -0.34385 0.2
    endloop
  endfacet
  facet normal 0.687698 0.725997 0
    outer loop
      vertex 3.17631 -0.381081 0
      vertex 3.137 -0.34385 0
      vertex 3.137 -0.34385 0.2
    endloop
  endfacet
  facet normal 0.762163 0.647385 0
    outer loop
      vertex 3.137 -0.34385 0.2
      vertex 3.137 -0.34385 0
      vertex 3.10195 -0.302587 0.2
    endloop
  endfacet
  facet normal 0.762163 0.647385 0
    outer loop
      vertex 3.137 -0.34385 0
      vertex 3.10195 -0.302587 0
      vertex 3.10195 -0.302587 0.2
    endloop
  endfacet
  facet normal 0.827688 0.561189 0
    outer loop
      vertex 3.10195 -0.302587 0.2
      vertex 3.10195 -0.302587 0
      vertex 3.07157 -0.257777 0.2
    endloop
  endfacet
  facet normal 0.827688 0.561189 0
    outer loop
      vertex 3.10195 -0.302587 0
      vertex 3.07157 -0.257777 0
      vertex 3.07157 -0.257777 0.2
    endloop
  endfacet
  facet normal 0.883513 0.468406 0
    outer loop
      vertex 3.07157 -0.257777 0.2
      vertex 3.07157 -0.257777 0
      vertex 3.04621 -0.209945 0.2
    endloop
  endfacet
  facet normal 0.883513 0.468406 0
    outer loop
      vertex 3.07157 -0.257777 0
      vertex 3.04621 -0.209945 0
      vertex 3.04621 -0.209945 0.2
    endloop
  endfacet
  facet normal 0.928977 0.370138 0
    outer loop
      vertex 3.04621 -0.209945 0.2
      vertex 3.04621 -0.209945 0
      vertex 3.02617 -0.159651 0.2
    endloop
  endfacet
  facet normal 0.928977 0.370138 0
    outer loop
      vertex 3.04621 -0.209945 0
      vertex 3.02617 -0.159651 0
      vertex 3.02617 -0.159651 0.2
    endloop
  endfacet
  facet normal 0.96355 0.267529 0
    outer loop
      vertex 3.02617 -0.159651 0.2
      vertex 3.02617 -0.159651 0
      vertex 3.01169 -0.107485 0.2
    endloop
  endfacet
  facet normal 0.96355 0.267529 0
    outer loop
      vertex 3.02617 -0.159651 0
      vertex 3.01169 -0.107485 0
      vertex 3.01169 -0.107485 0.2
    endloop
  endfacet
  facet normal 0.986826 0.161782 0
    outer loop
      vertex 3.01169 -0.107485 0.2
      vertex 3.01169 -0.107485 0
      vertex 3.00293 -0.0540595 0.2
    endloop
  endfacet
  facet normal 0.986826 0.161782 0
    outer loop
      vertex 3.01169 -0.107485 0
      vertex 3.00293 -0.0540595 0
      vertex 3.00293 -0.0540595 0.2
    endloop
  endfacet
  facet normal 0.998533 0.0541396 0
    outer loop
      vertex 3.00293 -0.0540595 0.2
      vertex 3.00293 -0.0540595 0
      vertex 3 -3.06162e-17 0.2
    endloop
  endfacet
  facet normal 0.998533 0.0541396 0
    outer loop
      vertex 3.00293 -0.0540595 0
      vertex 3 -3.06162e-17 0
      vertex 3 -3.06162e-17 0.2
    endloop
  endfacet
  facet normal 0.998533 -0.0541396 0
    outer loop
      vertex -4 3.06162e-17 0.2
      vertex -4 3.06162e-17 0
      vertex -3.99707 0.0540595 0.2
    endloop
  endfacet
  facet normal 0.998533 -0.0541396 0
    outer loop
      vertex -4 3.06162e-17 0
      vertex -3.99707 0.0540595 0
      vertex -3.99707 0.0540595 0.2
    endloop
  endfacet
  facet normal 0.986827 -0.161779 0
    outer loop
      vertex -3.99707 0.0540595 0.2
      vertex -3.99707 0.0540595 0
      vertex -3.98831 0.107485 0.2
    endloop
  endfacet
  facet normal 0.986827 -0.161779 0
    outer loop
      vertex -3.99707 0.0540595 0
      vertex -3.98831 0.107485 0
      vertex -3.98831 0.107485 0.2
    endloop
  endfacet
  facet normal 0.963551 -0.267526 0
    outer loop
      vertex -3.98831 0.107485 0.2
      vertex -3.98831 0.107485 0
      vertex -3.97383 0.159651 0.2
    endloop
  endfacet
  facet normal 0.963551 -0.267526 0
    outer loop
      vertex -3.98831 0.107485 0
      vertex -3.97383 0.159651 0
      vertex -3.97383 0.159651 0.2
    endloop
  endfacet
  facet normal 0.928975 -0.370141 0
    outer loop
      vertex -3.97383 0.159651 0.2
      vertex -3.97383 0.159651 0
      vertex -3.95379 0.209945 0.2
    endloop
  endfacet
  facet normal 0.928975 -0.370141 0
    outer loop
      vertex -3.97383 0.159651 0
      vertex -3.95379 0.209945 0
      vertex -3.95379 0.209945 0.2
    endloop
  endfacet
  facet normal 0.883512 -0.468409 0
    outer loop
      vertex -3.95379 0.209945 0.2
      vertex -3.95379 0.209945 0
      vertex -3.92843 0.257777 0.2
    endloop
  endfacet
  facet normal 0.883512 -0.468409 0
    outer loop
      vertex -3.95379 0.209945 0
      vertex -3.92843 0.257777 0
      vertex -3.92843 0.257777 0.2
    endloop
  endfacet
  facet normal 0.82769 -0.561186 0
    outer loop
      vertex -3.92843 0.257777 0.2
      vertex -3.92843 0.257777 0
      vertex -3.89805 0.302587 0.2
    endloop
  endfacet
  facet normal 0.82769 -0.561186 0
    outer loop
      vertex -3.92843 0.257777 0
      vertex -3.89805 0.302587 0
      vertex -3.89805 0.302587 0.2
    endloop
  endfacet
  facet normal 0.762163 -0.647385 0
    outer loop
      vertex -3.89805 0.302587 0.2
      vertex -3.89805 0.302587 0
      vertex -3.863 0.34385 0.2
    endloop
  endfacet
  facet normal 0.762163 -0.647385 0
    outer loop
      vertex -3.89805 0.302587 0
      vertex -3.863 0.34385 0
      vertex -3.863 0.34385 0.2
    endloop
  endfacet
  facet normal 0.687698 -0.725997 0
    outer loop
      vertex -3.863 0.34385 0.2
      vertex -3.863 0.34385 0
      vertex -3.82369 0.381081 0.2
    endloop
  endfacet
  facet normal 0.687698 -0.725997 0
    outer loop
      vertex -3.863 0.34385 0
      vertex -3.82369 0.381081 0
      vertex -3.82369 0.381081 0.2
    endloop
  endfacet
  facet normal 0.605173 -0.796094 0
    outer loop
      vertex -3.82369 0.381081 0.2
      vertex -3.82369 0.381081 0
      vertex -3.78059 0.413845 0.2
    endloop
  endfacet
  facet normal 0.605173 -0.796094 0
    outer loop
      vertex -3.82369 0.381081 0
      vertex -3.78059 0.413845 0
      vertex -3.78059 0.413845 0.2
    endloop
  endfacet
  facet normal 0.515555 -0.856857 0
    outer loop
      vertex -3.78059 0.413845 0.2
      vertex -3.78059 0.413845 0
      vertex -3.7342 0.441756 0.2
    endloop
  endfacet
  facet normal 0.515555 -0.856857 0
    outer loop
      vertex -3.78059 0.413845 0
      vertex -3.7342 0.441756 0
      vertex -3.7342 0.441756 0.2
    endloop
  endfacet
  facet normal 0.41989 -0.907575 0
    outer loop
      vertex -3.7342 0.441756 0.2
      vertex -3.7342 0.441756 0
      vertex -3.68507 0.464488 0.2
    endloop
  endfacet
  facet normal 0.41989 -0.907575 0
    outer loop
      vertex -3.7342 0.441756 0
      vertex -3.68507 0.464488 0
      vertex -3.68507 0.464488 0.2
    endloop
  endfacet
  facet normal 0.3193 -0.947654 0
    outer loop
      vertex -3.68507 0.464488 0.2
      vertex -3.68507 0.464488 0
      vertex -3.63376 0.481775 0.2
    endloop
  endfacet
  facet normal 0.3193 -0.947654 0
    outer loop
      vertex -3.68507 0.464488 0
      vertex -3.63376 0.481775 0
      vertex -3.63376 0.481775 0.2
    endloop
  endfacet
  facet normal 0.214971 -0.97662 0
    outer loop
      vertex -3.63376 0.481775 0.2
      vertex -3.63376 0.481775 0
      vertex -3.58089 0.493413 0.2
    endloop
  endfacet
  facet normal 0.214971 -0.97662 0
    outer loop
      vertex -3.63376 0.481775 0
      vertex -3.58089 0.493413 0
      vertex -3.58089 0.493413 0.2
    endloop
  endfacet
  facet normal 0.108119 -0.994138 0
    outer loop
      vertex -3.58089 0.493413 0.2
      vertex -3.58089 0.493413 0
      vertex -3.52707 0.499267 0.2
    endloop
  endfacet
  facet normal 0.108119 -0.994138 0
    outer loop
      vertex -3.58089 0.493413 0
      vertex -3.52707 0.499267 0
      vertex -3.52707 0.499267 0.2
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -3.52707 0.499267 0.2
      vertex -3.52707 0.499267 0
      vertex -3.47293 0.499267 0.2
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -3.52707 0.499267 0
      vertex -3.47293 0.499267 0
      vertex -3.47293 0.499267 0.2
    endloop
  endfacet
  facet normal -0.108119 -0.994138 0
    outer loop
      vertex -3.47293 0.499267 0.2
      vertex -3.47293 0.499267 0
      vertex -3.41911 0.493413 0.2
    endloop
  endfacet
  facet normal -0.108119 -0.994138 0
    outer loop
      vertex -3.47293 0.499267 0
      vertex -3.41911 0.493413 0
      vertex -3.41911 0.493413 0.2
    endloop
  endfacet
  facet normal -0.214971 -0.97662 0
    outer loop
      vertex -3.41911 0.493413 0.2
      vertex -3.41911 0.493413 0
      vertex -3.36624 0.481775 0.2
    endloop
  endfacet
  facet normal -0.214971 -0.97662 0
    outer loop
      vertex -3.41911 0.493413 0
      vertex -3.36624 0.481775 0
      vertex -3.36624 0.481775 0.2
    endloop
  endfacet
  facet normal -0.3193 -0.947654 0
    outer loop
      vertex -3.36624 0.481775 0.2
      vertex -3.36624 0.481775 0
      vertex -3.31493 0.464488 0.2
    endloop
  endfacet
  facet normal -0.3193 -0.947654 0
    outer loop
      vertex -3.36624 0.481775 0
      vertex -3.31493 0.464488 0
      vertex -3.31493 0.464488 0.2
    endloop
  endfacet
  facet normal -0.41989 -0.907575 0
    outer loop
      vertex -3.31493 0.464488 0.2
      vertex -3.31493 0.464488 0
      vertex -3.2658 0.441756 0.2
    endloop
  endfacet
  facet normal -0.41989 -0.907575 0
    outer loop
      vertex -3.31493 0.464488 0
      vertex -3.2658 0.441756 0
      vertex -3.2658 0.441756 0.2
    endloop
  endfacet
  facet normal -0.515552 -0.856858 0
    outer loop
      vertex -3.2658 0.441756 0.2
      vertex -3.2658 0.441756 0
      vertex -3.21941 0.413845 0.2
    endloop
  endfacet
  facet normal -0.515552 -0.856858 0
    outer loop
      vertex -3.2658 0.441756 0
      vertex -3.21941 0.413845 0
      vertex -3.21941 0.413845 0.2
    endloop
  endfacet
  facet normal -0.605176 -0.796092 0
    outer loop
      vertex -3.21941 0.413845 0.2
      vertex -3.21941 0.413845 0
      vertex -3.17631 0.381081 0.2
    endloop
  endfacet
  facet normal -0.605176 -0.796092 0
    outer loop
      vertex -3.21941 0.413845 0
      vertex -3.17631 0.381081 0
      vertex -3.17631 0.381081 0.2
    endloop
  endfacet
  facet normal -0.687698 -0.725997 0
    outer loop
      vertex -3.17631 0.381081 0.2
      vertex -3.17631 0.381081 0
      vertex -3.137 0.34385 0.2
    endloop
  endfacet
  facet normal -0.687698 -0.725997 0
    outer loop
      vertex -3.17631 0.381081 0
      vertex -3.137 0.34385 0
      vertex -3.137 0.34385 0.2
    endloop
  endfacet
  facet normal -0.762163 -0.647385 0
    outer loop
      vertex -3.137 0.34385 0.2
      vertex -3.137 0.34385 0
      vertex -3.10195 0.302587 0.2
    endloop
  endfacet
  facet normal -0.762163 -0.647385 0
    outer loop
      vertex -3.137 0.34385 0
      vertex -3.10195 0.302587 0
      vertex -3.10195 0.302587 0.2
    endloop
  endfacet
  facet normal -0.827688 -0.561189 0
    outer loop
      vertex -3.10195 0.302587 0.2
      vertex -3.10195 0.302587 0
      vertex -3.07157 0.257777 0.2
    endloop
  endfacet
  facet normal -0.827688 -0.561189 0
    outer loop
      vertex -3.10195 0.302587 0
      vertex -3.07157 0.257777 0
      vertex -3.07157 0.257777 0.2
    endloop
  endfacet
  facet normal -0.883513 -0.468406 0
    outer loop
      vertex -3.07157 0.257777 0.2
      vertex -3.07157 0.257777 0
      vertex -3.04621 0.209945 0.2
    endloop
  endfacet
  facet normal -0.883513 -0.468406 0
    outer loop
      vertex -3.07157 0.257777 0
      vertex -3.04621 0.209945 0
      vertex -3.04621 0.209945 0.2
    endloop
  endfacet
  facet normal -0.928977 -0.370138 0
    outer loop
      vertex -3.04621 0.209945 0.2
      vertex -3.04621 0.209945 0
      vertex -3.02617 0.159651 0.2
    endloop
  endfacet
  facet normal -0.928977 -0.370138 0
    outer loop
      vertex -3.04621 0.209945 0
      vertex -3.02617 0.159651 0
      vertex -3.02617 0.159651 0.2
    endloop
  endfacet
  facet normal -0.96355 -0.267529 0
    outer loop
      vertex -3.02617 0.159651 0.2
      vertex -3.02617 0.159651 0
      vertex -3.01169 0.107485 0.2
    endloop
  endfacet
  facet normal -0.96355 -0.267529 0
    outer loop
      vertex -3.02617 0.159651 0
      vertex -3.01169 0.107485 0
      vertex -3.01169 0.107485 0.2
    endloop
  endfacet
  facet normal -0.986826 -0.161782 0
    outer loop
      vertex -3.01169 0.107485 0.2
      vertex -3.01169 0.107485 0
      vertex -3.00293 0.0540595 0.2
    endloop
  endfacet
  facet normal -0.986826 -0.161782 0
    outer loop
      vertex -3.01169 0.107485 0
      vertex -3.00293 0.0540595 0
      vertex -3.00293 0.0540595 0.2
    endloop
  endfacet
  facet normal -0.998533 -0.0541396 0
    outer loop
      vertex -3.00293 0.0540595 0.2
      vertex -3.00293 0.0540595 0
      vertex -3 9.18485e-17 0.2
    endloop
  endfacet
  facet normal -0.998533 -0.0541396 -3.36135e-17
    outer loop
      vertex -3.00293 0.0540595 0
      vertex -3 2.14313e-16 0
      vertex -3 9.18485e-17 0.2
    endloop
  endfacet
  facet normal -0.998533 0.0541396 3.31509e-17
    outer loop
      vertex -3 9.18485e-17 0.2
      vertex -3 2.14313e-16 0
      vertex -3.00293 -0.0540595 0.2
    endloop
  endfacet
  facet normal -0.998533 0.0541396 0
    outer loop
      vertex -3 2.14313e-16 0
      vertex -3.00293 -0.0540595 0
      vertex -3.00293 -0.0540595 0.2
    endloop
  endfacet
  facet normal -0.986826 0.161782 0
    outer loop
      vertex -3.00293 -0.0540595 0.2
      vertex -3.00293 -0.0540595 0
      vertex -3.01169 -0.107485 0.2
    endloop
  endfacet
  facet normal -0.986826 0.161782 0
    outer loop
      vertex -3.00293 -0.0540595 0
      vertex -3.01169 -0.107485 0
      vertex -3.01169 -0.107485 0.2
    endloop
  endfacet
  facet normal -0.96355 0.267529 0
    outer loop
      vertex -3.01169 -0.107485 0.2
      vertex -3.01169 -0.107485 0
      vertex -3.02617 -0.159651 0.2
    endloop
  endfacet
  facet normal -0.96355 0.267529 0
    outer loop
      vertex -3.01169 -0.107485 0
      vertex -3.02617 -0.159651 0
      vertex -3.02617 -0.159651 0.2
    endloop
  endfacet
  facet normal -0.928977 0.370138 0
    outer loop
      vertex -3.02617 -0.159651 0.2
      vertex -3.02617 -0.159651 0
      vertex -3.04621 -0.209945 0.2
    endloop
  endfacet
  facet normal -0.928977 0.370138 0
    outer loop
      vertex -3.02617 -0.159651 0
      vertex -3.04621 -0.209945 0
      vertex -3.04621 -0.209945 0.2
    endloop
  endfacet
  facet normal -0.883513 0.468406 0
    outer loop
      vertex -3.04621 -0.209945 0.2
      vertex -3.04621 -0.209945 0
      vertex -3.07157 -0.257777 0.2
    endloop
  endfacet
  facet normal -0.883513 0.468406 0
    outer loop
      vertex -3.04621 -0.209945 0
      vertex -3.07157 -0.257777 0
      vertex -3.07157 -0.257777 0.2
    endloop
  endfacet
  facet normal -0.827688 0.561189 0
    outer loop
      vertex -3.07157 -0.257777 0.2
      vertex -3.07157 -0.257777 0
      vertex -3.10195 -0.302587 0.2
    endloop
  endfacet
  facet normal -0.827688 0.561189 0
    outer loop
      vertex -3.07157 -0.257777 0
      vertex -3.10195 -0.302587 0
      vertex -3.10195 -0.302587 0.2
    endloop
  endfacet
  facet normal -0.762163 0.647385 0
    outer loop
      vertex -3.10195 -0.302587 0.2
      vertex -3.10195 -0.302587 0
      vertex -3.137 -0.34385 0.2
    endloop
  endfacet
  facet normal -0.762163 0.647385 0
    outer loop
      vertex -3.10195 -0.302587 0
      vertex -3.137 -0.34385 0
      vertex -3.137 -0.34385 0.2
    endloop
  endfacet
  facet normal -0.687698 0.725997 0
    outer loop
      vertex -3.137 -0.34385 0.2
      vertex -3.137 -0.34385 0
      vertex -3.17631 -0.381081 0.2
    endloop
  endfacet
  facet normal -0.687698 0.725997 0
    outer loop
      vertex -3.137 -0.34385 0
      vertex -3.17631 -0.381081 0
      vertex -3.17631 -0.381081 0.2
    endloop
  endfacet
  facet normal -0.605176 0.796092 0
    outer loop
      vertex -3.17631 -0.381081 0.2
      vertex -3.17631 -0.381081 0
      vertex -3.21941 -0.413845 0.2
    endloop
  endfacet
  facet normal -0.605176 0.796092 0
    outer loop
      vertex -3.17631 -0.381081 0
      vertex -3.21941 -0.413845 0
      vertex -3.21941 -0.413845 0.2
    endloop
  endfacet
  facet normal -0.515552 0.856858 0
    outer loop
      vertex -3.21941 -0.413845 0.2
      vertex -3.21941 -0.413845 0
      vertex -3.2658 -0.441756 0.2
    endloop
  endfacet
  facet normal -0.515552 0.856858 0
    outer loop
      vertex -3.21941 -0.413845 0
      vertex -3.2658 -0.441756 0
      vertex -3.2658 -0.441756 0.2
    endloop
  endfacet
  facet normal -0.41989 0.907575 0
    outer loop
      vertex -3.2658 -0.441756 0.2
      vertex -3.2658 -0.441756 0
      vertex -3.31493 -0.464488 0.2
    endloop
  endfacet
  facet normal -0.41989 0.907575 0
    outer loop
      vertex -3.2658 -0.441756 0
      vertex -3.31493 -0.464488 0
      vertex -3.31493 -0.464488 0.2
    endloop
  endfacet
  facet normal -0.3193 0.947654 0
    outer loop
      vertex -3.31493 -0.464488 0.2
      vertex -3.31493 -0.464488 0
      vertex -3.36624 -0.481775 0.2
    endloop
  endfacet
  facet normal -0.3193 0.947654 0
    outer loop
      vertex -3.31493 -0.464488 0
      vertex -3.36624 -0.481775 0
      vertex -3.36624 -0.481775 0.2
    endloop
  endfacet
  facet normal -0.214971 0.97662 0
    outer loop
      vertex -3.36624 -0.481775 0.2
      vertex -3.36624 -0.481775 0
      vertex -3.41911 -0.493413 0.2
    endloop
  endfacet
  facet normal -0.214971 0.97662 0
    outer loop
      vertex -3.36624 -0.481775 0
      vertex -3.41911 -0.493413 0
      vertex -3.41911 -0.493413 0.2
    endloop
  endfacet
  facet normal -0.108119 0.994138 0
    outer loop
      vertex -3.41911 -0.493413 0.2
      vertex -3.41911 -0.493413 0
      vertex -3.47293 -0.499267 0.2
    endloop
  endfacet
  facet normal -0.108119 0.994138 0
    outer loop
      vertex -3.41911 -0.493413 0
      vertex -3.47293 -0.499267 0
      vertex -3.47293 -0.499267 0.2
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex -3.47293 -0.499267 0.2
      vertex -3.47293 -0.499267 0
      vertex -3.52707 -0.499267 0.2
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex -3.47293 -0.499267 0
      vertex -3.52707 -0.499267 0
      vertex -3.52707 -0.499267 0.2
    endloop
  endfacet
  facet normal 0.108119 0.994138 0
    outer loop
      vertex -3.52707 -0.499267 0.2
      vertex -3.52707 -0.499267 0
      vertex -3.58089 -0.493413 0.2
    endloop
  endfacet
  facet normal 0.108119 0.994138 0
    outer loop
      vertex -3.52707 -0.499267 0
      vertex -3.58089 -0.493413 0
      vertex -3.58089 -0.493413 0.2
    endloop
  endfacet
  facet normal 0.214971 0.97662 0
    outer loop
      vertex -3.58089 -0.493413 0.2
      vertex -3.58089 -0.493413 0
      vertex -3.63376 -0.481775 0.2
    endloop
  endfacet
  facet normal 0.214971 0.97662 0
    outer loop
      vertex -3.58089 -0.493413 0
      vertex -3.63376 -0.481775 0
      vertex -3.63376 -0.481775 0.2
    endloop
  endfacet
  facet normal 0.3193 0.947654 0
    outer loop
      vertex -3.63376 -0.481775 0.2
      vertex -3.63376 -0.481775 0
      vertex -3.68507 -0.464488 0.2
    endloop
  endfacet
  facet normal 0.3193 0.947654 0
    outer loop
      vertex -3.63376 -0.481775 0
      vertex -3.68507 -0.464488 0
      vertex -3.68507 -0.464488 0.2
    endloop
  endfacet
  facet normal 0.41989 0.907575 0
    outer loop
      vertex -3.68507 -0.464488 0.2
      vertex -3.68507 -0.464488 0
      vertex -3.7342 -0.441756 0.2
    endloop
  endfacet
  facet normal 0.41989 0.907575 0
    outer loop
      vertex -3.68507 -0.464488 0
      vertex -3.7342 -0.441756 0
      vertex -3.7342 -0.441756 0.2
    endloop
  endfacet
  facet normal 0.515555 0.856857 0
    outer loop
      vertex -3.7342 -0.441756 0.2
      vertex -3.7342 -0.441756 0
      vertex -3.78059 -0.413845 0.2
    endloop
  endfacet
  facet normal 0.515555 0.856857 0
    outer loop
      vertex -3.7342 -0.441756 0
      vertex -3.78059 -0.413845 0
      vertex -3.78059 -0.413845 0.2
    endloop
  endfacet
  facet normal 0.605173 0.796094 0
    outer loop
      vertex -3.78059 -0.413845 0.2
      vertex -3.78059 -0.413845 0
      vertex -3.82369 -0.381081 0.2
    endloop
  endfacet
  facet normal 0.605173 0.796094 0
    outer loop
      vertex -3.78059 -0.413845 0
      vertex -3.82369 -0.381081 0
      vertex -3.82369 -0.381081 0.2
    endloop
  endfacet
  facet normal 0.687698 0.725997 0
    outer loop
      vertex -3.82369 -0.381081 0.2
      vertex -3.82369 -0.381081 0
      vertex -3.863 -0.34385 0.2
    endloop
  endfacet
  facet normal 0.687698 0.725997 0
    outer loop
      vertex -3.82369 -0.381081 0
      vertex -3.863 -0.34385 0
      vertex -3.863 -0.34385 0.2
    endloop
  endfacet
  facet normal 0.762163 0.647385 0
    outer loop
      vertex -3.863 -0.34385 0.2
      vertex -3.863 -0.34385 0
      vertex -3.89805 -0.302587 0.2
    endloop
  endfacet
  facet normal 0.762163 0.647385 0
    outer loop
      vertex -3.863 -0.34385 0
      vertex -3.89805 -0.302587 0
      vertex -3.89805 -0.302587 0.2
    endloop
  endfacet
  facet normal 0.82769 0.561186 0
    outer loop
      vertex -3.89805 -0.302587 0.2
      vertex -3.89805 -0.302587 0
      vertex -3.92843 -0.257777 0.2
    endloop
  endfacet
  facet normal 0.82769 0.561186 0
    outer loop
      vertex -3.89805 -0.302587 0
      vertex -3.92843 -0.257777 0
      vertex -3.92843 -0.257777 0.2
    endloop
  endfacet
  facet normal 0.883512 0.468409 0
    outer loop
      vertex -3.92843 -0.257777 0.2
      vertex -3.92843 -0.257777 0
      vertex -3.95379 -0.209945 0.2
    endloop
  endfacet
  facet normal 0.883512 0.468409 0
    outer loop
      vertex -3.92843 -0.257777 0
      vertex -3.95379 -0.209945 0
      vertex -3.95379 -0.209945 0.2
    endloop
  endfacet
  facet normal 0.928975 0.370141 0
    outer loop
      vertex -3.95379 -0.209945 0.2
      vertex -3.95379 -0.209945 0
      vertex -3.97383 -0.159651 0.2
    endloop
  endfacet
  facet normal 0.928975 0.370141 0
    outer loop
      vertex -3.95379 -0.209945 0
      vertex -3.97383 -0.159651 0
      vertex -3.97383 -0.159651 0.2
    endloop
  endfacet
  facet normal 0.963551 0.267526 0
    outer loop
      vertex -3.97383 -0.159651 0.2
      vertex -3.97383 -0.159651 0
      vertex -3.98831 -0.107485 0.2
    endloop
  endfacet
  facet normal 0.963551 0.267526 0
    outer loop
      vertex -3.97383 -0.159651 0
      vertex -3.98831 -0.107485 0
      vertex -3.98831 -0.107485 0.2
    endloop
  endfacet
  facet normal 0.986827 0.161779 0
    outer loop
      vertex -3.98831 -0.107485 0.2
      vertex -3.98831 -0.107485 0
      vertex -3.99707 -0.0540595 0.2
    endloop
  endfacet
  facet normal 0.986827 0.161779 0
    outer loop
      vertex -3.98831 -0.107485 0
      vertex -3.99707 -0.0540595 0
      vertex -3.99707 -0.0540595 0.2
    endloop
  endfacet
  facet normal 0.998533 0.0541396 0
    outer loop
      vertex -3.99707 -0.0540595 0.2
      vertex -3.99707 -0.0540595 0
      vertex -4 3.06162e-17 0.2
    endloop
  endfacet
  facet normal 0.998533 0.0541396 0
    outer loop
      vertex -3.99707 -0.0540595 0
      vertex -4 3.06162e-17 0
      vertex -4 3.06162e-17 0.2
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex -3.5 2.5 0.2
      vertex -3.5 1.75 0.2
      vertex -3.5 2.5 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex -3.5 1.75 0.2
      vertex -3.5 1.75 0
      vertex -3.5 2.5 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex -3.5 1.75 0.2
      vertex -0.75 1.75 0.2
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex -0.75 1.75 0.2
      vertex -0.75 1.75 0
      vertex -3.5 1.75 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -0.75 1.75 0.2
      vertex -0.75 2.5 0.2
      vertex -0.75 1.75 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -0.75 2.5 0.2
      vertex -0.75 2.5 0
      vertex -0.75 1.75 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex -0.75 2.5 0.2
      vertex 0.75 2.5 0.2
      vertex -0.75 2.5 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 0.75 2.5 0.2
      vertex 0.75 2.5 0
      vertex -0.75 2.5 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 0.75 2.5 0.2
      vertex 0.75 1.75 0.2
      vertex 0.75 2.5 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 0.75 1.75 0.2
      vertex 0.75 1.75 0
      vertex 0.75 2.5 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 0.75 1.75 0.2
      vertex 3.5 1.75 0.2
      vertex 0.75 1.75 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 3.5 1.75 0.2
      vertex 3.5 1.75 0
      vertex 0.75 1.75 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -5 -0.25 0.2
      vertex -5 0.25 0.2
      vertex -5 -0.25 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -5 0.25 0.2
      vertex -5 0.25 0
      vertex -5 -0.25 0
    endloop
  endfacet
  facet normal 0.998572 0.0534291 0
    outer loop
      vertex 5 0.25 0.2
      vertex 5 0.25 0
      vertex 4.98608 0.510096 0
    endloop
  endfacet
  facet normal 0.998572 0.0534291 0
    outer loop
      vertex 5 0.25 0.2
      vertex 4.98608 0.510096 0
      vertex 4.98608 0.510096 0.2
    endloop
  endfacet
  facet normal 0.987169 0.159678 0
    outer loop
      vertex 4.98608 0.510096 0
      vertex 4.94449 0.767222 0
      vertex 4.98608 0.510096 0.2
    endloop
  endfacet
  facet normal 0.987169 0.159678 0
    outer loop
      vertex 4.98608 0.510096 0.2
      vertex 4.94449 0.767222 0
      vertex 4.94449 0.767222 0.2
    endloop
  endfacet
  facet normal 0.964494 0.264103 0
    outer loop
      vertex 4.94449 0.767222 0
      vertex 4.8757 1.01844 0
      vertex 4.94449 0.767222 0.2
    endloop
  endfacet
  facet normal 0.964494 0.264103 0
    outer loop
      vertex 4.94449 0.767222 0.2
      vertex 4.8757 1.01844 0
      vertex 4.8757 1.01844 0.2
    endloop
  endfacet
  facet normal 0.930806 0.365512 0
    outer loop
      vertex 4.8757 1.01844 0
      vertex 4.7805 1.26089 0
      vertex 4.8757 1.01844 0.2
    endloop
  endfacet
  facet normal 0.930806 0.365512 0
    outer loop
      vertex 4.8757 1.01844 0.2
      vertex 4.7805 1.26089 0
      vertex 4.7805 1.26089 0.2
    endloop
  endfacet
  facet normal 0.886489 0.462749 0
    outer loop
      vertex 4.7805 1.26089 0
      vertex 4.65997 1.49179 0
      vertex 4.7805 1.26089 0.2
    endloop
  endfacet
  facet normal 0.886489 0.462749 0
    outer loop
      vertex 4.7805 1.26089 0.2
      vertex 4.65997 1.49179 0
      vertex 4.65997 1.49179 0.2
    endloop
  endfacet
  facet normal 0.83205 0.5547 0
    outer loop
      vertex 4.65997 1.49179 0
      vertex 4.51548 1.70851 0
      vertex 4.65997 1.49179 0.2
    endloop
  endfacet
  facet normal 0.83205 0.5547 0
    outer loop
      vertex 4.65997 1.49179 0.2
      vertex 4.51548 1.70851 0
      vertex 4.51548 1.70851 0.2
    endloop
  endfacet
  facet normal 0.76811 0.640318 0
    outer loop
      vertex 4.51548 1.70851 0
      vertex 4.3487 1.90858 0
      vertex 4.51548 1.70851 0.2
    endloop
  endfacet
  facet normal 0.76811 0.640318 0
    outer loop
      vertex 4.51548 1.70851 0.2
      vertex 4.3487 1.90858 0
      vertex 4.3487 1.90858 0.2
    endloop
  endfacet
  facet normal 0.695399 0.718623 0
    outer loop
      vertex 4.3487 1.90858 0
      vertex 4.16152 2.08971 0
      vertex 4.3487 1.90858 0.2
    endloop
  endfacet
  facet normal 0.695399 0.718623 0
    outer loop
      vertex 4.3487 1.90858 0.2
      vertex 4.16152 2.08971 0
      vertex 4.16152 2.08971 0.2
    endloop
  endfacet
  facet normal 0.614747 0.788724 0
    outer loop
      vertex 4.16152 2.08971 0
      vertex 3.95609 2.24983 0
      vertex 4.16152 2.08971 0.2
    endloop
  endfacet
  facet normal 0.614747 0.788724 0
    outer loop
      vertex 4.16152 2.08971 0.2
      vertex 3.95609 2.24983 0
      vertex 3.95609 2.24983 0.2
    endloop
  endfacet
  facet normal 0.527076 0.849818 0
    outer loop
      vertex 3.95609 2.24983 0
      vertex 3.73474 2.38712 0
      vertex 3.95609 2.24983 0.2
    endloop
  endfacet
  facet normal 0.527076 0.849818 0
    outer loop
      vertex 3.95609 2.24983 0.2
      vertex 3.73474 2.38712 0
      vertex 3.73474 2.38712 0.2
    endloop
  endfacet
  facet normal 0.433385 0.901209 0
    outer loop
      vertex 3.73474 2.38712 0
      vertex 3.5 2.5 0
      vertex 3.73474 2.38712 0.2
    endloop
  endfacet
  facet normal 0.433385 0.901209 0
    outer loop
      vertex 3.73474 2.38712 0.2
      vertex 3.5 2.5 0
      vertex 3.5 2.5 0.2
    endloop
  endfacet
  facet normal -0.998572 -0.0534291 0
    outer loop
      vertex -5 -0.25 0.2
      vertex -5 -0.25 0
      vertex -4.98608 -0.510096 0
    endloop
  endfacet
  facet normal -0.998572 -0.0534291 0
    outer loop
      vertex -5 -0.25 0.2
      vertex -4.98608 -0.510096 0
      vertex -4.98608 -0.510096 0.2
    endloop
  endfacet
  facet normal -0.987169 -0.159678 0
    outer loop
      vertex -4.98608 -0.510096 0
      vertex -4.94449 -0.767222 0
      vertex -4.98608 -0.510096 0.2
    endloop
  endfacet
  facet normal -0.987169 -0.159678 0
    outer loop
      vertex -4.98608 -0.510096 0.2
      vertex -4.94449 -0.767222 0
      vertex -4.94449 -0.767222 0.2
    endloop
  endfacet
  facet normal -0.964494 -0.264103 0
    outer loop
      vertex -4.94449 -0.767222 0
      vertex -4.8757 -1.01844 0
      vertex -4.94449 -0.767222 0.2
    endloop
  endfacet
  facet normal -0.964494 -0.264103 0
    outer loop
      vertex -4.94449 -0.767222 0.2
      vertex -4.8757 -1.01844 0
      vertex -4.8757 -1.01844 0.2
    endloop
  endfacet
  facet normal -0.930806 -0.365512 0
    outer loop
      vertex -4.8757 -1.01844 0
      vertex -4.7805 -1.26089 0
      vertex -4.8757 -1.01844 0.2
    endloop
  endfacet
  facet normal -0.930806 -0.365512 0
    outer loop
      vertex -4.8757 -1.01844 0.2
      vertex -4.7805 -1.26089 0
      vertex -4.7805 -1.26089 0.2
    endloop
  endfacet
  facet normal -0.886489 -0.462749 0
    outer loop
      vertex -4.7805 -1.26089 0
      vertex -4.65997 -1.49179 0
      vertex -4.7805 -1.26089 0.2
    endloop
  endfacet
  facet normal -0.886489 -0.462749 0
    outer loop
      vertex -4.7805 -1.26089 0.2
      vertex -4.65997 -1.49179 0
      vertex -4.65997 -1.49179 0.2
    endloop
  endfacet
  facet normal -0.83205 -0.5547 0
    outer loop
      vertex -4.65997 -1.49179 0
      vertex -4.51548 -1.70851 0
      vertex -4.65997 -1.49179 0.2
    endloop
  endfacet
  facet normal -0.83205 -0.5547 0
    outer loop
      vertex -4.65997 -1.49179 0.2
      vertex -4.51548 -1.70851 0
      vertex -4.51548 -1.70851 0.2
    endloop
  endfacet
  facet normal -0.76811 -0.640318 0
    outer loop
      vertex -4.51548 -1.70851 0
      vertex -4.3487 -1.90858 0
      vertex -4.51548 -1.70851 0.2
    endloop
  endfacet
  facet normal -0.76811 -0.640318 0
    outer loop
      vertex -4.51548 -1.70851 0.2
      vertex -4.3487 -1.90858 0
      vertex -4.3487 -1.90858 0.2
    endloop
  endfacet
  facet normal -0.695399 -0.718623 0
    outer loop
      vertex -4.3487 -1.90858 0
      vertex -4.16152 -2.08971 0
      vertex -4.3487 -1.90858 0.2
    endloop
  endfacet
  facet normal -0.695399 -0.718623 0
    outer loop
      vertex -4.3487 -1.90858 0.2
      vertex -4.16152 -2.08971 0
      vertex -4.16152 -2.08971 0.2
    endloop
  endfacet
  facet normal -0.614747 -0.788724 0
    outer loop
      vertex -4.16152 -2.08971 0
      vertex -3.95609 -2.24983 0
      vertex -4.16152 -2.08971 0.2
    endloop
  endfacet
  facet normal -0.614747 -0.788724 0
    outer loop
      vertex -4.16152 -2.08971 0.2
      vertex -3.95609 -2.24983 0
      vertex -3.95609 -2.24983 0.2
    endloop
  endfacet
  facet normal -0.527076 -0.849818 0
    outer loop
      vertex -3.95609 -2.24983 0
      vertex -3.73474 -2.38712 0
      vertex -3.95609 -2.24983 0.2
    endloop
  endfacet
  facet normal -0.527076 -0.849818 0
    outer loop
      vertex -3.95609 -2.24983 0.2
      vertex -3.73474 -2.38712 0
      vertex -3.73474 -2.38712 0.2
    endloop
  endfacet
  facet normal -0.433385 -0.901209 0
    outer loop
      vertex -3.73474 -2.38712 0
      vertex -3.5 -2.5 0
      vertex -3.73474 -2.38712 0.2
    endloop
  endfacet
  facet normal -0.433385 -0.901209 0
    outer loop
      vertex -3.73474 -2.38712 0.2
      vertex -3.5 -2.5 0
      vertex -3.5 -2.5 0.2
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex -3.5 -1.75 0.2
      vertex -3.5 -2.5 0.2
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex -3.5 -2.5 0.2
      vertex -3.5 -2.5 0
      vertex -3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -0.75 -1.75 0.2
      vertex -3.5 -1.75 0.2
      vertex -0.75 -1.75 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -3.5 -1.75 0.2
      vertex -3.5 -1.75 0
      vertex -0.75 -1.75 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 0.75 -1.75 0.2
      vertex 0.75 -2.5 0.2
      vertex 0.75 -1.75 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 0.75 -2.5 0.2
      vertex 0.75 -2.5 0
      vertex 0.75 -1.75 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -0.75 -2.5 0.2
      vertex -0.75 -1.75 0.2
      vertex -0.75 -2.5 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -0.75 -1.75 0.2
      vertex -0.75 -1.75 0
      vertex -0.75 -2.5 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 3.5 1.75 0.2
      vertex 3.5 2.5 0.2
      vertex 3.5 1.75 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 3.5 2.5 0.2
      vertex 3.5 2.5 0
      vertex 3.5 1.75 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 0.75 -2.5 0.2
      vertex -0.75 -2.5 0.2
      vertex 0.75 -2.5 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -0.75 -2.5 0.2
      vertex -0.75 -2.5 0
      vertex 0.75 -2.5 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 3.5 -2.5 0.2
      vertex 3.5 -1.75 0.2
      vertex 3.5 -2.5 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 3.5 -1.75 0.2
      vertex 3.5 -1.75 0
      vertex 3.5 -2.5 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 3.5 -1.75 0.2
      vertex 0.75 -1.75 0.2
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 0.75 -1.75 0.2
      vertex 0.75 -1.75 0
      vertex 3.5 -1.75 0
    endloop
  endfacet
  facet normal 0.433385 -0.901209 0
    outer loop
      vertex 3.5 -2.5 0.2
      vertex 3.5 -2.5 0
      vertex 3.73474 -2.38712 0
    endloop
  endfacet
  facet normal 0.433385 -0.901209 0
    outer loop
      vertex 3.5 -2.5 0.2
      vertex 3.73474 -2.38712 0
      vertex 3.73474 -2.38712 0.2
    endloop
  endfacet
  facet normal 0.527076 -0.849818 0
    outer loop
      vertex 3.73474 -2.38712 0
      vertex 3.95609 -2.24983 0
      vertex 3.73474 -2.38712 0.2
    endloop
  endfacet
  facet normal 0.527076 -0.849818 0
    outer loop
      vertex 3.73474 -2.38712 0.2
      vertex 3.95609 -2.24983 0
      vertex 3.95609 -2.24983 0.2
    endloop
  endfacet
  facet normal 0.614747 -0.788724 0
    outer loop
      vertex 3.95609 -2.24983 0
      vertex 4.16152 -2.08971 0
      vertex 3.95609 -2.24983 0.2
    endloop
  endfacet
  facet normal 0.614747 -0.788724 0
    outer loop
      vertex 3.95609 -2.24983 0.2
      vertex 4.16152 -2.08971 0
      vertex 4.16152 -2.08971 0.2
    endloop
  endfacet
  facet normal 0.695399 -0.718623 0
    outer loop
      vertex 4.16152 -2.08971 0
      vertex 4.3487 -1.90858 0
      vertex 4.16152 -2.08971 0.2
    endloop
  endfacet
  facet normal 0.695399 -0.718623 0
    outer loop
      vertex 4.16152 -2.08971 0.2
      vertex 4.3487 -1.90858 0
      vertex 4.3487 -1.90858 0.2
    endloop
  endfacet
  facet normal 0.76811 -0.640318 0
    outer loop
      vertex 4.3487 -1.90858 0
      vertex 4.51548 -1.70851 0
      vertex 4.3487 -1.90858 0.2
    endloop
  endfacet
  facet normal 0.76811 -0.640318 0
    outer loop
      vertex 4.3487 -1.90858 0.2
      vertex 4.51548 -1.70851 0
      vertex 4.51548 -1.70851 0.2
    endloop
  endfacet
  facet normal 0.83205 -0.5547 0
    outer loop
      vertex 4.51548 -1.70851 0
      vertex 4.65997 -1.49179 0
      vertex 4.51548 -1.70851 0.2
    endloop
  endfacet
  facet normal 0.83205 -0.5547 0
    outer loop
      vertex 4.51548 -1.70851 0.2
      vertex 4.65997 -1.49179 0
      vertex 4.65997 -1.49179 0.2
    endloop
  endfacet
  facet normal 0.886489 -0.462749 0
    outer loop
      vertex 4.65997 -1.49179 0
      vertex 4.7805 -1.26089 0
      vertex 4.65997 -1.49179 0.2
    endloop
  endfacet
  facet normal 0.886489 -0.462749 0
    outer loop
      vertex 4.65997 -1.49179 0.2
      vertex 4.7805 -1.26089 0
      vertex 4.7805 -1.26089 0.2
    endloop
  endfacet
  facet normal 0.930806 -0.365512 0
    outer loop
      vertex 4.7805 -1.26089 0
      vertex 4.8757 -1.01844 0
      vertex 4.7805 -1.26089 0.2
    endloop
  endfacet
  facet normal 0.930806 -0.365512 0
    outer loop
      vertex 4.7805 -1.26089 0.2
      vertex 4.8757 -1.01844 0
      vertex 4.8757 -1.01844 0.2
    endloop
  endfacet
  facet normal 0.964494 -0.264103 0
    outer loop
      vertex 4.8757 -1.01844 0
      vertex 4.94449 -0.767222 0
      vertex 4.8757 -1.01844 0.2
    endloop
  endfacet
  facet normal 0.964494 -0.264103 0
    outer loop
      vertex 4.8757 -1.01844 0.2
      vertex 4.94449 -0.767222 0
      vertex 4.94449 -0.767222 0.2
    endloop
  endfacet
  facet normal 0.987169 -0.159678 0
    outer loop
      vertex 4.94449 -0.767222 0
      vertex 4.98608 -0.510096 0
      vertex 4.94449 -0.767222 0.2
    endloop
  endfacet
  facet normal 0.987169 -0.159678 0
    outer loop
      vertex 4.94449 -0.767222 0.2
      vertex 4.98608 -0.510096 0
      vertex 4.98608 -0.510096 0.2
    endloop
  endfacet
  facet normal 0.998572 -0.0534291 0
    outer loop
      vertex 4.98608 -0.510096 0
      vertex 5 -0.25 0
      vertex 4.98608 -0.510096 0.2
    endloop
  endfacet
  facet normal 0.998572 -0.0534291 0
    outer loop
      vertex 4.98608 -0.510096 0.2
      vertex 5 -0.25 0
      vertex 5 -0.25 0.2
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 5 0.25 0.2
      vertex 5 -0.25 0.2
      vertex 5 0.25 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 5 -0.25 0.2
      vertex 5 -0.25 0
      vertex 5 0.25 0
    endloop
  endfacet
endsolid Mesh
```