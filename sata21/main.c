#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100];
    int i;
    int number=100;
    int sum=0;
    for(i=0;i<100;number++){
        if((0==(number%5)) && (0==(number%7))){
            array[i++]=number;
            printf("%d\t", number);
        }
    }

    for(i=1;i<100;i+=2){
        sum+=array[i];
    }
    printf("\n%d", sum);

    sum=0;
    for(i=0;i<100;i+=2){
        sum+=array[i];
    }
    sum/=50;
    printf("\n%d", sum);

    return 0;
}
