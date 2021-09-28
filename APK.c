
/* 
 * File:   APK.c
 * Author: admin
 *
 * Created on 18. února 2021, 13:05
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    FILE *fk;
    
    fk = fopen ("Text.txt", "w");
    
    fprintf(fk "losování čísla 3");
    
    fclose(fk);
    
    return (EXIT_SUCCESS);
}

