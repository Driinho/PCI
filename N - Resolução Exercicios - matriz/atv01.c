#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define COR_VERDE   printf("\33[32m");
#define COR_LARANJA printf("\33[33m");
#define COR_ROXA    printf("\33[35m");
#define COR_BRANCO  printf("\33[37m");

int main() {

    srand(time(NULL));

    int matriz[TAM][TAM], col, lin, m_dia, m_aba, m_aci;

    m_dia = 0;
    m_aba = 0;
    m_aci = 0;

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            matriz[lin][col] = 10 + rand() % 41;
        }
    }

    printf("Matriz aleatoria: ");

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            if(lin == col)
            {
                if(matriz[lin][col] > m_dia)
                {
                    m_dia = matriz[lin][col];
                }
            }
            if(lin < col)
            {
                if(matriz[lin][col] > m_aci)
                {
                    m_aci = matriz[lin][col];
                }
            }
            if(lin > col)
            {
                if(matriz[lin][col] > m_aba)
                {
                    m_aba = matriz[lin][col];
                }
            }
        }
    }

    for(lin = 0; lin < TAM; lin++)
    {
        printf("\n\t");
        for(col = 0; col < TAM; col++)
        {
            if(m_aci == matriz[lin][col])
            {
                COR_ROXA;
                printf("%i ", m_aci);
                COR_BRANCO;
            }
            else if(m_dia == matriz[lin][col])
            {
                COR_LARANJA;
                printf("%i ", m_dia);
                COR_BRANCO;
            }
            else if(m_aba == matriz[lin][col])
            {
                COR_VERDE;
                printf("%i ", m_aba);
                COR_BRANCO;
            }
            else if(matriz[lin][col] != m_dia && matriz[lin][col] != m_aba && matriz[lin][col] != m_aci)
            {
                printf("%i ", matriz[lin][col]);
            }
        }
    }

    printf("\n\n");
    return 0;    
}