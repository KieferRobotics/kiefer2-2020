void wave1()
{
    enable_servos();

    while(1)
    {
        set_servo_position(0,500);
        msleep(500);
        set_servo_position(0,1000);
        msleep(500);
    }
    disable_servos();
}