#include "main.h"

Timer timer(TIM2);
DigitalOut led(PC8);
int begin, end, elapsed;
 
int main()
{
	Systick_Init();
 
	while(1)
	{
		timer.start();
	
		begin = timer.read_us();
	
		Delay(1000);
		
		led = !led;
	
		end = timer.read_us();
	
		elapsed =  end - begin;
	}
 }
