// Archivo de traducción de seudocódigo a C++
#include "program1.h"
/**
*    Enunciado: You come across an experimental new kind of memory stored on an infinite two-dimensional grid.Each square on the grid is allocated in a 
                spiral pattern starting at a location marked 1 and then counting up while spiraling outward. 
                For example, the first few squares are allocated like this:

17  16  15  14  13
18   5   4   3  12
19   6   1   2  11
20   7   8   9  10
21  22  23---> ...
                While this is very space-efficient (no squares are skipped), requested data must be carried back to square 1 (the location of the only 
                access port for this memory system) by programs that can only move up, down, left, or right. They always take the shortest path: the 
                Manhattan Distance between the location of the data and square 1.
                For example:
Data from square 1 is carried 0 steps, since it's at the access port.
Data from square 12 is carried 3 steps, such as: down, left, left.
Data from square 23 is carried only 2 steps: up twice.
Data from square 1024 must be carried 31 steps.
How many steps are required to carry the data from the square identified in your puzzle input all the way to the access port?

Your puzzle input is 289326.
*/
principal                                                       // Unidad de programa principal
largo f = 0
      ,c = 0
      ,cont = 1
      ,vert = -1
      ,hori = 1
      ,dir = 1
      ,vFinal;
limpiar;                                                        // Limpia la pantalla.
leerM(vFinal,"Valor final:");
mientras(cont < vFinal)
    segun(dir)
        caso 1 : c++;
            si(c >= hori) entonces
                hori = (-hori);
                dir++;
                finSi
        otroCaso 2 : f--;
            si(f <= vert) entonces
                vert = (-vert);
                dir++;
                finSi
        otroCaso 3 : c--;
            si(c <= hori) entonces
                hori = (-hori)+1;
                dir++;
                finSi
        otroCaso 4 : f++;
            si(f >= vert) entonces
                vert = (-vert) - 1;
                dir = 1;
                finSi
        finSegun
    cont++;
//    mostrar << cont << ":(" << f << "," << c << ")" << salto;
    finMientras 
mostrar << cont << ":(" << f << "," << c << "), Manhattan:" << (abs(f)+abs(c)) << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal.


