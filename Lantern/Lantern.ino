#include <Adafruit_NeoPixel.h>

#define PIN    6
#define N_LEDS 12


Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
}

void loop() {
  pulse();
}

static void pulse() {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(255,0,0));
  }
  strip.show();
  delay(100);
  
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(192,0,0));
  }
  strip.show();
  delay(100);
  
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(128,0,0));
  }
  strip.show();
  delay(100);
  
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(96,0,0));
  }
  strip.show();
  delay(100);
  
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(64,0,0));
  }
  strip.show();
  delay(100);
  
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(32,0,0));
  }
  strip.show();
  delay(100);
  
  strip.clear();
  delay(200);
}
