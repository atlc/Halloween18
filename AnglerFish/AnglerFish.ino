#include <Adafruit_NeoPixel.h>

/* 
 * 16G wire colors:
 *    White:  Data
 *    Brown:  Ground
 *    Yellow: 5v  
 * 
 * Treating the lighting as one long Neopixel array of 89 lights, this is how the placement and indices are laid out
 * 
 * Lighting Object      |   Indices   |  Quantity LEDs 
 * ---------------------------------------------------
 * Left FRONT (lg ring)     [  0 - 15 ]       16
 * Left REAR (sm ring)      [ 16 - 27 ]       12
 * Right REAR (sm ring)     [ 28 - 39 ]       12
 * Right FRONT (lg ring)    [ 40 - 55 ]       16
 * SPINE atop the fish      [ 56 - 76 ]       21
 * Bulb                     [ 77 - 88 ]       12
 * ---------------------------------------------------
*/

// #define N_LEDS 42


#define PIN    6
#define N_LEDS 12

Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);
#define MY_COLOR strip.Color(0,0,40)


void setup() {
  strip.begin();
}

void loop() {
 spine();
// fins();1
}

static void spine() {
  for(uint16_t i=0; i<N_LEDS+5; i++) {
      strip.setPixelColor(i, MY_COLOR); // Draw new pixel at "front"
      strip.setPixelColor(i-5, 0); // Erase pixel a few steps back
      strip.show();
      delay(65);
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
