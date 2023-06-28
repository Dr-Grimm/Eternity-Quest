#include "HarmonyTrial.h"

HarmonyTrial::HarmonyTrial() {
    riddle ="\n\nThe mortal arrived at the final trial—an ethereal realm resonating with harmonious melodies. \nThe ninth trial required him to create a symphony that embodied the essence of existence. \nThe mortal combined his knowledge, wisdom, and experiences, conducting a symphony that \ncaptured the beauty and interconnectedness of the universe. The realm embraced his creation, \nshowering him with celestial light.\n\n     ;\n     ;;\n     ;';.\n     ;  ;;\n     ;   ;;\n     ;    ;;\n     ;    ;;\n     ;   ;'\n     ;  '\n,;;;,;\n;;;;;;\n`;;;;'\n\nWhat creates unity and balance in the universe?";
}

bool HarmonyTrial::checkAnswer(string answer) {
    return (answer == "harmony");
}
