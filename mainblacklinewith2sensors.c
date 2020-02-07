#include <kipr/wombat.h>
//black = 2180
//white = 155

void turn_left();
void turn_right();

int l=3;
int r=0;
int grey=1000;
int ticks_traveled = 4000;
// reflectant sensor port
int right_ref = 5; //left
int left_ref = 0; //right

int main()
{
    printf("Follow Black Line\n");
    //clear the position counter 
    cmpc(l);
    cmpc(r);
    while(get_motor_position_counter(r)<ticks_traveled)
    {
        if(analog(right_ref) > grey)//sees black
        {
            turn_right();
        }
        if(analog(right_ref) < grey)//sees white
        {
            turn_left();
        }
        if(analog(left_ref) > grey)//sees black
        {
            turn_left();
        }
        if(analog(left_ref) < grey)//sees white
        {
            turn_right();
        }
        else
        {
            mav(r,500);
            mav(l,500);
        } 
    }
    ao();
    return 0;
}

void turn_left()
{
    mav(r,800);
    mav(l,1000);
}
void turn_right()
{
    mav(r,1000);
    mav(l,800);
}





