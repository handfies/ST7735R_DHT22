// handfies:  pinout for 1.44" TFT 2088 from Adafruit
// https://www.adafruit.com/product/2088
// Display VIN -> 3.3v
// Display 3v3 -> 3.3v
// Display Gnd -> Gnd
// Display SCK -> A3
// Display SI -> A5
// Display TCS -> A2
// Display RST -> D7
// Display D/C -> D0

#define cs   A2
#define dc   D0
//define rst  NO_RST_PIN
#define rst D7

#include "Adafruit_mfGFX.h"    // Core graphics library
#include "Adafruit_ST7735.h" // Hardware-specific library


Adafruit_ST7735 tft = Adafruit_ST7735(cs, dc, rst);

void setup() {

    Serial.println("Begin Setup");
    // handfies: initR for 1.44"
    tft.initR(INITR_144GREENTAB);

     tft.fillScreen(ST7735_BLACK);
     tft.setCursor(0, 0);
     tft.setTextColor(ST7735_WHITE);
     tft.setTextWrap(true);
     tft.print("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur adipiscing ante sed nibh tincidunt feugiat. Maecenas enim massa, fringilla");

     tft.drawLine(0, 0, tft.width()-1, tft.height()-1, ST7735_YELLOW);
     tft.drawLine(tft.width()-1, 0, 0, tft.height()-1, ST7735_YELLOW);

     tft.drawPixel(0, tft.height()/2, ST7735_GREEN);
     delay(5000);

}

void loop() {

 tft.fillScreen(ST7735_BLACK);
 tft.setCursor(0, 0);
 tft.setTextColor(ST7735_BLUE);
 tft.setTextWrap(true);
 tft.setTextSize(3);
 tft.print("Hello...");
 delay(2000);
 tft.print("Stephane..");
 delay(1000);
 tft.print("How are you..?");
 delay(2000);
}
