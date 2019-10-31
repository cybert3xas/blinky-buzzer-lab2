
#include <msp430.h>

#include "stateMachine.h"
#include "buzzer.h"
#include "led.h"

void soundState(){
    static char changed = 0;
    switch(changed){
    case 0:
      buzzer_set_period(1000); //turn on the buzzer
      changed = 1;
      break;
    case 1:
      buzzer_set_period(0); //turn off the buzzer
      changed = 0;
      break;
    }
  
}
