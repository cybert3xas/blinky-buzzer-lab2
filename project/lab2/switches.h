#ifndef switches_included
#define switches_included

#define SW1 BIT0 /* First Button */
#define SW2 BIT1 /* Second Button */
#define SW3 BIT2 /* Third Button */
#define SW4 BIT3 /* Fourth Button */

#define SWITCHES (SW1|SW2|SW3|SW4)

void switch_init();
void switch_interrupt_handler();

extern char switch_state_down1,
            switch_state_down2,
            switch_state_down3,
            switch_state_down4,
            switch_state_changed,
            ledMode;             /* effectively boolean */

#endif // included
