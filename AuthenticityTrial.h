#ifndef AUTHENTICITYTRIAL_H
#define AUTHENTICITYTRIAL_H

#include "Trial.h"

class AuthenticityTrial : public Trial {
public:
    AuthenticityTrial();
    bool checkAnswer(string answer) override;
};

#endif
