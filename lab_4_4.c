#include <stdio.h>
#include <math.h>
int main(){
    float x=-(3.14/2),
    b = 3.14/2,
    dx =3.14/20;

    printf(" _____________________________\n");
    printf("|       x\t| " );
    printf("    y=f(x)  |\n" );
    printf("|_______________|_____________|\n");
    for ( x ; x <= b; x+=dx)
    {
        float ctg_x = cos(x)/sin(x);
          if(ctg_x >10000)
          continue;
        if(x >0)
        printf("|\t%.3f   " , x);
        if(x <0)
        printf("|\t%.3f  " , x);
        if(ctg_x >0)
            printf("|\t%.3f |\n" , ctg_x);
        if(ctg_x <0)
            printf("|\t%.3f|\n" , ctg_x);
     
        printf("|_______________|_____________|\n");
  
     }
}

