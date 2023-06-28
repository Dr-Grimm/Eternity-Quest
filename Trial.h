#ifndef TRIAL_H
#define TRIAL_H

#include <string>

using namespace std;

class Trial {
protected:
    string riddle;

public:
    virtual bool checkAnswer(string answer) = 0;

    string getRiddle() {
        return riddle;
    }
};

#endif
