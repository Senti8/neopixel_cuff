//neopixel_cuff is used to configure the light sequence for the Senti8 band
//This code was developed as part of the 2014 NASA SpaceApps Competition, NYC USA.
//Learn more about Senti8 project at http://www.senti8.com 
//This portion of code was written by J. Brooks Zurn and modified from 
//Strandtest sample code from Adafruit Neopixel library.


#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMLEDS 6  //number of neopixel LEDs

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMLEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  int mainwait=5000;
  
  bluechase(mainwait); //delay(mainwait/5);
  bluechase(mainwait); //delay(mainwait/5);
  ledonoff(1,0,0,0,0,0,mainwait); delay(mainwait/5);
  ledonoff(1,1,0,0,0,0,mainwait); delay(mainwait/5);
  ledonoff(1,1,1,0,0,0,mainwait); delay(mainwait/5);
  ledonoff(1,1,1,1,0,0,mainwait); delay(mainwait/5);
  ledonoff(1,1,1,1,1,0,mainwait); delay(mainwait/5);
  ledonoff(1,1,1,1,1,1,mainwait); delay(mainwait*1.75);
  ledonoff(0,0,1,0,0,0,mainwait); delay(mainwait*5);

  ledonoff(1,0,0,0,0,0,mainwait); delay(mainwait/5);
  ledonoff(1,1,0,0,0,0,mainwait); delay(mainwait/5);
  ledonoff(1,1,1,0,0,0,mainwait); delay(mainwait/5);
  ledonoff(1,1,1,1,0,0,mainwait); delay(mainwait/5);
  ledonoff(1,1,1,1,1,0,mainwait); delay(mainwait/5);
  ledonoff(1,1,1,1,1,1,mainwait); delay(mainwait*100);
  
}




