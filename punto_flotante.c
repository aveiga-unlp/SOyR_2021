// Representación en punto flotante
// A. Veiga, SOyR 2021
// a) Intente predecir la salida
// b) Compile y verifique que su predicción sea correcta
// c) Calcule el error en la representación. Utilizando double mejora?
// d) Proponga un formato para almacenar en 32 bits el número PI con la mayor 
//    cantidad de dígitos. Calcule er error.

#include <stdio.h>
#include <math.h>

void main() {

    float x;
    int y;
    char* p = "pi";

    x = 4 * atan(1.0);		// Una forma ingeniosa de obtener el número PI
    y = *(int*)&x;          // Truco para imprimir un float en hex
    						// Pista: &x obtiene la dirección, (int*) apunta a
                            // la dirección como entero, * obtiene lo apuntado
                            

    printf("x = %.9f %d 0x%08X %s %2X %2X\n", x, y, y, p, p[0], p[1]);

}

//
// Solución: -pi
// 0x40490FDB = 0b01000000010010010000111111011011  little endian
//                Seeeeeeeemmmmmmmmmmmmmmmmmmmmmmm
//             = 11.0010010000111111011011  (sólo 25 dígitos en 32)
//
// Corolario:   La representación simbólica no tiene error
//              Y ocupa sólo 3 bytes ASCII   :-)
//
// En punto fijo: 2 de entero, 30 de decimales
//