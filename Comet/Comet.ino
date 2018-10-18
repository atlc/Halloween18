#include <Adafruit_NeoPixel.h>

#define PIN    6
#define N_LEDS 21

Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);

// Creating values for the "comet" chain, with the bright lead, a dimmer transition, and three trailing as the tail
#define BLUE_HEAD strip.Color(0,0,255)
#define BLUE_NECK strip.Color(0,20,100)
#define BLUE_TAIL strip.Color(0,50,50)

#define GREEN_HEAD strip.Color(0,255,40)
#define GREEN_NECK strip.Color(0,100,30)
#define GREEN_TAIL strip.Color(0,50,20)

#define YELLOW_HEAD strip.Color(255,205,0)
#define YELLOW_NECK strip.Color(200,150,0)
#define YELLOW_TAIL strip.Color(155,90,0)

void setup() {
  strip.begin();
}

void loop() {
  chase();
}

static void chase() {
  for(uint16_t i=0; i<strip.numPixels()+5; i++) {
    strip.setPixelColor(i, BLUE_HEAD); // Draw new pixel
    strip.setPixelColor(i-1, BLUE_NECK);
    strip.setPixelColor(i-2, BLUE_TAIL);
    strip.setPixelColor(i-3, BLUE_TAIL);
    strip.setPixelColor(i-4, BLUE_TAIL);
    strip.setPixelColor(i-5, 0); // Erase pixel a few steps back
    strip.show();
    delay(65);
  }
  
  delay(500);
  
  for(uint16_t i=0; i<strip.numPixels()+5; i++) {
    strip.setPixelColor(i, GREEN_HEAD); // Draw new pixel
    strip.setPixelColor(i-1, GREEN_NECK);
    strip.setPixelColor(i-2, GREEN_TAIL);
    strip.setPixelColor(i-3, GREEN_TAIL);
    strip.setPixelColor(i-4, GREEN_TAIL);
    strip.setPixelColor(i-5, 0); // Erase pixel a few steps back
    strip.show();
    delay(65);
  }

  delay(500);

  for(uint16_t i=0; i<strip.numPixels()+5; i++) {
    strip.setPixelColor(i, YELLOW_HEAD); // Draw new pixel
    strip.setPixelColor(i-1, YELLOW_NECK);
    strip.setPixelColor(i-2, YELLOW_TAIL);
    strip.setPixelColor(i-3, YELLOW_TAIL);
    strip.setPixelColor(i-4, YELLOW_TAIL);
    strip.setPixelColor(i-5, 0); // Erase pixel a few steps back
    strip.show();
    delay(65);
  }

  delay(500);
}
