// Representación en punto flotante
// A. Veiga, SOyR 2021

// a) Intente predecir la salida
// b) Compile y verifique que su predicción sea correcta
// c) Calcule el error en la representación (double mejora?)

#include <stdio.h>
#include <math.h>

void main() {

    float x;
    int y;
    char* p = "-pi";

    x = -4 * atan(1.0);
    y = *(int*)&x;          // Pista: &x obtiene la dirección, (int*) apunta a
                            // la dirección como entero, * obtiene lo apuntado
                            // Truco para imprimir un float en hex

    printf("x = %.9f %d 0x%08X %s %2X %2X %2X\n", x, y, y, p, p[0], p[1], p[2]);

}


// Solución: -pi
// 0xC0490FDB = 0b11000000010010010000111111011011  little endian
//                Seeeeeeeemmmmmmmmmmmmmmmmmmmmmmm
//             = -11.0010010000111111011011  (sólo 25 dígitos de resolución)

// Corolario: La representación simbólica no tiene error y
// ocupa sólo 3 bytes ASCII   :-)
