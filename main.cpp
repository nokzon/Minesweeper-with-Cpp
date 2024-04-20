#include <iostream>
#include <cstring>
#include <ctime>
#include <vector>
#include <cstdio>
using namespace std;

void chooseLevelDifficulty() {

    int level;
    int side,
        mines;

    do {

        printf("Enter the difficulty level:\n");
        printf("Press 1: EASY [8 * 8 Cells, 10 Mines]\n");
        printf("Press 2: INTERMEDIATE [16 * 16 Cells, 40 Mines]\n");
        printf("Press 3: HARD [24 * 24 Cells, 99 Mines]\n");

        scanf("%d", &level); //storing standard input into the "level" variable, %d lets function know what data type to expect
    } while (level != 1 && level != 2 && level != 3);


    if (level == 1) {
        side = 9;
        mines = 10;
    } 
    else if (level == 2) {
        side = 16;
        mines = 40;
    }
    else if (level == 3) {
        side = 24;
        mines = 99;
    } 

}

int main() {

    chooseLevelDifficulty();
    return 0;
}