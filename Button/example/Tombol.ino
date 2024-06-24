#include "Button.h"
int pin[] {2, 3};
Button ezbutton(pin, sizeof(pin) / sizeof(int));

void setup() {
  Serial.begin(115200);
  }

void loop() {
  int button = ezbutton.loop();
 Serial.println(button);
delay(1000);
}
