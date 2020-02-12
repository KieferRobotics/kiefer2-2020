#define r 0
#define l 3

void turn_right()

{
   cmpc(r);

   cmpc(l);

   while(gmpc(r) < -1075 && gmpc(l) > 1675)

   {
       mav(r,-500);


       mav(l,500);
   }

}

