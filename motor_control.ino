int IN1 = 2;
int IN2 = 3;
int ENA = 11;

int IN3 = 4;
int IN4 = 5;
int ENB = 10;

void setup()
{
   pinMode(IN1, OUTPUT);
   pinMode(IN2, OUTPUT);
   pinMode(IN3, OUTPUT);
   pinMode(IN4, OUTPUT);

}

void setMotorA(int speed) {
  if (speed > 0) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(ENA, speed);
  } else if (speed < 0) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    analogWrite(ENA, -speed);
  } else {
    // stop
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    analogWrite(ENA, 0);
  }
  
  
  }

void setMotorB(int speed) {
  if (speed > 0) {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    analogWrite(ENB, speed);
  } else if (speed < 0) {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    analogWrite(ENB, -speed);
  } else {
    // stop
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    analogWrite(ENB, 0);
  }
}



void loop()
{ 
  // Motor A: 150 (frente), Motor B: 150 (frente) para andar reto
  setMotorA(150);
  setMotorB(150);
  delay(2000);
  
   // Motor A: -150 (ré), Motor B: -150 (ré)
  setMotorA(-150);
  setMotorB(-150);
  delay(2000);

  // Giro à direita: A para frente, B para trás
  setMotorA(150);
  setMotorB(-150);
  delay(1500);

  // Parar
  setMotorA(0);
  setMotorB(0);
  delay(2000);

}
