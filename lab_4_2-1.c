#include <stdio.h>
 int main(){
    float arif;
    int  suma = 0,
    k=0,
    b = 100;
    for (int i = 1 ; i < b; i++)
    {
        if(i%5 == 0){
            printf("Кратне 5 = %d\n", i);
            suma +=i;
            k++;
        }
    }
    arif = suma / k;
    printf("Середнє арифметичне = %.2f\n" ,arif );

 }

 