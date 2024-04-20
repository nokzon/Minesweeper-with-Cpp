#include <iostream>
#include <cstring>
#include <ctime>
#include <vector>
#include <cstdio>
using namespace std;

void chooseDifficulty() {
    cout << "Enter your difficulty level:" << endl;
    cout << "1: EASY [8 * 8 grid, 10 mines]" << endl;
    cout << "2: INTERMEDIATE [16 * 16 grid, 40 mines]" << endl;

}

int main() {
    chooseDifficulty;
    cout << "main" << endl;
    return 0;
}