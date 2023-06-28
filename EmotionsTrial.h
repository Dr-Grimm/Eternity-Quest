#ifndef EMOTIONSTRIAL_H
#define EMOTIONSTRIAL_H

#include "Trial.h"

class EmotionsTrial : public Trial {
public:
    EmotionsTrial();
    bool checkAnswer(string answer) override;
};

#endif
