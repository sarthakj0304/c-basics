#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
char game[5][5] = {
    {'1', '|', '2', '|', '3'},
    {'-', ' ', '-', ' ', '-'},
    {'4', '|', '5', '|', '6'},
    {'-', ' ', '-', ' ', '-'},
    {'7', '|', '8', '|', '9'},
};
void display()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << game[i][j];
        }
        cout << endl;
    }
}
char checkWin()
{
    if (game[0][0] == game[2][0] && game[2][0] == game[4][0])
        return game[2][0];
    if (game[0][0] == game[2][2] && game[2][2] == game[4][4])
        return game[2][2];
    if (game[0][0] == game[0][2] && game[0][2] == game[0][4])
        return game[0][2];
    if (game[0][2] == game[2][2] && game[2][2] == game[4][2])
        return game[2][2];
    if (game[0][4] == game[2][2] && game[2][2] == game[4][0])
        return game[2][2];
    if (game[0][4] == game[2][4] && game[2][4] == game[4][4])
        return game[2][4];
    if (game[2][0] == game[2][2] && game[2][2] == game[2][4])
        return game[2][2];
    if (game[4][0] == game[4][2] && game[4][2] == game[4][4])
        return game[4][2];
    return '9';
}
void input(char a[5][5], int data, char c)
{
    if (data == 1)
        a[0][0] = c;
    if (data == 2)
        a[0][2] = c;
    if (data == 3)
        a[0][4] = c;
    if (data == 4)
        a[2][0] = c;
    if (data == 5)
        a[2][2] = c;
    if (data == 6)
        a[2][4] = c;
    if (data == 7)
        a[4][0] = c;
    if (data == 8)
        a[4][2] = c;
    if (data == 9)
        a[4][4] = c;
}
void play()
{
    char r;
    int player1, player2;
    int count = 0;
    cout << "Enter number from 1 to 9 to mark that sqaure for you" << endl;
    while (true)
    {
        cout << "Player 1 chance" << endl;
        cin >> player1;            // data is the cell choice from 1 to 9 and player refers to plater number
        input(game, player1, '*'); // updated the game;
        display();
        count += 1;
        r = checkWin();
        if (r == '*')
        {
            cout << "Player 1 Won!!!!!!" << endl;
            break;
        }
        if (count == 9)
            break;
        cout << "Player 2 chance" << endl;
        cin >> player2;            // data is the cell choice from 1 to 9 and player refers to plater number
        input(game, player2, 'O'); // updated the game;
        display();
        count += 1;
        r = checkWin();
        if (r == 'O')
        {
            cout << "Player 2 Won!!!!!!" << endl;
            break;
        }
        if (count == 9)
            break;
    }
    if (r == '9')
        cout << "Game Tied" << endl;
}
int main()
{
    // cout<<"hey bhagwan chal jae bas please"<<endl;
    cout << "LET THE GAME BEGIN!!!!!!" << endl;
    // make();
    display();
    play();
    cout << "THANKS FOR PLAYING!!!!!!!" << endl;
    return 0;
}