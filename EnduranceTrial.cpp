#include<iostream>
#include "EnduranceTrial.h"

EnduranceTrial::EnduranceTrial() {
    riddle ="\n\nThe mortal's first trial was to reach the Gate of Eternity, guarded by a formidable entity known as \nZephyrus. Zephyrus challenged it to endure the elements—fierce winds, scorching heat, and \nbiting cold—while maintaining unwavering determination. Overcoming physical and mental \nhardships, the mortal proved its endurance, and the Gate of Eternity opened before it.\n\n                             {} {}\n                           ! II II !  \n                      ! ___I_II II_I__  !\n                      I|___|_|| ||_|____|I\n                     ! |   | || || |    | !       \n                     I |   | || || |    | I        \n                  ! |  |   | || || |    | | !       \n          __      I|   |   | || || |    |  |I      __ \n         }  {  ! | |   |   | || || |    |  | | !  }  {\n        {____} I|  |   |   | || || |    |  |  |I {____}\n  _!__!__|= |=| |  |   |   | || || |    |  |  | |=|  |__!__!_\n _I__I__|  |||__|__|___|___|_|| ||_|____|__|__|__|||- |__I__I_\n-|--|--|- ||-|--|--|---|---|-|| ||-|----|--|--|--|-||= |--|--|-\n |  |  |  || |  |  |   |   | || || |    |  |  |  | ||  |  |  |\n |  |  |= || |  |  |   |   | || || |    |  |  |  | ||= |  |  |\n~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~~~~~\n\nWhat quality must you possess to withstand the test of time?";
}

bool EnduranceTrial::checkAnswer(string answer) {
    return (answer == "endurance");
}
