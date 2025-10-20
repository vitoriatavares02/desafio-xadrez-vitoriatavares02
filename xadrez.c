#include <stdio.h>

#define BISPO_NOVATO 5
#define TORRE_NOVATO 5
#define RAINHA_NOVATO 8

#define BISPO_MESTRE 5
#define TORRE_MESTRE 5
#define RAINHA_MESTRE 8

void bispo_recursivo(int passos){
    if(passos<=0) return;
    for(int i=0;i<1;i++){
        for(int j=0;j<1;j++){
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    bispo_recursivo(passos-1);
}

void torre_recursiva(int passos){
    if(passos<=0) return;
    printf("Direita\n");
    torre_recursiva(passos-1);
}

void rainha_recursiva(int passos){
    if(passos<=0) return;
    printf("Esquerda\n");
    rainha_recursiva(passos-1);
}

void cavalo_mestre(){
    int moved=0;
    for(int a=0,b=0;a<3 && !moved;a++,b++){
        for(int c=0;c<3;c++){
            if(a==2 && c==1){
                int up=0;
                while(up<2){
                    printf("Cima\n");
                    up++;
                    if(up==1) continue;
                }
                printf("Direita\n");
                moved=1;
                break;
            } else {
                continue;
            }
        }
    }
    if(!moved){
        printf("Cima\nCima\nDireita\n");
    }
}

int main(void){
    printf("== Nível Novato ==\n");
    printf("-- Bispo (5 casas, diagonal superior direita) --\n");
    for(int i=0;i<BISPO_NOVATO;i++){
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("-- Torre (5 casas para a direita) --\n");
    for(int i=0;i<TORRE_NOVATO;i++){
        printf("Direita\n");
    }
    printf("-- Rainha (8 casas para a esquerda) --\n");
    for(int i=0;i<RAINHA_NOVATO;i++){
        printf("Esquerda\n");
    }

    printf("\n== Nível Aventureiro ==\n");
    printf("-- Cavalo (L para baixo à esquerda) --\n");
    for(int h=0;h<1;h++){
        for(int j=0;j<1;j++){
            int v=0;
            while(v<2){
                printf("Baixo\n");
                v++;
            }
            printf("Esquerda\n");
        }
    }

    printf("\n== Nível Mestre ==\n");
    printf("-- Bispo (recursivo, 5 casas diagonal direita para cima) --\n");
    bispo_recursivo(BISPO_MESTRE);

    printf("-- Torre (recursiva, 5 casas para a direita) --\n");
    torre_recursiva(TORRE_MESTRE);

    printf("-- Rainha (recursiva, 8 casas para a esquerda) --\n");
    rainha_recursiva(RAINHA_MESTRE);

    printf("-- Cavalo (1 vez em L para cima à direita) --\n");
    cavalo_mestre();

    return 0;
}
