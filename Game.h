#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <fstream>
#include <string>
#include "TrialList.h"
#include "Trial.h"
#include "EnduranceTrial.h"
#include "DiscernmentTrial.h"
#include "SelflessnessTrial.h"
#include "CourageTrial.h"
#include "KnowledgeTrial.h"
#include "EmotionsTrial.h"
#include "AuthenticityTrial.h"
#include "JusticeTrial.h"
#include "HarmonyTrial.h"

using namespace std;

class Game {
private:
    TrialList trials;
    TrialNode* currentTrial;
    bool gameComplete;
    string playerName;

public:
    Game();
    void displayStartScreen();
    void startNewGame();
    void loadGame();
    void saveGame();
    void playGame();
    Trial* getTrial(string scrollContents);
};

#endif
