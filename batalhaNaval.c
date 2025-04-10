#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
   
       int target = 2;
       int found = 0;
   
   
    // AGUA = 0; NAVIO CONE = 1; NAVIO CRUZ = 2; NAVIO OCTAEDRO = 3;
   
   
      int matriz[10][10] = { {0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, 
                             {1, 1, 1, 1, 0, 0, 0, 0, 0, 0}, 
                             {1, 1, 1, 1, 1, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 2, 0, 0, 0, 0, 0, 0, 0},
                             {2, 2, 2, 2, 2, 0, 0, 0, 0, 0}, 
                             {0, 0, 2, 0, 0, 0, 3, 0, 0, 0}, 
                             {0, 0, 0, 0, 0, 3, 3, 3, 0, 0},
                             {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}
                             };
   
   
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
           if (matriz[i][j] == target) {
               printf("Area %d afetada na posição (%d, %d)\n", target, i, j);
               found = 1;
               break;
           }
       }
       if (found) break;
   }
   
   if (!found) {
       printf("área  %d não afeada no tabuleiro\n", target);
   }
   
    
    }
   

