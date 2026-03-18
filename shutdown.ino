#include "DigiKeyboard.h"

void setup() {
  // Wait for computer to recognize the Digispark
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(0);

  // Open PowerShell hidden (to avoid showing the console)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -WindowStyle Hidden -NoProfile");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // PowerShell script to show 20 error pop-ups
  DigiKeyboard.print("for ($i=1; $i -le 20; $i++) {");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);

  DigiKeyboard.print("$wshell = New-Object -ComObject Wscript.Shell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);

  // Different error messages
  DigiKeyboard.print("$msg = 'Critical System Error #' + $i + ': ' + @('Memory corruption detected','Windows cannot access file','Hardware malfunction','Driver failure','Registry error','System32 missing','Boot failure','Kernel panic','BSOD imminent','CPU overheat','Disk read error','Fatal exception','Stack overflow','Division by zero','Invalid page fault','Unknown hard error','NTFS file system','DLL not found','Service failed','Security breach')[$i-1]");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);

  // Pop-up: 0x10 = Critical icon, 0 = no timeout (wait for user)
  DigiKeyboard.print("$wshell.Popup($msg, 0, 'Windows Alert', 0x10)");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);

  DigiKeyboard.print("}");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // Optional: also open Notepad with a fake error log
  DigiKeyboard.print("Start-Process notepad -ArgumentList 'C:\\Windows\\System32\\drivers\\etc\\hosts'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // Blink LED to indicate script has run
  pinMode(1, OUTPUT);
  for (int i = 0; i < 10; i++) {
    digitalWrite(1, HIGH);
    delay(200);
    digitalWrite(1, LOW);
    delay(200);
  }
}