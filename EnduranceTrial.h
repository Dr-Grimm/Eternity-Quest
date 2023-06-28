#ifndef ENDURANCETRIAL_H
#define ENDURANCETRIAL_H

#include "Trial.h"

class EnduranceTrial : public Trial {
public:
    EnduranceTrial();
    bool checkAnswer(string answer) override;
};

#endif
