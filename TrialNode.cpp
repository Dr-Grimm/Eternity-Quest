#include <iostream>
#include "TrialNode.h"

TrialNode::TrialNode(string name, string contents) {
    trialName = name;
    scrollContents = contents;
    next = nullptr;
}

void TrialNode::displayTrial() {
    std::cout << "Chapter " << trialName << std::endl;
    std::cout << "-----------------------------" << std::endl;
}
