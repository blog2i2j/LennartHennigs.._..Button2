/////////////////////////////////////////////////////////////////

#include "Button2.h"

/////////////////////////////////////////////////////////////////

#define BUTTON_A_PIN  2
#define BUTTON_B_PIN  0

/////////////////////////////////////////////////////////////////

Button2 buttonA, buttonB;

/////////////////////////////////////////////////////////////////

void click(Button2& btn) {
    if (btn == buttonA) {
      Serial.println("A clicked");
    } else if (btn == buttonB) {
      Serial.println("B clicked");
    }
}

/////////////////////////////////////////////////////////////////

void setup() {
  Serial.begin(9600);
  delay(50);
  Serial.println("\n\nMultiple Buttons Demo");
  
  buttonA.begin(BUTTON_A_PIN);
  buttonA.setClickHandler(click);

  buttonB.begin(BUTTON_B_PIN);
  buttonB.setClickHandler(click);
}

/////////////////////////////////////////////////////////////////

void loop() {
  buttonA.loop();
  buttonB.loop();
}

/////////////////////////////////////////////////////////////////
