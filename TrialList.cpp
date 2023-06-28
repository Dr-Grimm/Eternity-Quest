%%writefile TrialList.cpp

#include "TrialList.h"

TrialList::TrialList() {
    head = nullptr;
    tail = nullptr;
}

void TrialList::addTrial(string name, string contents) {
    TrialNode* newNode = new TrialNode(name, contents);

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

TrialNode* TrialList::getHead() {
    return head;
}
