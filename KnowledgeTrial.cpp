#include "KnowledgeTrial.h"

KnowledgeTrial::KnowledgeTrial() {
    riddle = "\n\nIn a tranquil grove, the mortal discovered the ancient Tree of Knowledge. Its branches rustled \nwith countless whispers of wisdom. The fifth trial was to seek wisdom and unlock the tree's \nsecrets. The mortal had to answer riddles posed by the tree, drawing from his vast well of \nknowledge. With each correct answer, the tree's whispers grew louder, sharing deeper insights.\n\n                          #\n                         ###\n                  #:. .:##*##:. .:#\n                   *####*###*####*\n              #:.   ####*###*####   .:#\n               #######**##*##**#######\n                  ##*#####*#####*##\n             #######*##*#####*##*#######\n                #####**#######**#####\n                         000\n                         000\n\nWhat empowers you to seek truth and understanding?";
}

bool KnowledgeTrial::checkAnswer(string answer) {
    return (answer == "knowledge");
}
