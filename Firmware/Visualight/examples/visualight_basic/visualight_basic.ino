#include <EEPROM.h>
#include "Visualight.h"

Visualight visualight;

#define TYPE_RGB 0
#define TYPE_RGBW 1

void setup(){

  visualight.setVerbose(true); // only set true if you know what's up
//  visualight.setup(TYPE_RGB, "dev.visualight.org", 5001);  // setup(TYPE, "URL", PORT)
  visualight.setStartColor(50, 255, 50, 255); //r,g,b,w
  visualight.setup(TYPE_RGB, "54.204.16.233", 5001);  // setup(TYPE, "URL", PORT)
}

void loop(){

  visualight.update(); 
}


