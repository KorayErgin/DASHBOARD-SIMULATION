#include <iostream>
#include <time.h>
#include <cstdio>
#include <ctime>
#include <allegro.h>

using namespace std;
volatile int timer;
void timerr()
{
timer--;	
}
END_OF_FUNCTION(timerr)
void main()
{
	timer=0;
	for(int i=0;i<100;i++)
    cout<<timer;
}
