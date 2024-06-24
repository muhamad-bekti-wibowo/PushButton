#include <arduino.h>
class Button
{
public:
  Button(int pin[],int size);
  int loop();

private:
int _pin[100];
int _size ;
bool saklarlock;
int saklar;
int akses;
};
