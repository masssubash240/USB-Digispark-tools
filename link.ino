#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(5000); // Wait for computer to recognize device
  DigiKeyboard.sendKeyStroke(0); // Clear any modifiers
  
  // Open browser (Windows + R, then type)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("https://www.youtube.com/@hackerror07");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(2000);
}

void loop() {
  // Empty - script runs once when plugged in
}