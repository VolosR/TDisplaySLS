#include "LV_Helper.h"
#include "utilities.h"
#include "ui.h"

void setup() {
   
    Serial.begin(115200);
    Serial.println("Lets Start");
    lv_helper();
    ui_init();

    analogWrite(38,120);

}

void loop() {

 lv_task_handler();
 delay(5);
}