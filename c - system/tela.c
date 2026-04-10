#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void loading() {

    printf("\n\n                             ATLAS WEAR\n");

    for(int i = 0; i <= 50; i++) {

        int porcentagem = i * 2;

        // Status muda aqui 👇
        if (i < 50) {
            printf("                            Carregando");
        } else {
            printf("                               Pronto");
            printf(" ");
        }

        printf("\n      [");

        for(int j = 0; j < i; j++) {
            printf("/");
        }

        for(int j = i; j < 50; j++) {
            printf(" ");
        }

        printf("] %d%%", porcentagem);

        fflush(stdout);

        #ifdef _WIN32
            Sleep(50);
        #else
            usleep(50000);
        #endif

        // Volta o cursor pra cima (pra sobrescrever)
        printf("\033[F"); // ANSI: sobe 1 linha
    }

    printf("\n\n");

}