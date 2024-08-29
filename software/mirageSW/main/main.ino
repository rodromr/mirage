#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#define SD_CS 14
#define TFT_CS 5
#define TFT_DC 2
#define TFT_RST 4
#define MOSI_PIN 35
#define MISO_PIN 37
#define SCK_PIN 36

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, MOSI_PIN, SCK_PIN, TFT_RST); 

void setup() {
  Serial.begin(9600);
  tft.initR(INITR_GREENTAB);
  //tft.setRotation(1);
  tft.fillScreen(ST7735_BLACK);
}

void loop() {
  while(1){}
}
