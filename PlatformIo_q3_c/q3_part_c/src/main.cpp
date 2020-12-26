#include <Arduino.h>
#include <fixedPoint_model_q3_c.c>

unsigned long timePassedMils;
unsigned long startTimeMils;

static int iterationNumber = 10000;
int iteration = 0;

double averageTimeMils;

void setup()
{

  Serial.begin(9600);

  fixedPoint_model_q3_c_initialize();
}

void loop()
{

  startTimeMils = millis();

  while (iteration != iterationNumber)
  {
    fixedPoint_model_q3_c_U.In1 = 0.002; // some input just for testing
    fixedPoint_model_q3_c_step();
    iteration++;
  }
  iteration = 0;

  timePassedMils = millis() - startTimeMils;

  Serial.print("timePassedMils : ");
  Serial.println(timePassedMils);

  averageTimeMils = timePassedMils / (double)iterationNumber;

  Serial.print("averageTimeMils : ");
  Serial.print(averageTimeMils);
  Serial.print(" in iterationNumber : ");
  Serial.println(iterationNumber);
}