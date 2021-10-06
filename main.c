/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Počítač
 *
 * Created on 8. února 2021, 19:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
double nalez (){
 double cislo ;

    printf ("zadej cislo: ");
    scanf ("%lf", &cislo);
    return cislo;
}

void porovnat (double num_a, double num_b){
    printf("Větší číslo z těch dvou je %lf.\n", (num_a > num_b) ? num_a : num_b);
}
int main() {
    char opacko = "a";
    double promen_a, promen_b;
    
    while (opacko != "n") {
        printf ("porovnání dvou čísel\n----------------------\n");
        promen_a = nalez ();
        promen_b = nalez ();
        porovnat (promen_a, promen_b);
        porovnat (14.6, 24.8);
        
        printf ("\nChceš znovu porovnat? [a/n] ");
        
        do {
            opacko = (char) getchar();
        } while (opacko == "\n");
    }
    return (EXIT_SUCCESS);
}


int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

