#include "EmotionsTrial.h"

EmotionsTrial::EmotionsTrial() {
    riddle = "\n\nThe mortal ventured into a maze filled with swirling emotions—joy, sorrow, anger, and love. The \nsixth trial was to navigate the maze without being consumed by overwhelming feelings. The \nmortal had to empathize with the emotions he encountered, understanding their origins and \nfinding balance within himself. Through empathy, he unraveled the maze, reaching serenity.\n\n       $$$$         $$$$\n     $$$$$$$$     $$$$$$$$\n   $$$$$$$$$$$$ $$$$$$$$$$$$\n  $$$$$$$$$$$$$$$$$$$$$$$$$$$\n  $$$$$$$$$$$$$$$$$$$$$$$$$$$\n   $$$$$$$$$$$$$$$$$$$$$$$$$\n    $$$$$$$$$$$$$$$$$$$$$$$\n      $$$$$$$$$$$$$$$$$$$\n         $$$$$$$$$$$$$\n            $$$$$$$\n              $$$\n               $\n\nWhat enables you to connect deeply with others and share their joys and sorrows?";
}

bool EmotionsTrial::checkAnswer(string answer) {
    return (answer == "empathy");
}
