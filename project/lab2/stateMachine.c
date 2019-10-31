
#include <msp430.h>

#include "stateMachine.h"
#include "buzzer.h"
#include "led.h"

void soundState(char thirdButton){
    static char changed = 0;   //will be state transition

    //if the third button was pressed then play song
    if(thirdButton){
      switch(changed){
      case 0:
	buzzer_set_period(1000); //turn on the buzzer
	changed = 1;
	break;
      case 1:
	buzzer_set_period(2500); //turn off the buzzer
	changed = 2;
	break;
      case 2:
	buzzer_set_period(3500); //turn off the buzzer
	changed = 3;
	break;
      case 3:
	buzzer_set_period(0); //turn off the buzzer
	changed = 0;
	break;
      }
    }
  
}
