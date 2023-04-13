#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);
}

void drawBoard(char *spaces)
{
    std::cout << "     |     |     |" << '\n';
    std::cout << "   " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " | " << '\n';
    std::cout << "_____|_____|_____|" << '\n';
}
void playerMove(char *spaces, char player)
{
}
void computerMove(char *spaces, char computer)
{
}
bool checkWinner(char *spaces, char player, char computer)
{
}
bool checkTie(char *spaces)
{
}