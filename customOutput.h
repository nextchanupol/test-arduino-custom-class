#include <Arduino.h>

class customOutput
{
private:
  int _pin;
  unsigned char _status;

public:
  customOutput(int pin)
  {
    _pin = pin;
    pinMode(_pin, OUTPUT);
    digitalWrite(_pin, LOW);
    _status = LOW;
  }
  void on()
  {
    digitalWrite(_pin, HIGH);
    _status = HIGH;
    delay(1);
  }

  void off()
  {
    digitalWrite(_pin, LOW);
    _status = LOW;
    delay(1);
  }

  unsigned char Status()
  {
    return _status;
  }
};
