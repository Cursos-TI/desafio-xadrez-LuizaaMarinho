#include <stdio.h>

// ────୨ৎ──── Funções Recursivas ────୨ৎ──── 

// Função recursiva para mover a Torre para a direita
void moverTorre(int casas) {
    if (casas <= 0) return ;
    printf("Direita\n");
    moverTorre(casas - 1);
    
}

// Função recursiva para mover o Bispo na diagonal "Cima Direita"
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
    
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
    
}



int main() {
    // ────୨ৎ────  Movimento da Torre ────୨ৎ──── 
    int casasTorre = 5;
    printf("⋅˚₊‧ 𐙚 ‧₊˚ ⋅ Movimento da Torre ⋅˚₊‧ 𐙚 ‧₊˚ ⋅\n");
    moverTorre(casasTorre);

    printf("\n");

    // ────୨ৎ────  Movimento do Bispo com recursão ────୨ৎ──── 
    int casasBispo = 5;
    printf("\n ⋅˚₊‧ 𐙚 ‧₊˚ ⋅Movimento do Bispo ⋅˚₊‧ 𐙚 ‧₊˚ ⋅\n");
    moverBispoRecursivo(casasBispo);

    printf("\n");

    // ────୨ৎ────  Movimento da Rainha ────୨ৎ──── 
    int casasRainha = 8;
    printf("\n ⋅˚₊‧ 𐙚 ‧₊˚ ⋅ Movimento da Rainha ⋅˚₊‧ 𐙚 ‧₊˚ ⋅\n");
    moverRainha(casasRainha);

    printf("\n");

    // ────୨ৎ────  Movimento do Cavalo  ────୨ৎ──── 
    printf("\n ⋅˚₊‧ 𐙚 ‧₊˚ ⋅ Movimento do Cavalo ⋅˚₊‧ 𐙚 ‧₊˚ ⋅\n");

    int movimentosCavalo = 1; // Um movimento em "L"
    int i, j; 

    for (i = 0; i < 1; i++) {
        

        
        for (j = 0; j < 2 ; j++) {
            printf("Cima\n");
                
            }
            
            printf("Direita\n");
        }

        
    

    printf("\n");

    // ────୨ৎ──── Movimento do Bispo com loops aninhados ────୨ৎ────
    printf("Movimento do Bispo (Loops Aninhados):\n");

    int linhasBispo = 5;  // Passos para cima
    int colunasBispo = 5; // Passos para direita

    for (i = 0; i < linhasBispo; i++) {
        for (j = 0; j < colunasBispo; j++) {
            if (i == j) {
                // Move na diagonal "Cima Direita" uma vez por iteração
                printf("Cima Direita\n");
                break;
            }
        }
    }

    return 0;
}

