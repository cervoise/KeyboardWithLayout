#include "KeyboardWithLayout.h"

void setup() {
  KeyboardWithLayout.begin();
  delay(3000);
  KeyboardWithLayout.sendPayload("The quick brown fox jumps over the lazy dog", FR_FRENCH);
}

void loop() {
}
