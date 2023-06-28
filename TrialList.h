#ifndef TRIALLIST_H
#define TRIALLIST_H

#include "TrialNode.h"

class TrialList {
private:
    TrialNode* head;
    TrialNode* tail;

public:
    TrialList();
    void addTrial(string name, string contents);
    TrialNode* getHead();
};

#endif
