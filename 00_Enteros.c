// Enteros con signo
// https://man7.org/linux/man-pages/man3/printf.3.html
// a) Intente predecir la salida
// b) Compile y verifique
// c) Verifique qué sucede si cambia el tipo de las variables a unsigned int o long int
// d) Repetir para short, expilicar extension de signo

#include<stdio.h>

void main() {

    // Parte a
    char c = 200;
    printf("c: %c %d %u\n", c, c, c);   // Cómo hay que imprimir?

    // Parte b
    int a[] = { 0, 1, -1, 0x7FFFFFFF, 0x80000000 };
    //short a[] = { 0, 1, -1, 0x7FFF, 0x8000 };
    printf("largo del arreglo: %d bytes\n", sizeof(a));

    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++)
        printf("a[%d]: %08X %d %u \n", i, a[i], a[i], a[i]);

}
