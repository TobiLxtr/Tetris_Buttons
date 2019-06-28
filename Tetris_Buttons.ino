#include <Bounce.h>

#define DEBOUNCE_TIME 10

#define BUTTON_L_PIN 2  //left
#define BUTTON_R_PIN 3  //right
#define BUTTON_D_PIN 4  //down
#define BUTTON_T_PIN 5  //turn

Bounce buttonL = Bounce(BUTTON_L_PIN, DEBOUNCE_TIME);
Bounce buttonR = Bounce(BUTTON_R_PIN, DEBOUNCE_TIME);
Bounce buttonD = Bounce(BUTTON_D_PIN, DEBOUNCE_TIME);
Bounce buttonT = Bounce(BUTTON_T_PIN, DEBOUNCE_TIME);


void setup() {
  pinMode(BUTTON_L_PIN, INPUT_PULLUP);
  pinMode(BUTTON_R_PIN, INPUT_PULLUP);
  pinMode(BUTTON_D_PIN, INPUT_PULLUP);
  pinMode(BUTTON_T_PIN, INPUT_PULLUP);

}

void loop() {
  buttonL.update();
  buttonR.update();
  buttonD.update();
  buttonT.update();

  if (buttonL.fallingEdge()) {
    Keyboard.press(KEY_LEFT);
  }
  if (buttonL.risingEdge()) {
    Keyboard.release(KEY_LEFT);
  }
  if (buttonR.fallingEdge()) {
    Keyboard.press(KEY_RIGHT);
  }
  if (buttonR.risingEdge()) {
    Keyboard.release(KEY_RIGHT);
  }
  if (buttonD.fallingEdge()) {
    Keyboard.press(KEY_DOWN);
  }
  if (buttonD.risingEdge()) {
    Keyboard.release(KEY_DOWN);
  }
  if (buttonT.fallingEdge()) {
    Keyboard.press(KEY_UP);
    Keyboard.release(KEY_UP);
  }
}
