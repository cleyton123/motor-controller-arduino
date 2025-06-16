# 🤖 Carro Autônomo com Desvio de Obstáculos (Arduino + L293D + HC-SR04)

Este projeto é um **carro autônomo simples** que utiliza um sensor ultrassônico para detectar obstáculos e motores controlados por um driver L293D. Ele simula o comportamento de um robô móvel autônomo, desviando de obstáculos de forma inteligente e emitindo um alerta sonoro com buzzer.

---

## 🚗 Funcionalidades

- Detecta obstáculos usando o sensor HC-SR04
- Anda automaticamente para frente
- Executa uma manobra de ré + curva ao detectar obstáculo
- Emite um alerta sonoro (buzzer)

---

## 🛠️ Componentes Utilizados

| Componente            | Quantidade |
|-----------------------|------------|
| Arduino UNO R3        | 1          |
| L293D (Driver de Motor)| 1         |
| Sensor Ultrassônico HC-SR04 | 1     |
| Motores DC com rodas  | 2          |
| Buzzer                | 1          |
| Fonte 9V              | 1          |
| Protoboard + Jumpers  | Vários     |

---

## ⚙️ Esquema do Circuito

> 🔽 *Clique na imagem para ampliar.*



> 💡 Diagrama desenvolvido no [Tinkercad](https://www.tinkercad.com)

---

## 🎥 Demonstração (vídeo)

> [🔗 Link do vídeo no YouTube](https://youtu.be/seu-video-aqui) *(suba um vídeo mostrando o robô funcionando!)*

---

## 💻 Código-Fonte

O código está disponível na pasta `/src` ou abaixo:

[🔗 Ver código completo](#)

Principais funções:
- `medirDistancia()`: lê a distância do HC-SR04
- `andarFrente()`, `andarRe()`, `girarEsquerda()`: controle dos motores
- `manobraDesvio()`: lógica de fuga automática
- `buzzerON()` / `OFF()`: alerta sonoro

---


## 📚 O que aprendi

- Programação de lógica condicional com Arduino
- Controle de motores DC com o CI L293D
- Leitura de distância com sensor HC-SR04
- Modularização de código e boas práticas
- Princípios de robótica móvel
- Simulação no Tinkercad
- 
---

## 🔧 Tecnologias e Ferramentas

- Arduino IDE
- Tinkercad
- C/C++ para embarcados
- Protoboard e eletrônica básica

---

