#ifndef JUSTICETRIAL_H
#define JUSTICETRIAL_H

#include "Trial.h"

class JusticeTrial : public Trial {
public:
    JusticeTrial();
    bool checkAnswer(string answer) override;
};

#endif
