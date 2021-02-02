#include <iostream>
using namespace std;

char square[10] = {'0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9'};

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    
    else
        return -1;
    
}

void board()
{
    system("cls");
    cout << "\n\n\tTicTacToe\n\n";

    cout << "Player 1 (X) - Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "    |    |    " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "    |    |    " << endl << endl;

}

int checkwin();

void board();

int main()
{
        int player = 1,i,choice;

    char mark;
    do
    {
        board();
        player=(player%2)?1:2;
        
        cout << "Player " << player << "Enter A Number: ";
        cin >> choice;

        mark = (player == 1)? 'X' : 'O';




    } while ({/* condition */});
    
}