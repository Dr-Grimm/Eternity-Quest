#include "Game.h"

Game::Game() {
    trials.addTrial("2: The Guardian of the Gate", "en_du_ran_e");
    trials.addTrial("3: The Labyrinth of Illusions", "dis_er_men_");
    trials.addTrial("4: The Chalice of Reflection", "sel_les_n_ss");
    trials.addTrial("5: The Veil of Shadows", "co_rag_");
    trials.addTrial("6: The Tree of Knowledge", "_now_le_ge");
    trials.addTrial("7: The Maze of Emotions", "e_oti_ns");
    trials.addTrial("8: The Mirror of Truth", "au_hent_c_ty");
    trials.addTrial("9: The Scales of Justice", "in_eg_it_");
    trials.addTrial("10: The Song of Creation", "har_on_");
    currentTrial = trials.getHead();
    gameComplete = false;
}

void Game::displayStartScreen() {
    cout << "Welcome to the Quest for Eternity!" << endl;
    cout<<"█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█"<<endl;
    cout<<"█░░╦─╦╔╗╦─╔╗╔╗╔╦╗╔╗░░█"<<endl;
    cout<<"█░░║║║╠─║─║─║║║║║╠─░░█"<<endl;
    cout<<"█░░╚╩╝╚╝╚╝╚╝╚╝╩─╩╚╝░░█"<<endl;
    cout<<"█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█"<<endl;
    cout << "------------------------------" << endl;
    cout << "1. Start a New Game" << endl;
    cout << "2. Load Game" << endl;
    cout << "3. Exit Game" << endl;
    cout << "------------------------------" << endl;
}

void Game::startNewGame() {
    cout << "Enter your name: ";
    cin >> playerName;
    cout << "Hello, " << playerName << "! Let the quest begin!" << endl << "------------------------------" << endl;
    cout << "Chapter 1: The Call to Adventure" << endl << "------------------------------" << endl;
    cout << "        ▄█▀▄ " << endl;
    cout << "      ▄██▀▀▀▀▄ " << endl;
    cout << "    ▄███▀▀▀▀▀▀▀▄ " << endl;
    cout << "  ▄████▀▀▀▀▀▀▀▀▀▀▄ " << endl;
    cout << "▄█████▀▀▀▀▀▀▀▀▀▀▀▀▀▄ " << endl;

    cout << "\nIn a humble village nestled at the foot of a majestic mountain range, there lived a mortal named " << playerName << "." << endl;
    cout << "The mortal possessed a rare gift—a scroll of wisdom that provided glimpses of knowledge from across the ages." << endl;
    cout << "One fateful day, " << playerName << " was pondering through the mysteries of the universe, with an objective to find the key to reach eternity." << endl;
    cout << "Suddenly, a vision appeared before " << playerName << ", beckoning to embark on a mystical quest." << endl << "------------------------------" << endl;
    playGame();
}

void Game::loadGame() {
    ifstream saveFile("save_game.txt");
    if (saveFile) {
        saveFile >> playerName;
        saveFile >> gameComplete;
        cout << "Welcome back, " << playerName << "! Continue your quest!" << endl;

        if (gameComplete) {
            cout << "Having completed the ten trials, " << playerName << " stood before the ultimate gateway—the Portal of Eternity. \nAs the portal opened, he was bathed in a radiant glow, his mortal limitations fading \naway. " << playerName << " transformed into an eternal being, connected to the essence of the universe. \n"<< playerName << "'s newfound power brought him immense responsibility. He became a guiding force, \nspreading wisdom, harmony, and enlightenment throughout the world. With eternity at his side, \nhe embarked on a lifelong mission to nurture the potential within every soul, fostering a world of \npeace and understanding. The trials had not only granted the mortal eternal existence but had \nalso bestowed upon him the purpose to help others find their own path to eternity.\n\nCONGRATULATIONS! You have completed the quest for eternity!" << endl;
        }
        else {
            playGame();
        }

        saveFile.close();
    }
    else {
        cout << "No saved game found. Starting a new game instead." << endl;
        startNewGame();
    }
}

void Game::saveGame() {
    ofstream saveFile("save_game.txt");
    if (saveFile) {
        saveFile << playerName << endl;
        saveFile << gameComplete << endl;
        cout << "Game saved successfully." << endl << "------------------------------" << endl;

        saveFile.close();
    }
    else {
        cout << "Error: Unable to save the game." << endl;
    }
}

void Game::playGame() {
    while (!gameComplete && currentTrial != nullptr) {
        currentTrial->displayTrial();

        Trial* current = getTrial(currentTrial->scrollContents);

        if (current != nullptr) {
            cout << "Embark upon the below tale, unravel the riddle's veil" << current->getRiddle() << endl;

            string answer;
            cout << "Enter your answer (or type 'hint' to use the Scroll of Wisdom): ";
            cin >> answer;

            if (answer == "hint") {
                cout << "------------------------------" << endl << "Scroll of Wisdom (hint): " << currentTrial->scrollContents << endl << "------------------------------" << endl;
                continue;
            }

            if (current->checkAnswer(answer)) {
                cout << "Correct answer! Proceeding to the next trial." << endl << "------------------------------" << endl;
                currentTrial = currentTrial->next;

                if (currentTrial == nullptr) {
                    gameComplete = true;
                    cout << "Congratulations! You have completed the quest for eternity! \n\n███████████████████████████████████████\n█─▄─▄─█─█─█▄─▄▄─███▄─▄▄─█▄─▀█▄─▄█▄─▄▄▀█\n███─███─▄─██─▄█▀████─▄█▀██─█▄▀─███─██─█\n▀▀▄▄▄▀▀▄▀▄▀▄▄▄▄▄▀▀▀▄▄▄▄▄▀▄▄▄▀▀▄▄▀▄▄▄▄▀▀" << endl << "------------------------------" << endl;
                }
                else {
                    saveGame();
                }
            }
            else {
                cout << "Incorrect answer. The journey ends here." << endl;
                break;
            }
        }
    }
}

Trial* Game::getTrial(string scrollContents) {
    if (scrollContents == "en_du_ran_e") {
        return new EnduranceTrial();
    }
    else if (scrollContents == "dis_er_men_") {
        return new DiscernmentTrial();
    }
    else if (scrollContents == "sel_les_n_ss") {
        return new SelflessnessTrial();
    }
    else if (scrollContents == "co_rag_") {
        return new CourageTrial();
    }
    else if (scrollContents == "_now_le_ge") {
        return new KnowledgeTrial();
    }
    else if (scrollContents == "e_oti_ns") {
        return new EmotionsTrial();
    }
    else if (scrollContents == "au_hent_c_ty") {
        return new AuthenticityTrial();
    }
    else if (scrollContents == "in_eg_it_") {
        return new JusticeTrial();
    }
    else if (scrollContents == "har_on_") {
        return new HarmonyTrial();
    }

    return nullptr;
}
