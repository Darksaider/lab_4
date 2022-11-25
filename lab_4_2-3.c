#include <stdio.h>
 int main(){
    float arif;
    int i = 1, suma = 0,
    k=0,
    b = 100;
    while(i <b){
        if(i%5 == 0){
            printf("Кратне 5 = %d\n", i);
            suma +=i;
            k++;
        }
        i++;
    }
    arif = suma / k;
    printf("Середнє арифметичне = %.2f\n" ,arif );

 }

 