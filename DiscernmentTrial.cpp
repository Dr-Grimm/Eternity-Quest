#include "DiscernmentTrial.h"

DiscernmentTrial::DiscernmentTrial() {
    riddle = "\n\nPassing through the gate, the mortal found itself in a labyrinth that defied reason. The walls \nshifted, and the path twisted and turned with no clear direction. The second trial awaited it \nwithin. The mortal had to separate illusion from reality and make wise choices to navigate the \nlabyrinth. Through its discerning mind, it unveiled the true path, emerging victoriously.\n\n__________________________________   \n| _____ |   | ___ | ___ ___ | |   | |\n| |   | |_| |__ | |_| __|____ | | | |\n| | | |_________|__ |______ |___|_| |\n| |_|   | _______ |______ |   | ____|\n| ___ | |____ | |______ | |_| |____ |\n|___|_|____ | |   ___ | |________ | |\n|   ________| | |__ | |______ | | | |\n| | | ________| | __|____ | | | __| |\n|_| |__ |   | __|__ | ____| | |_| __|\n|   ____| | |____ | |__ |   |__ |__ |\n| |_______|_______|___|___|___|_____|\n\nIn a labyrinth of illusions, what do you need to navigate through?";
}

bool DiscernmentTrial::checkAnswer(string answer) {
    return (answer == "discernment");
}
