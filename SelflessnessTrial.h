#ifndef SELFLESSNESSTRIAL_H
#define SELFLESSNESSTRIAL_H

#include "Trial.h"

class SelflessnessTrial : public Trial {
public:
    SelflessnessTrial();
    bool checkAnswer(string answer) override;
};

#endif
