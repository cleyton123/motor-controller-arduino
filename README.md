# Arduino Motor Controller - Ponte H (L298N)

Este projeto em Arduino controla dois motores DC usando uma ponte H (como o L298N), permitindo movimento para frente, para trás, parada e giros.

## 🔌 Conexões

### Motor A:
- IN1 → D2
- IN2 → D3
- ENA → D11 (PWM)

### Motor B:
- IN3 → D4
- IN4 → D5
- ENB → D10 (PWM)

## ⚙️ Funcionalidade

O código faz o seguinte em um loop contínuo:

1. Anda para frente por 2 segundos
2. Anda para trás por 2 segundos
3. Gira para a direita por 1.5 segundo
4. Para por 2 segundos

## 🧠 Código

O controle de velocidade é feito com `analogWrite`, e a direção com `digitalWrite`.

## 🛠️ Requisitos

- Arduino UNO ou similar
- Driver de motores L298N
- 2 motores DC
- Fonte externa para motores 
- IDE do Arduino

## 📸 Imagem
![Captura de tela 2025-06-10 103104](https://github.com/user-attachments/assets/2ed298de-0328-48f0-a256-9a1e34a41cae)


