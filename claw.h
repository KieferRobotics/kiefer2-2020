int claw_open = 200; 
int claw_close = 900; 

void claw_set()
{
    enable_servos();
    while(1)
    {
    set_servo_position(3,claw_open);
    msleep(500);
    set_servo_position(3,claw_close);
    msleep(500);
    }
     disable_servos(); 

}
