#include <TFT_eSPI.h>
#include <SD.h>
#include "touchsreen.h"
#include "caro.h"
#include "home.h"
#include "snake.h"


TFT_eSPI tft = TFT_eSPI();
int x, y, ve, caro;
int8_t ban_co[16][12] = {0};
int dangchayapp, rising = 0;
TS_Point p;

void setup() {
  pinMode(21, OUTPUT);
  digitalWrite(21, HIGH);

  tft.init();
  init_touchscreen();
//
if (!SD.begin(5)) {
    Serial.println("SD Card Mount Failed!");
  }
//
  tft.setSwapBytes(true);
  tft.invertDisplay(true);
  tft.setRotation(1);
  manghinhchinh();
  veAnhTuSD_Cuc_Tim("/snake/shit.bin", 50, 120, 30, 30, 0x1FF8);
  Serial.begin(115200);
}
void loop() {
  switch (dangchayapp)
  {
  case 0:
    touch_home();
    break;
  
  case 1:
    main_caro();
    break;
  
  case 3:
    main_snake();
    break;
  }

  button_cancel();
  delay(1);
}
