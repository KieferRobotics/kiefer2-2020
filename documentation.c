#include <kipr/wombat.h>
int  down = 430;
int up = 1200;
int main()
{
    
    enable_servos();
        set_servo_position(0,up);

    while (digital(0) == 0)
    {
    mav(0,-800);
    mav(1,-800);
    }
    ao();
    
    set_servo_position(0,down);
    msleep(500);
    
    mav(0,800);
    mav(1,800);
    msleep(2000);
    
    ao();
    
    disable_servos();
    return 0;
}
