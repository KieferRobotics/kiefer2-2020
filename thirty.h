#include <kipr/wombat.h>
#define r  0
#define l  3
#define h 1
#define ticks_traveled2  1600// 2587
void turn_right();
void turn_left();
void thirty()
{
    cmpc(l);
    cmpc(r);
    while(get_motor_position_counter(l) < ticks_traveled2)//turns toward the green and red blocks
    {
        mav(l,1000);
        msleep(500);
    }
	while(get_motor_position_counter(r) < 4000)// drives forward to the blocks
    {
        mav(l,1000);
        mav(r,1000);
        
        msleep(500);
    }
    turn_left();
    msleep(500);
    mav(r,500);
    mav(l,500);
    

}

void turn_right()//turn right 90 degrees

{
   cmpc(r);

   cmpc(l);

   while(gmpc(r) > -1075)//turn right 90 degrees

   {
       mav(r,-500);
       mav(l,500);
   }

}

void turn_left()//turn left 90 degrees

{
   cmpc(r);

   cmpc(l);

   while(gmpc(l) > -1075)//turn leftt 90 degrees

   {
       mav(l,-500);
      
   }

}

