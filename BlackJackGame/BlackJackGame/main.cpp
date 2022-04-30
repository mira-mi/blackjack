#include <cstdio>
#include "Blackjack.h"
#include <iostream>

using namespace std;

int main()
{
    int exitGame = 3;

    int i = 1;

    do {
        do
        {
            Blackjack black_jack;
            black_jack.playGame();
            cout << "\n Would you like to play again? (Press 1 for yes, and 2 for no)\n";
            cin >> exitGame;

        } while (exitGame == 3);

    } while (i <= 100);

        cout << "\n Thanks so much for playing my game! \n";
        system("pause");
        return 0;

    //printf("hello from %s!\n", "BlackJackGame");
    //return 0;
}
//codereviewer helped me build a blackjack game as beginner because I had no idea how to start
//c++ is not my strong suit at all but I did have fun making this game for class
//learned the loop from programiz.com