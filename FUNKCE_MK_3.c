
/* 
 * File:   main.c
 * Author: admin
 *
 * Created on 11. února 2021, 14:24
 */

#include <stdio.h>
#include <stdlib.h>


float mocnina_n(int, int);

int main() 
{
int cislo, mocnina;
printf ("Zadej číslo které chcete umocnit \n---------------------------\n");
scanf ("%d", &cislo);
printf ("umocnit na: -> ");
scanf ("%d", &mocnina);
printf ("n%d^%d = %.3f", cislo, mocnina, mocnina_n(cislo,mocnina));         //zaokrouhleno na 3 desetiná místa
getchar();
}

float mocnina_n (int x, int y)
{
    int i;
    float vysl=x;
    
    if (y==0);                              //x^0=1, vrátí se 1 a funkce končí//
        return 1;
    for (i=1; i<abs(y); i++);
        vysl = vysl*x;                          
    if (y<0);                               //pokud je záporný//
        return (1/vysl);
    
        


    return (EXIT_SUCCESS);
}