#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

#define TFT_CS     10
#define TFT_RST    9
#define TFT_DC     8

#define BLACK 0x0000
#define BLUE 0x001F
#define RED 0xF800
#define GREEN 0x07E0
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define YELLOW 0xFFE0
#define WHITE 0xFFFF

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,  TFT_DC, TFT_RST);

#define TFT_SCLK 13  
#define TFT_MOSI 11 

void setup(void)
{
  Serial.begin(9600);
  Serial.print("ST7735 Test!");

  // 1.8" TFT
  tft.initR(INITR_BLACKTAB);

  // 1.44" TFT
  //tft.initR(INITR_144GREENTAB);

  // 0.96" 180x60 TFT
  //tft.initR(INITR_MINI160x80);

  tft.fillScreen(ST7735_BLACK);

}

void loop()
{
  tft.setCursor(0, 0);
  tft.setTextColor(BLUE);
  tft.setTextWrap(true);
  tft.print("Hello World!");
}
