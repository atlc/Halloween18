#include <Adafruit_NeoPixel.h>

/* Treating the lighting as one long Neopixel array of 103 lights, this is how the placement and indices are laid out
 * Lighting Object      |   Indices   |  Quantity LEDs 
 * -----------------------------------------------------
 * SPINE atop the fish      [ 0 - 20 ]        21
 * Left FIN (Fiber Optics)    [ 21 ]          1   
 * Left FRONT (lg ring)     [ 22 - 37 ]       16
 * Left MID (sm ring)       [ 38 - 49 ]       12
 * Left REAR (sm ring)      [ 50 - 61 ]       12
 * Right REAR (sm ring)     [ 62 - 73 ]       12
 * Right MID (sm ring)      [ 74 - 85 ]       12
 * Right FRONT (lg ring)    [ 86 - 101]       12
 * Right FIN (Fiber Optics)   [ 102 ]         1
*/

// #define N_LEDS 103


#define PIN    6
#define N_LEDS 21

Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);
#define MY_COLOR strip.Color(0,60,128)


void setup() {
  strip.begin();
}

void loop() {
 spine();
 fins();
 fronts();
 mids();
 rears();
}

static void spine() {
  for(uint16_t i=0; i<21+5; i++) {
      strip.setPixelColor(i, MY_COLOR); // Draw new pixel at "front"
      strip.setPixelColor(i-5, 0); // Erase pixel a few steps back
      strip.show();
      delay(85);
  }
}

static void fins() {
 strip.setPixelColor(21, MY_COLOR); // Left fin
 strip.setPixelColor(102, MY_COLOR); // Right fin
 strip.show();
 delay(85);
 strip.clear(); // Both fins off
 delay(85);
}

static void fronts() {
  for(uint16_t i=22; i<37; i++) {
    strip.setPixelColor(i, MY_COLOR); // Fill in Left Front ring
  }
  for(uint16_t i=86; i<101; i++) {
    strip.setPixelColor(i, MY_COLOR); // Fill in Right Front ring
  }

  strip.show();
  delay(85);
  strip.clear();
  delay(85);
}

static void mids() {
  for(uint16_t i=38; i<49; i++) {
    strip.setPixelColor(i, MY_COLOR); // Fill in Left Middle ring
  }
  for(uint16_t i=74; i<85; i++) {
    strip.setPixelColor(i, MY_COLOR); // Fill in Right Middle ring
  }

  strip.show();
  delay(85);
  strip.clear();
  delay(85);
}

static void rears() {
  for(uint16_t i=50; i<73; i++) {
    strip.setPixelColor(i, MY_COLOR); // Fill in Left Middle ring
  }

  strip.show();
  delay(85);
  strip.clear();
  delay(85);
}
