#include <stdio.h>
 int main(){
    float arif;
    int i = 1, suma = 0,
    k=0,
    b = 100;
    do
    {
       if(i%5 == 0){
        printf("Кратне 5 = %d\n", i);
        suma +=i;
        k++;
    }
        i++;
    } while (i < b);
    arif = suma / k;
    printf("Cереднє aрифметичне = %.2f\n" ,arif );
    
 }


 

