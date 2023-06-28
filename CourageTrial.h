#ifndef COURAGETRIAL_H
#define COURAGETRIAL_H

#include "Trial.h"

class CourageTrial : public Trial {
public:
    CourageTrial();
    bool checkAnswer(string answer) override;
};

#endif
