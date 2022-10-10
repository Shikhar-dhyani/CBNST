//bisection convergence =1  (same as secant but secant does not gurrantee)

#include <stdio.h>
#include<math.h>

float f(float x){
    return x*x*x-5*x +1;
}

int main()
{
    float a,b,e;
    printf("Enter Interval :");
    scanf("%f%f",&a,&b);
    
    while(f(a)*f(b)>=0){
        printf("Invalid interval ! \t Enter Again :");
        scanf("%f%f",&a,&b);
    }
    
    printf("Interval Found : %f - %f , Enter Allowed Error :",a,b);
    scanf("%f",&e);
    
    float x=(a+b)/2;
    int i=1;
    
    while(1){
        
        if(f(x)*f(a) < 0) b=x;
        else              a=x;
        
        float x1=(a+b)/2;
        
        if(fabs(x1-x)<e) {
            printf("x=%f  iteration=%d\n",x,i);
            printf("Root found :%f in iteration :%d",x,i);
            break;
        }

        printf("x=%f  iteration=%d\n",x,i);
        x=x1;
        i++;
        
    }
    

    return 0;
}
