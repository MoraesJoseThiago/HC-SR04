#include <NewPing.h> //Importando a biblioteca

#define TRIGER_PIN 11 //Definindo a entreda do Triger
#define ECHO_PIN 12 //Definindo a entrado do ECHO
#define MAX_DISTANCE 200 //Definindo o maximo de distancia

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); //Juntando tudo isso no Sonar

void setup() {
  Serial.begin(9600); //Abrir o monitor serial
}

void loop() {
  delay(50); //Delay para que não buge
  Serial.print("Ping: "); //Printando no monitor serial o "Ping"
  Serial.print(sonar.ping_cm()); //Mostrando em cm
  Serial.print("cm"); //Printando no monitor serial o "cm"
}
