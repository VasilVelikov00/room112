#include "Display.h"
int n = 0;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  if (n < 100) {
    n++;
    delay(50);
  }
  Display.show(n);
}
