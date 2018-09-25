#include <Adafruit_NeoPixel.h>

#define PIN    6
#define N_LEDS 30

Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
}

void loop() {
  rainbow();
  delay(100);
  comet();
  delay(100);
}

static void rainbow() {
  for(uint16_t i=0; i<strip.numPixels()+6; i++) {
      strip.setPixelColor(i, strip.Color(0,254,254));
      strip.setPixelColor(i-1, strip.Color(0,254,0));
      strip.setPixelColor(i-2, strip.Color(254, 254, 0));
      strip.setPixelColor(i-3, strip.Color(254, 0, 0));
      strip.setPixelColor(i-4, strip.Color(254, 0, 254));
      strip.setPixelColor(i-5, strip.Color(0, 0, 254));
      strip.setPixelColor(i-6, 0); // Clears the pixel at the end of the trail  
      strip.show();
      delay(30);
  }
}

static void comet() {
  for(uint16_t i=0; i<strip.numPixels()+5; i++) {
      strip.setPixelColor(i, strip.Color(255,50,0));     // Draw brighter orange pixel in the front
      strip.setPixelColor(i-1, strip.Color(192,50,0));    // Draw dimmer pixel as a 'neck' for transition
      strip.setPixelColor(i-2, strip.Color(100, 25, 0));  // Dull orange for a 'tail' 3 pixels in length
      strip.setPixelColor(i-3, strip.Color(100, 25, 0));  // Dull orange for a 'tail' 3 pixels in length
      strip.setPixelColor(i-4, strip.Color(100, 25, 0));  // Dull orange for a 'tail' 3 pixels in length
      strip.setPixelColor(i-5, 0); // Clears the pixel at the end of the trail  
      strip.show();
      delay(50);
  }
}
