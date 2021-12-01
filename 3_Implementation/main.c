#include <avr/io.h>
#include"Activity1.h"
#include"Activity2.h"
#include"Activity3.h"
#include<util/delay.h>
int main(void)
{
    LCD_INITIALIZATION();
    while(1)
    {
        Activity1(); //Activity 1
        Activity2(); //Activity 2
        Activity3(); //Activity 3
    }
  return 0;
}
