#include <Wire.h>
#include "Adafruit_MCP23017.h"
// Instance of MCP23017 library
Adafruit_MCP23017 mcp;
void setup() {  
  // Initialize the MCP23017
  mcp.begin();
  
  // Define GPA0 (physical pin 21) as output pin
  mcp.pinMode(8, OUTPUT);
}
void loop() {
  delay(500);
  
  // Switch LED on
  mcp.digitalWrite(8, HIGH);
  
  delay(500);
  
  // Switch LED off
  mcp.digitalWrite(8, LOW);
}
