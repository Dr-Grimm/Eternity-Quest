#include "SelflessnessTrial.h"

SelflessnessTrial::SelflessnessTrial() {
    riddle = "\n\nWithin a mystical chamber stood the Chalice of Reflection, radiating an ethereal light. The third \ntrial demanded introspection and self-awareness. To prove its worth, it had to overcome its ego \nand put the needs of others before his own. With a humble heart, the mortal filled the chalice \nwith selfless acts, and its light intensified.\n\n  ***********************\n  ***********************\n   *********************\n   *********************\n    *******************\n     *****************\n      ***************\n       *************\n          *******\n          *******\n            ***\n          *******\n           *****\n            ***\n            ***\n            ***\n            ***\n          *******\n         *********\n\nWhat is the key to unlocking the true potential of humanity?";
}

bool SelflessnessTrial::checkAnswer(string answer) {
    return (answer == "selflessness");
}
