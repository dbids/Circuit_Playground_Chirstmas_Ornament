//Devin Bidstrup Dec 2021
#include <Adafruit_CircuitPlayground.h>
#include "LowPower.h"
#include "pitches.h"

#define DEBOUNCE 200

enum state {
  SLEEP,
  WAKEUP,
  LIGHTSHOW,
  JINGLE,
  RUDOLPH,
  WONDTIME,
  HLYNGHT,
  JOY,
  SLEIGH
} currState;

bool leftButtonPressed;
bool rightButtonPressed;
uint8_t pixeln = 0;
uint8_t* colorArray = calloc(10, sizeof(uint8_t));

void setup() {
  Serial.begin(9600);
  Serial.println("Circuit Playground test!");

  CircuitPlayground.begin();
  CircuitPlayground.speaker.enable(false);
  CircuitPlayground.setBrightness(30); 

  currState = WAKEUP;

  for(uint8_t i = 0; i < 10; i ++)
    colorArray[i] = i*5;
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
      CircuitPlayground.clearPixels();

      // Enter power down state with ADC and BOD module disabled.
      LowPower.powerDown(SLEEP_2S, ADC_OFF, BOD_OFF);
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
      CircuitPlayground.clearPixels();

      currState = LIGHTSHOW;
      break;

    case LIGHTSHOW:
      if (leftButtonPressed)
      {
        delay(DEBOUNCE);
        CircuitPlayground.clearPixels();
        currState = JINGLE;
      }
      else
      {
          for(uint8_t p = 0; p < 10; p++)
          {
            CircuitPlayground.setPixelColor(p, CircuitPlayground.colorWheel(colorArray[p]));
            colorArray[p] += 5;
            if(colorArray[p] > 255)
            {
              colorArray[p] = 0;
            }
          }
      }
      break;
      
    case JINGLE:
      CircuitPlayground.setPixelColor(0, 255, 255, 0);
      if (leftButtonPressed)
      {
        delay(DEBOUNCE);
        CircuitPlayground.clearPixels();
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
        CircuitPlayground.clearPixels();
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
        CircuitPlayground.clearPixels();
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
        CircuitPlayground.clearPixels();
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
        CircuitPlayground.clearPixels();
        currState = SLEIGH;
      }
      else if (rightButtonPressed)
      {
        playSong(m_joy, nd_joy, len_joy, speed_joy, 1);
      }
      break;
    case SLEIGH:
      CircuitPlayground.setPixelColor(5, 255, 255, 0);
      if (leftButtonPressed)
      {
        delay(DEBOUNCE);
        CircuitPlayground.clearPixels();
        currState = LIGHTSHOW;
      }
      else if (rightButtonPressed)
      {
        playSong(m_sleighride, nd_sleighride, len_sleighride, speed_sleighride, 0);
      }
      break;
    }

  delay(10);
}
