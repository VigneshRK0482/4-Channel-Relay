#include <Arduino.h> // Template used in PlatformIO in VSCode
// Defining the pins for channels of 4 relay module. The numbers are the pin number of Arduino Nano
#define RELAY_PIN_1 2 
#define RELAY_PIN_2 3
#define RELAY_PIN_3 4
#define RELAY_PIN_4 5

void Relay_ON() //Function to turn ON all the relays of 4 module relay with a delay of 1 second
{
  digitalWrite(RELAY_PIN_1, HIGH); 
  delay(1000);
  digitalWrite(RELAY_PIN_2, HIGH); 
  delay(1000);
  digitalWrite(RELAY_PIN_3, HIGH); 
  delay(1000);
  digitalWrite(RELAY_PIN_4, HIGH); 
  delay(1000);
}

void Relay_OFF() // Function to turn OFF all the relays of 4 module relay with a delay of 1 second
{
  digitalWrite(RELAY_PIN_1, LOW); 
  delay(1000);
  digitalWrite(RELAY_PIN_2, LOW); 
  delay(1000);
  digitalWrite(RELAY_PIN_3, LOW); 
  delay(1000);
  digitalWrite(RELAY_PIN_4, LOW); 
  delay(1000);
}

void setup() 
{
  pinMode(RELAY_PIN_1, OUTPUT); //Configuring relay pins as output and  forcefully writing all the pins to LOW as I am using Active High Relay
  digitalWrite(RELAY_PIN_1, LOW);
  pinMode(RELAY_PIN_2, OUTPUT);
  digitalWrite(RELAY_PIN_2, LOW); 
  pinMode(RELAY_PIN_3, OUTPUT);
  digitalWrite(RELAY_PIN_3, LOW); 
  pinMode(RELAY_PIN_4, OUTPUT);
  digitalWrite(RELAY_PIN_4, LOW);   
  Serial.begin(9600); // Initialising Serial Monitor with 9600 Baud Rate
  Serial.println("Relay Testing on ESP32");
}

void loop() 
{
  Serial.println("Turning ON the relay");
  Relay_ON(); // Function call of Relay_ON()
  Serial.println("Turning OFF the relay");
  Relay_OFF(); // Function call of Relay_OFF()
}