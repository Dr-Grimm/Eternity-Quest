#include "JusticeTrial.h"

JusticeTrial::JusticeTrial() {
    riddle = "\n\nIn a grand hall, the mortal faced a pair of scales held by a formidable figure—the embodiment of \njustice. The eighth trial called for fairness and integrity in the face of temptation. He had to make \nchoices that upheld justice, resisting the allure of power or personal gain. With his unwavering \nintegrity, the scales tipped in his favor, and justice was served.\n\n             ggg                    gg                    ggg\n             d8P888b               d88b               d888Y8b\n             |    YY8888888PP-----888888-----YY8888888PP    |\n             |                     WWWW                     |\n             |                     dMMb                     |\n             |                    I8888I                    |\n             |                     Y88P                     |\n             |                      YP                      |\n             |                      88                      |\n     Y888888888888888P            888888              Y888888888888888P\n       8888888888888               8888               8888888888888\n                                  i8888i\n                                  888888\n                                 I888888I\n                            88888888888888888\n                         8888888Y888888888888888P\n\nWhat ensures fairness and equality in your actions and decisions?";
}

bool JusticeTrial::checkAnswer(string answer) {
    return (answer == "integrity");
}
