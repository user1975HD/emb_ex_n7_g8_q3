#include <Arduino.h>
#include <fixedPoint_model_q3_c.c>

unsigned long timePassedMils;

int analog_ReadVal = 0;

int pinA0_analogWrite = 22;
int pin_analogRead = 65; //A11:65
// int pin_analogRead = 24; //PA2/AD2

void setup()
{

  Serial.begin(9600);

  pinMode(pinA0_analogWrite, OUTPUT);
  pinMode(pin_analogRead, INPUT);

  // fixedPoint_model_q3_c_initialize();
}

void loop()
{
  // fixedPoint_model_q3_c_step();

  timePassedMils = millis();

  delay(1000);

  Serial.println("timePassedMils : ");
  Serial.println(timePassedMils);

  analogWrite(pinA0_analogWrite, 512);

  analog_ReadVal = analogRead(pin_analogRead);

  Serial.println("analog_ReadVal : ");
  Serial.println(analog_ReadVal);
}