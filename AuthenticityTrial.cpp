#include "AuthenticityTrial.h"

AuthenticityTrial::AuthenticityTrial() {
    riddle = "\n\nA majestic mirror awaited the mortal in an enchanted chamber. The seventh trial challenged him \nto confront his own reflection and accept the truth within. The mortal had to strip away masks \nand illusions, embracing his true self with unwavering authenticity. As he stood before the mirror, \nit revealed the depths of his character, reflecting his innermost truth.\n\n*********************\n* ***************** *\n* *               * *\n* *   **   **     * *\n* *  **   **      * *\n* * **   **   **  * *\n* *    **    **   * *\n* *   **    **    * *\n* *        **  ** * *\n* *               * *\n* *               * *\n* ***************** *\n*********************\n\nWhat quality allows you to be true to yourself and others?";
}

bool AuthenticityTrial::checkAnswer(string answer) {
    return (answer == "authenticity");
}
