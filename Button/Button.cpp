#include "Button.h"
Button::Button(int pin[], int size)
{
  _size = size;
  for (int i = 0; i < size; i++)
  {
    pinMode(pin[i], INPUT_PULLUP);
    _pin[i] = pin[i];
  }
}
int Button::loop()
{
  akses = 0;
  if (!saklarlock)
    for (int i = 0; i < _size; i++)
      if (!digitalRead(_pin[i]))
        saklar = 1 + i;
  for (int i = 0; i < _size; i++)
  {
    if (digitalRead(_pin[i]))
      akses++;
  }
  if (akses == _size)
    saklar = 0;
  if (!saklar)
    saklarlock = 0;
  else if (saklarlock)
    saklar = 255;
  if (saklar > 0)
    if (!saklarlock)
      saklarlock = 1;
  return saklar;
}