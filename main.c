#include <kipr/wombat.h>
#include <wave.h>
#include <drive.h>
#include <claw.h>



thread thread_wave;//naming the variable
thread thread_claw;


int main()
{
    thread_wave = thread_create(wave1);//creates the thread
    thread_claw = thread_create(claw_set);
    
    
    thread_start(thread_wave);//starts the thread
    thread_start(thread_claw);
    
    mav(0,500);
    mav(3,500);
    msleep(5000);
    
    
    thread_destroy(thread_wave);//kills the thread
    thread_destroy(thread_claw);
    
    return 0;
}
