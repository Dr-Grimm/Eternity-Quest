#ifndef HARMONYTRIAL_H
#define HARMONYTRIAL_H

#include "Trial.h"

class HarmonyTrial : public Trial {
public:
    HarmonyTrial();
    bool checkAnswer(string answer) override;
};

#endif
