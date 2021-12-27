#include "DigiKeyboard.h"

#define KEY_Tab     43

void setup() {
      delay(100);

      DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

      delay(200);

      DigiKeyboard.print("cmd");

      DigiKeyboard.sendKeyStroke(KEY_ENTER);

      delay(500);
      
      //Paste your YouTube Link where it says "YOURYOUTUBELINK". Example: YouTube.com/CyPeNet?sub_confirmation=1
      DigiKeyboard.print("start chrome.exe youtube.com/channel/UCmLmFlJuFthgcFz0yJkpS_g?sub_confirmation=1");

      DigiKeyboard.sendKeyStroke(KEY_ENTER);

      delay(2500);

      DigiKeyboard.sendKeyStroke(KEY_Tab);
      DigiKeyboard.sendKeyStroke(KEY_Tab);
      DigiKeyboard.sendKeyStroke(KEY_ENTER);
      
      delay(2000);

      DigiKeyboard.sendKeyStroke(KEY_W ,MOD_CONTROL_LEFT);
      
      delay(250);

      DigiKeyboard.print("exit");

      DigiKeyboard.sendKeyStroke(KEY_ENTER);
}


void loop() {
  
}
