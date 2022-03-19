#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define TAM 5

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

int main() {

    srand(time(NULL));

    int lin, col, me[TAM][TAM], cont, pp, pc, jogo, flag, esc;
    char tab[TAM][TAM];

    pp = 0;
    pc = 0;
    flag = 0;

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            tab[lin][col] = '#';
            me[lin][col] = 6;
        }
    }

    
    for(cont = 0; cont < 10; cont++)
    {
        lin = rand() % 5;
        col = rand() % 5;
        if(me[lin][col] == 6)
        {
            me[lin][col] = 0;
        }
        else
        {
            cont--;
        }
    }
    for(cont = 0; cont < 8; cont++)
    {
        lin = rand() % 5;
        col = rand() % 5;
        if(me[lin][col] == 6)
        {
            me[lin][col] = 1;
        }
        else
        {
            cont--;
        }
    }
    for(cont = 0; cont < 5; cont++)
    {
        lin = rand() % 5;
        col = rand() % 5;
        if(me[lin][col] == 6)
        {
            me[lin][col] = 3;
        }
        else
        {
            cont--;
        }
    }
    for(cont = 0; cont < 2; cont++)
    {
        lin = rand() % 5;
        col = rand() % 5;
        if(me[lin][col] == 6)
        {
            me[lin][col] = 5;
        }
        else
        {
            cont--;
        }
    }

    system("cls");

    for(jogo = 0; jogo <= 8; jogo++)
    {

        printf(BLU "\t-----------------------------------");
        printf("\n\t----------"RESET CYN " BATALHA NAVAL " RESET BLU "----------");
        printf("\n\t-----------------------------------" RESET);

        printf("\n\t\t ");

        for(lin = 0; lin < TAM; lin++)
        {
            printf(CYN "| "RESET BLU "%i " RESET, lin);
            if(lin == 4)
            {
                printf(CYN "|" RESET);
            }
        }


        for(lin = 0; lin < TAM; lin++)
        {
            printf("\n\t     ");

            printf(CYN "|" RESET BLU " %i " RESET, lin);

            for(col = 0; col < TAM; col++)
            {
                if(tab[lin][col] == '#')
                {
                    printf(CYN "|" RESET " %c ", tab[lin][col]);
                }
                else if(me[lin][col] == 6)
                {
                    printf(CYN "|" RESET YEL " %i " RESET, tab[lin][col]);
                }

                else if(me[lin][col] == 7)
                {
                    printf(CYN "|" RESET GRN " %i " RESET, tab[lin][col]);
                }

                if(col == 4)
                {
                    printf(CYN "|" RESET);
                }
            }
        }

        printf(BLU "\n\t-----------------------------------" RESET);
        if(pp > 9 && pc > 9)
        {
            printf(BLU "\n\t----" RESET YEL " Player: %i"RESET BLU " | " RESET GRN "Computer: %i "RESET BLU "----" RESET, pp, pc);    
        }
        else if(pp > 9 || pc > 9)
        {
            printf(BLU "\n\t----" RESET YEL " Player: %i " RESET BLU "|" RESET GRN " Computer: %i" RESET BLU " -----" RESET, pp, pc);
        }
        else
        {
            printf(BLU "\n\t-----" RESET YEL " Player: %i " RESET BLU "|" RESET GRN " Computer: %i " RESET BLU "-----" RESET , pp, pc);
        }
        printf(BLU "\n\t-----------------------------------" RESET);
        
        if(jogo < 8)
        {
            if(jogo % 2 == 0)
            {
                do{
                    printf(BLU "\n\t[" RESET YEL "PLayer" RESET BLU "]:" RESET);
                    scanf("%i %i", &lin, &col);
            
                } while(tab[lin][col] != '#');

                pp = pp + me[lin][col];
                tab[lin][col] = me[lin][col];
                me[lin][col] = 6;
            }

            else
            {    
                do{
                    lin = rand() % 5;
                    col = rand() % 5; 
                } while(tab[lin][col] != '#');

                printf(BLU "\n\t[" RESET GRN "Computer" RESET BLU "]:"RESET" %i %i", lin, col);
                Sleep(2000);

                pc = pc + me[lin][col];
                tab[lin][col] = me[lin][col];
                me[lin][col] = 7;
            }

            system("cls");
        }
        else
        {
            if(pp > pc)
            {
                printf(BLU "\n\t----------" RESET YEL " PLAYER VENCEU " RESET BLU "----------");
                printf("\n\t-----------------------------------" RESET);
            }
            else if(pp < pc)
            {
                printf(BLU "\n\t---------" RESET GRN " COMPUTER VENCEU " RESET BLU "---------");
                printf("\n\t-----------------------------------" RESET);
            }
            else if(pp == pc)
            {
                printf(BLU "\n\t-------------" RESET WHT " EMPATE " RESET BLU "--------------");
                printf("\n\t-----------------------------------" RESET);
            }
        }
    }

    printf("\n\n");
    return 0;
}