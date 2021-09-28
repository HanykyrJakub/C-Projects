
/* 
 * File:   main.c
 * Author: admin
 *
 * Created on 3. června 2021, 16:02
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int input();
void output(float);
int main()
{  
	float result;                           //menu pro volbu
	int choice, num;
	printf("Zadej 1, jestli chcete výpocitat aritmetické posloupnosti \n");
	printf("Zadej 2, jestli chcete vypocitat geometrickou posloupnost\n");
	printf("Zadej 3, jestli chcete vypocitat fibonaciho posloupnost\n");
	printf("Zadejte své rozhodnutí: \n");
	choice = input();
	
	switch (choice) {
	case 1: {
           double soucet(double param_x, double param_y) {
    return param_x + param_y;
}

double nacti() {
    double hodnota;

    printf("Zadej hodnotu: ");
    scanf("%lf", &hodnota);
    return hodnota;
}

int main() {                                                        //aritmetrická posloupnost
    double prom_a, prom_b, prom_c, soucet_ab, soucet_ac, soucet_bc;

    prom_a = nacti();
    prom_b = nacti();
    prom_c = nacti();

    
    
    soucet_ab = soucet(prom_a, prom_b);
    printf("%lf + %lf = %lf\n", prom_a, prom_b, soucet_ab);

    soucet_ac = soucet(prom_a, prom_c);
    printf("%lf + %lf = %lf\n", prom_a, prom_c, soucet_ac);

    soucet_bc = soucet(prom_b, prom_c);
    printf("%lf + %lf = %lf\n", prom_b, prom_c, soucet_bc);
    return (EXIT_SUCCESS);
}
        
	case 2: {                               //Geometrická Posloupnost
            int Gp(int a,r,n){
                return ( a * (int)(r,n - 1));
            }
            int main(){
                int a = 1;
                
                int r = 2;
                
                int n = 8;
                printf ("%d článek geometrické posloupnosti je : %d\n", n  Gp(a, r, n));
               
            }
		
	}
	case 3: {                                                   //Fibonaciho posloupnost
            int i, n, c_1, c_2;
            int dCislo = c_1 + c_2;
            printf ("Zadej pocet cisel: ");
            scanf ("%d", &n);
            printf ("Fibonaciho posloupnost: %d ", c_1 + c_2);
            
            for (i=1; i<= n; ++i){
                printf("%d" , dCislo);
                c_1 = c_2;
                c_2 = dCislo;
                dCislo = c_1 +  c_2;
                
                return (EXIT_SUCCESS);
            }
            
            
	}
	default:
		printf("Špatně zadáno!\n");
	}
	return 0;
}
int input()
{
	int num;
	scanf("%d", &num);
	return (num);
}

void output(float number)
{
	printf("%f", number);
}

return (EXIT_SUCCESS);