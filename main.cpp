#include <iostream>
#include <cstring>
#include <ctime>
#include <vector>
#include <cstdio>
using namespace std;

// Define constraints
#define EASY 0
#define INTERMEDIATE 1
#define HARD 2
#define MAXSIDE 25
#define MAXMINES 99
#define MOVESIZE 526 // (25 * 25 - 99)

int SIDE,
    MINES;

class Board {

public:
    // Constuctor
    Board() {
        SIDE = 0;
        MINES = 0;
    }

    // Choose game difficulty
    void chooseLevelDifficulty() {
        int level;

        do {
            printf("Enter the difficulty level:\n");
            printf("Press 1: EASY [8 * 8 Cells, 10 Mines]\n");
            printf("Press 2: INTERMEDIATE [16 * 16 Cells, 40 Mines]\n");
            printf("Press 3: HARD [24 * 24 Cells, 99 Mines]\n");

            scanf("%d", &level); //storing standard input into the "level" variable, %d lets function know what data type to expect
        } while (level != 1 && level != 2 && level != 3);


        if (level == EASY) {
            SIDE = 9;
            MINES = 10;
        } 
        else if (level == INTERMEDIATE) {
            SIDE = 16;
            MINES = 40;
        }
        else if (level == HARD) {
            SIDE = 24;
            MINES = 99;
        } 

    }

    // A Function to place the mines randomly on the board
    void placeMines(int mines[][2])
    {
        bool mark[MAXSIDE * MAXSIDE];

        memset(mark, false, sizeof(mark));

        // Continue until all random mines have been created.
        for (int i = 0; i < MINES;) {
            int random = rand() % (SIDE * SIDE);
            int x = random / SIDE;
            int y = random % SIDE;

            // Add the mine if no mine is placed at this position on the board
            if (mark[random] == false) {
                // Row Index of the Mine
                mines[i][0] = x;
                // Column Index of the Mine
                mines[i][1] = y;

                // Place the mine
                board[mines[i][0]][mines[i][1]] = '*';
                mark[random] = true;
                i++;
            }
        }
        return;
    }

};

int main() {
    // Creating objects of the Board class
    Board myBoard, readBoard;

    // Call the chooseLevelDifficulty method
    myBoard.chooseLevelDifficulty();

     std::cout << "RAND_MAX: " << RAND_MAX << std::endl;
    return 0;
}