#include<reg51.h>

sbit pwm1=P3^3;
sbit pwm2=P3^0;

sbit out1=P3^4;
sbit out2=P3^5;

void main()
{         
   unsigned int i = 0;

   while(1)
   {   
		 
        if(pwm1==0)
        {
            while(pwm1==0);
            while(pwm1==1)
            {
                i++;
            }
            if(i>0)
            {
                if(i<=0x0496)      //12MHz,1ms=0x0310;1.5ms=0x0496,2ms=0x0627
                {
                    out1=0;
                }                  
                if(i>0x0496)                
                {
                    out1=1;
                }    								
                i=0;                                                      //if(i>0)
            }  
        }
				
				if(pwm2==0)
        {
            while(pwm2==0);
            while(pwm2==1)
            {
                i++;
            }
            if(i>0)
            {
                if(i<=0x0496)      //12MHz,1ms=0x0310;1.5ms=0x0496,2ms=0x0627
                {
                    out2=0;
                }                  
                if(i>0x0496)                
                {
                    out2=1;
                }    								
                i=0;                                                      //if(i>0)
            }  
        }
    }
}
