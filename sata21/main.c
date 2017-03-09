/**
 * main.c
 *
 * Created: 2017. 03. 08. 20:47:32
 * Author : Nagy Zsolt
 */
#include <stdio.h>
#include <stdlib.h>

/** Feladat: http://uni-obuda.hu/users/sandor.tamas/Programozas1_Informatika_labor/feladatok_2012_04_22.pdf
 * 21. feladat
 * Töltsön fel egy egész típusú 100 db elemet tartalmazó tömböt 5-tel és 7-tel maradék nélkül osztható
 * számokkal 100-tól növekvő értékkel! Adja össze a páratlan számú indexen levő elemek értékét! Vegye
 * az átlagát a páros indexen levő tömb elemeknek!
 */

/** Figyelem a megoldás feltételezi a teljes syntaxis ismeretét, ezért a kommentekben csak az algoritmus tárgyalom!*/

int main()
{
    /**Töltsön fel egy egész típusú 100 db elemet tartalmazó tömböt 5-tel és 7-tel maradék nélkül osztható
     *   számokkal 100-tól növekvő értékkel!
     */
    /** Tömb, indexelő változó, 100-tól növekvő szám és összeg létrehozása*/
    int array[100];
    int i;
    int number=100;
    int sum=0;
    /** Szám kereső ciklus*/
    /** "i" kinullázása, "i" vizsgálata elérte-e már a tömb végét, szám növelése.*/
    for(i=0; i<100; number++)
    {
        /** Megvizsgáljuk hogy a feltételeknek megfelel e az aktuális szám.*/
        /** Ha igen akkor a beírjuk a tömbe és növeljük a tömb indexelő változót.*/
        if((0==(number%5)) && (0==(number%7)))
        {
            array[i++]=number;
            printf("%d\t", number);
        }
    }

    /**Adja össze a páratlan számú indexen levő elemek értékét!*/

    /**A tömb csak páratlan elemein lépünk végig. És ezeket összeadjuk.*/
    for(i=1; i<100; i+=2)
    {
        sum+=array[i];
    }
    printf("\n%d", sum);

    /**Vegye az átlagát a páros indexen levő tömb elemeknek!*/

    /**Csak a páros indexű elemeken lépek végig ezeket összeadom, majd ha végeztem a ciklus után elosztom az elemszámmal.*/
    for(i=0, sum=0; i<100; i+=2)
    {
        sum+=array[i];
    }
    sum/=50;
    printf("\n%d", sum);

    return 0;
}
