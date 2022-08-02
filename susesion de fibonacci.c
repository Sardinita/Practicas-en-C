//Hacer la serie de Fibonacci hasta el termino n introducido por teclado
#include <stdio.h>
#include <math.h>

int main(){
    int i, j, z,num, suma;
    printf ("Numero para la serie de Fibonacci: ");
    scanf ("%i", &num);
    j = 1;
    z = 0;
    if (num == 1){
        printf ("0 ");
    }
    else{
        printf ("0, ");
    }
    for (i = 2; i <= num; i++){
        suma = j + z;
        printf ("%i, ", suma);
        j = z;
        z = suma;
    }
}
