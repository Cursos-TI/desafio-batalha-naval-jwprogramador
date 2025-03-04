#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
   
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
    
    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // Posiciona um navio horizontalmente (tamanho 3) na linha 3, começando na coluna 2
    for (int j = 2; j < 5; j++) {
        tabuleiro[2][j] = 3;
    }
    
    // Posiciona um navio verticalmente (tamanho 3) na coluna 6, começando na linha 5
    for (int i = 5; i < 8; i++) {
        tabuleiro[i][6] = 3;
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Posicionamento do navio diagonal na começando da coluna 2 linha 6
    for (int j = 0; j < 3; j++){
        tabuleiro[5 + j][1 + j] = 3;
    }
    // Posicionamento do navio diagonal na começando da coluna 8 linha 5
    for (int i = 3; i < 6; i++) {
        tabuleiro[1 + i][4 + i] = 3;
    }


    // Imprimir tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int tabuleiroCone [5][5];
    int tabuleiroOctaedro [5][5];
    int tabuleiroCruz [5][5];
    char colunas1 [5] = {'A', 'B', 'C','D', 'E'};

    // Inicializa o tabuleiro Cone Octaedro e Cruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabuleiroCone[i][j] = 0;
            tabuleiroOctaedro[i][j] = 0;
            tabuleiroCruz[i][j] = 0;
        }
    }


    // declara o Octoadro
    int coneX = 1, coneY = 2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 1 && (j == 1 || j == 3)) || (i == 3 && (j == 1 || j == 3)) || (i == 2) || (j == 2)) {
            tabuleiroOctaedro[i][j] = 5;
            }
            
        }
    }


    // Imprimir tabuleiro Octoacro
    printf("TABULEIRO BATALHA NAVAL Octoadro\n");
    printf("   ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", colunas1[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 5; j++) {
         printf("%d ", tabuleiroOctaedro[i][j]);
    }
    printf("\n");
}


// declara Cone
for (int i = 1; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
        if ((i == 1 && j == 2) || (i == 2 && (j == 1 || j == 2 || j == 3)) || (i == 3)) {
        tabuleiroCone[i][j] = 5;
        }
        
    }
}


// Imprimir tabuleiro CONE
printf("TABULEIRO BATALHA NAVAL CONE\n");
printf("   ");
for (int i = 0; i < 5; i++) {
    printf("%c ", colunas1[i]);
}
printf("\n");

for (int i = 0; i < 5; i++) {
    printf("%2d ", i + 1);
    for (int j = 0; j < 5; j++) {
     printf("%d ", tabuleiroCone[i][j]);
}
printf("\n");
}






    return 0;
}
