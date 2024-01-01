#include <ABLocks_TimerFreeTone.h>

void setup()
{
  	pinMode(13, OUTPUT);

}


void loop()
{

  	TimerFreeTone(13,392,500);
  	TimerFreeTone(13,392,500);
  	TimerFreeTone(13,440,1000);
  	TimerFreeTone(13,392,1000);
  	TimerFreeTone(13,523.3,1000);
  	TimerFreeTone(13,493.2,2000);

}