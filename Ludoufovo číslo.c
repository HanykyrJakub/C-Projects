/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ludoufovo číslo.c
 * Author: admin
 *
 * Created on 22. února 2021, 9:47
 */

#include <stdio.h>
#include <stdlib.h>
#define DVE_PI (2*3,14)
#define NAZEV_SOUBORU obvod.txt
#define ZAPIS "w"
int main()
{
 
 FILE *fw;
 int r;
 fw = fopen(NAZEV_SOUBORU, Obvod.txt);
        
 printf ("Zadej poloměr: ");
 scanf ("%lf", &r);
 fprintf (fw "Obvod kruhu o poloměrem %lf je %lf",r, r* DVE_PI);
 fclose (0);
    return (EXIT_SUCCESS);
}

