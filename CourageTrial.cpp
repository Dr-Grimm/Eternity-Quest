#include "CourageTrial.h"

CourageTrial::CourageTrial() {
    riddle = "\n\nthe mortal found himself in a desolate realm shrouded in darkness. The fourth trial awaited \nhim—a confrontation with his deepest fears and doubts. The mortal had to gather his inner \nstrength, face his fears head-on, and push through the oppressive shadows. With unwavering \ncourage, he pierced the darkness, and light began to penetrate the realm.\n\n                      **********\n                      **********\n                     ************\n                       ********\n                         ****\n                         ****\n                **********************\n              ***** ************** *****\n             *****  ****$$$$$*****  *****\n             *****  ***$$***$$****  *****\n             ****   *******$$*****   ****\n             ***     *****$$*****     ***\n              ***    ****$$******    ***\n                ***   **********    ***\n                 *** ****$$****** ***\n                  *******************\n                  *******************\n\nWhat quality allows you to face your fears and overcome challenges?";
}

bool CourageTrial::checkAnswer(string answer) {
    return (answer == "courage");
}
