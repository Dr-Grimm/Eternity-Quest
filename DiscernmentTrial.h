#ifndef DISCERNMENTTRIAL_H
#define DISCERNMENTTRIAL_H

#include "Trial.h"

class DiscernmentTrial : public Trial {
public:
    DiscernmentTrial();
    bool checkAnswer(string answer) override;
};

#endif
