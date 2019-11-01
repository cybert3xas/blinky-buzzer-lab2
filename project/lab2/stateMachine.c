#include <msp430.h>
#include "buzzer.h"
#include "stateMachine.h"
#include "switches.h"
#include "led.h"

static char pwmCount = 0;

void sm_update_led()
{
  pwmCount = (pwmCount+1)%3; //range from 0-2

  static char new_red, new_green;

  switch(ledMode){
  case 0:
    new_red = 1;
    new_green = 1;
    break;
  case 1:
    new_red =1;
    new_green=0;
    break;
  case 2:
    new_red =0;
    new_green = 1;
    break;
  case 3:
    buzzer_set_period(1000); //make sound
    break;
  case 4:
    new_red = (pwmCount <1); //red dims
    new_green = 0; //green dims
    break;
  }
  if(red_on != new_red || green_on != new_green){
    red_on = new_red;
    green_on = new_green;
    led_changed = 1;
  }
  

}
