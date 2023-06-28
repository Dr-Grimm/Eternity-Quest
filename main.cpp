#include "Game.h"

int main() {
    Game game;
    int choice;

    game.displayStartScreen();

    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                game.startNewGame();
                break;
            case 2:
                game.loadGame();
                break;
            case 3:
                cout << "Exiting the game. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}
