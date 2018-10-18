   #include <Adafruit_NeoPixel.h>

/* 
 * 16G wire colors:
 *    White:  Data
 *    Brown:  Ground
 *    Yellow: 5v  
 * 
 * Treating the lighting as one long Neopixel array of 68 lights, this is how the placement and indices are laid out
 * 
 * Lighting Object          | Indices |  Quantity LEDs 
 * ---------------------------------------------------
 * Right FRONT (lg ring)     [  0 - 15 ]       16
 * Right REAR (sm ring)      [ 16 - 27 ]       12
 * Left  REAR (sm ring)      [ 28 - 39 ]       12
 * Left  FRONT (lg ring)     [ 40 - 55 ]       16
 * Bulb                      [ 56 - 67 ]       12
 * ---------------------------------------------------
*/

#define PIN    6
#define N_LEDS 68
Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);

#define MY_COLOR strip.Color(25,5,0)

void setup() {
  strip.begin();
}

void loop() {
 pulse();
 delay(750);
}

// Iterates through the 4 rings to create a pulsing effect
static void pulse() {
  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(35,7,0));
  }
  strip.show();
  delay(40);

    for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(32,7,0));
  }
  strip.show();
  delay(40);

    for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(32,6,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(30,6,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(27,6,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(27,5,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(25,5,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(23,5,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(22,4,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(20,4,0));
  }
  strip.show();
  delay(40);

    for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(17,4,0));
  }
  strip.show();
  delay(40);

      for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(16,3,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(15,3,0));
  }
  strip.show();
  delay(40);

    for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(13,3,0));
  }
  strip.show();
  delay(40);

      for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(12,2,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(10,2,0));
  }
  strip.show();
    delay(40);

      for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(7,2,0));
  }
  strip.show();
  delay(40);

      for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(7,1,0));
  }
  strip.show();
  delay(40);
  
  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(5,1,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(4,1,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(3,1,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(2,0,0));
  }
  strip.show();
  delay(40);

for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(1,0,0));
  }
  strip.show();
  delay(40);

  for(uint16_t i=0; i<N_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(0,0,0));
  }
  strip.show();
}
