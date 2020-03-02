#include <kipr/wombat.h>
#define r  0
#define l 3
#define h  1
#define ticks_traveled -3000 // -900
void fifteen()
{
    cmpc(l);
    cmpc(r);
    while(get_motor_position_counter(r) > ticks_traveled)// drives backwards to coupler
    {
        mav(r,-500);
        mav(l,-500);
       
    }
    ao();
    msleep(500);
    
    cmpc(1);
    mav(h,400);// activates hook going down
    msleep(1000);


    if((h) == 285)
    {
        freeze(h);// pauses the hook while its in the coupler
    }
    ao();
    msleep(500);
    
    cmpc(l);
    cmpc(r);
    while(get_motor_position_counter(r) < 1844)// drives forward pulling the coupler
    {
        mav(r,1000);
        mav(l,1000);
    }
    msleep(500);
    cmpc(l);
    while(get_motor_position_counter(l) > -900)
    {
        mav(l,-500);
        msleep(500);
    }
    
    cmpc(1);
    mav(h,-400);// activates hook going down
    msleep(1000);


    if((h) == 0)
    {
        freeze(h);// pauses the hook while its in the coupler
    }
    ao();
    msleep(500);

}
