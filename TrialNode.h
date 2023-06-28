#ifndef TRIALNODE_H
#define TRIALNODE_H

#include <string>
#include "Trial.h"

using namespace std;

class TrialNode {
public:
    string trialName;
    string scrollContents;
    TrialNode* next;

    TrialNode(string name, string contents);

    void displayTrial();
};

#endif
