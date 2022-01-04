#include "customInput.h"
#include "customOutput.h"

customInput MODE(14);
customInput UP(27);
customInput DOWN(26);

customOutput LED1(15);
customOutput LED2(2);
customOutput PUMP1(5);
customOutput PUMP2(18);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (MODE.pressed())
  {
    delay(10);
    if (MODE.pressed())
    {
      LED1.on();
      Serial.println("Mode -> Pressed ");
      //add code..
      while (!MODE.released());
      delay(10);
    }
  }

  if (UP.pressed())
  {
    delay(10);
    if (UP.pressed())
    {
      LED2.on();
      Serial.println("Up -> Pressed ");
      //add code..
      while (!UP.released())
        ;
      delay(10);
    }
  }

  if (DOWN.pressed())
  {
    delay(10);
    if (DOWN.pressed())
    {
      Serial.println("Down -> Pressed ");
      LED1.off();
      LED2.off();
      while (!DOWN.released())
        ;
      delay(10);
      PUMP1.on();
      PUMP2.on();
    }
  }
}
