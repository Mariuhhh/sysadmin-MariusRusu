#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    size_t tamany_bloc = 100 * 1024 * 1024; // Blocs de 100 MB
    long long iteracio = 0;
    
    printf("Iniciant reserva de memòria...\n");
    
    while(1) {
        void *bloc_memoria = malloc(tamany_bloc);
        
        if (bloc_memoria == NULL) {
            printf("Desbordament complet! Memòria RAM i Swap esgotades.\n");
            break;
        }
        
        // Forçar l'escriptura per assegurar que el SO reserva i pagina l'espai
        memset(bloc_memoria, 0, tamany_bloc);
        iteracio++;
        printf("Memòria reservada: %lld MB\n", iteracio * 100);
    }
    
    return 0;
}
