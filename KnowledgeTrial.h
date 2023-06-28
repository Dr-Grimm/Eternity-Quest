#ifndef KNOWLEDGETRIAL_H
#define KNOWLEDGETRIAL_H

#include "Trial.h"

class KnowledgeTrial : public Trial {
public:
    KnowledgeTrial();
    bool checkAnswer(string answer) override;
};

#endif
