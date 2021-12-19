#include <Adafruit_CircuitPlayground.h>
//#include "pitches.h"

void playSong(int* melody, float* noteDuration, int len, float speed, uint8_t color_choice)
{
  uint8_t color1_r, color1_g, color1_b, color2_r, color2_g, color2_b;
  if(color_choice)
  {
    color1_r = 255;
    color1_g = 0;
    color1_b = 0;
    color2_r = 0;
    color2_g = 255;
    color2_b = 0;
  }
  else
  {
    color1_r = 255;
    color1_g = 255;
    color1_b = 255;
    color2_r = 0;
    color2_g = 0;
    color2_b = 255;
  }

  int nd_counter = 0;
  uint8_t color_swap = 0;
  CircuitPlayground.speaker.enable(true);
  for (int thisNote = 0; thisNote < len; thisNote++) 
  { 
    for (int p = 0; p < 10; p+=2)
    {   
      if(color_swap)
      {
        CircuitPlayground.setPixelColor(p, color1_r, color1_g, color1_b);
        CircuitPlayground.setPixelColor(p+1, color2_r, color2_g, color2_b);
      }
      else
      {
        CircuitPlayground.setPixelColor(p, color2_r, color2_g, color2_b);
        CircuitPlayground.setPixelColor(p+1, color1_r, color1_g, color1_b);
      }
  }

    nd_counter += 1000/noteDuration[thisNote];
    if(nd_counter >= 1000)
    {
      color_swap = !color_swap;
      nd_counter = 0;
    }

    float currNoteDuration_float = (1000/speed)/noteDuration[thisNote];
    int currNoteDuration = ((currNoteDuration_float - (int)currNoteDuration_float) >= 0.5) 
                                                                ? currNoteDuration_float + 1 
                                                                : currNoteDuration_float;
    CircuitPlayground.playTone(melody[thisNote], currNoteDuration);
  }
  CircuitPlayground.speaker.enable(false);
  for (int p = 0; p < 10; p++)
  {
    CircuitPlayground.setPixelColor(p, 0, 0, 0);
  }
}
