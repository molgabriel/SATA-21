/**
 * main.c
 *
 * Created: 2017. 03. 08. 20:47:32
 * Author : Nagy Zsolt
 */
#include <stdio.h>
#include <stdlib.h>

/** Feladat: http://uni-obuda.hu/users/sandor.tamas/Programozas1_Informatika_labor/feladatok_2012_04_22.pdf
21. feladat
*/


int main()
{

    int array[100];
    int i;
    int number=100;
    int sum=0;
    for(i=0; i<100; number++)
    {
        if((0==(number%5)) && (0==(number%7)))
        {
            array[i++]=number;
            printf("%d\t", number);
        }
    }


    for(i=1; i<100; i+=2)
    {
        sum+=array[i];
    }
    printf("\n%d", sum);


    for(i=0, sum=0; i<100; i+=2)
    {
        sum+=array[i];
    }
    sum/=50;
    printf("\n%d", sum);

    return 0;
}
