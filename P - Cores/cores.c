#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

int main() {
    
    printf( YEL "starting to sleep...\n" RESET);
    Sleep(3000); // Sleep three seconds
    printf(GRN "sleep ended\n" RESET);

    printf(RED "\nRED" RESET);
    printf(GRN "\nGRN" RESET);
    printf(YEL "\nYEL" RESET);
    printf(BLU "\nBLU" RESET);
    printf(MAG "\nMAG" RESET);
    printf(CYN "\nCYN" RESET);
    printf(WHT "\nWHT" RESET);
}