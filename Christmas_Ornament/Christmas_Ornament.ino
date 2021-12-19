//Devin Bidstrup Dec 2021
#include <Adafruit_CircuitPlayground.h>
#include "LowPower.h"
#include "pitches.h"

#define DEBOUNCE 200

enum state {
  SLEEP,
  WAKEUP,
  JINGLE,
  RUDOLPH,
  WONDTIME,
  HLYNGHT,
  JOY
} currState;

bool leftButtonPressed;
bool rightButtonPressed;

void setup() {
  Serial.begin(9600);
  Serial.println("Circuit Playground test!");

  CircuitPlayground.begin();
  CircuitPlayground.speaker.enable(false);
  CircuitPlayground.setBrightness(100);

  currState = WAKEUP;
}

void loop() {
  //Go to sleep
  if (CircuitPlayground.slideSwitch())
    currState = SLEEP;

  leftButtonPressed = CircuitPlayground.leftButton();
  rightButtonPressed = CircuitPlayground.rightButton();

  Serial.println("Case");
  Serial.println(currState, DEC);
  switch (currState)
  {
    case SLEEP:
      // turn off speaker when not in use
      CircuitPlayground.speaker.enable(false);

      //turn off all the LEDs
      for (int p = 0; p < 10; p++){
        CircuitPlayground.setPixelColor(p, 0, 0, 0);
      }

      // Enter power down state with ADC and BOD module disabled.
      //LowPower.powerDown(SLEEP_2S, ADC_OFF, BOD_OFF);
      delay(2000);

      currState = WAKEUP;
      break;

    case WAKEUP:
      //Turn on noise
      CircuitPlayground.playTone(300, 100);
      CircuitPlayground.playTone(400, 100);
      CircuitPlayground.playTone(500, 100);

      //LED animation
      for (int p = 0; p < 10; p++){
        CircuitPlayground.setPixelColor(p, 0, 255, 0);
        delay(50);
      }
      for (int p = 0; p < 10; p++){
        CircuitPlayground.setPixelColor(p, 0, 0, 0);
      }

      currState = JINGLE;
      break;
      
    case JINGLE:
      CircuitPlayground.setPixelColor(0, 255, 255, 0);
      if (leftButtonPressed)
      {
        delay(DEBOUNCE);
        for (int p = 0; p < 10; p++)
          CircuitPlayground.setPixelColor(p, 0, 0, 0);
        currState = RUDOLPH;
      }   
      else if (rightButtonPressed)
      {
        playSong(m_jinglebells, nd_jinglebells, len_jinglebells, speed_jinglebells, 1);
      }
      break;
      
    case RUDOLPH:
      CircuitPlayground.setPixelColor(1, 255, 255, 0);
      if (leftButtonPressed)
      {
        delay(DEBOUNCE);
        for (int p = 0; p < 10; p++)
          CircuitPlayground.setPixelColor(p, 0, 0, 0);
        currState = WONDTIME;
      }
      else if (rightButtonPressed)
      {
        playSong(m_rudolph, nd_rudolph, len_rudolph, speed_rudolph, 0);
      }
      break;

    case WONDTIME:
      CircuitPlayground.setPixelColor(2, 255, 255, 0);
      if (leftButtonPressed)
      {
        delay(DEBOUNCE);
        for (int p = 0; p < 10; p++)
          CircuitPlayground.setPixelColor(p, 0, 0, 0);
        currState = HLYNGHT;
      }
      else if (rightButtonPressed)
      {
        playSong(m_wonderfultime, nd_wonderfultime, len_wonderfultime, speed_wonderfultime, 1);
      }
      break;
    case HLYNGHT:
      CircuitPlayground.setPixelColor(3, 255, 255, 0);
      if (leftButtonPressed)
      {
        delay(DEBOUNCE);
        for (int p = 0; p < 10; p++)
          CircuitPlayground.setPixelColor(p, 0, 0, 0);
        currState = JOY;
      }
      else if (rightButtonPressed)
      {
        playSong(m_holynight, nd_holynight, len_holynight, speed_holynight, 0);
      }
      break;
    case JOY:
      CircuitPlayground.setPixelColor(4, 255, 255, 0);
      if (leftButtonPressed)
      {
        delay(DEBOUNCE);
        for (int p = 0; p < 10; p++)
          CircuitPlayground.setPixelColor(p, 0, 0, 0);
        currState = JINGLE;
      }
      else if (rightButtonPressed)
      {
        playSong(m_joy, nd_joy, len_joy, speed_joy, 1);
      }
      break;
  }

  delay(10);
}