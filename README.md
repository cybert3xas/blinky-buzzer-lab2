# Lab 2: Blinky-Buzzy Toy

This program is designed to react to user's inputs via interrupts. The purpose of this assignment was to successfully program an MSP430 to produce sound frequencies and lights. 
In addition, the program employed a state machine to undergo the changes in state functions. 

## Instructions 
* Connect MSP430 to the computer via USB 
* Under the 'project's directory run the 'make' command

(Make command compiles all the files and makes sure they're communicating correctly. 
In addition it flashes the MSP430 using the '.elf' file)


## State Machine
Each button has a functionality associated:
1. The first button lights up both the green and red LEDS
2. The second button turns off both LEDS
3. The third button (when pressed for the first time) generates a buzzing sound. When the button is pressed for the second time, the buzzer sound comes to an end.
4. The fourth button dims both the green and red LEDS.
