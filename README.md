# Eternity-Quest ( A Story Mode Text Game )
Hackathon 2 - Text Based C++ Game 


## Description of the Game:
The game is called "Quest for Eternity," and it takes players on a mystical journey to attain eternity. The main character, embarks on a quest to prove his/her worthiness by passing through nine trials. Each trial is represented by a riddle that must be solved to progress further. The ultimate goal is to reach the Gate of Eternity and become an eternal being of the universe to provide harmony and sustain the beautiful creation of the world.

## Features of the Game:

- ####  Engaging Storyline:
  The game offers a captivating narrative as players follow a Mortal's journey through nine challenging trials.
- #### Riddle-based Gameplay:
  Players must solve riddles to progress through each trial, testing their knowledge and problem-solving skills.
- #### Scroll of Wisdom:
  The Mortal possesses a scroll that provides partial hints for each riddle, helping players find the correct answer.
- #### Save and Load Functionality:
  Players can save their progress, it loads back if you have answered incorrectly and player able to continue their quest.
- #### Interactive User Interfac:
  Custom Ascii Art to provide cool designs to attract players to visualize this simple text based game.
- #### Victory Message:
  Upon completing the game, players receive a victory message, celebrating their achievement.

## How to Play the Game:

1. Start the game and enter your name.
2. Choose whether to start a new game or load a previously saved game.
3. If starting a new game, the quest begins with the first trial.
4. Read the riddle presented for each trial and enter your answer.
5. If needed, use the **Scroll of Wisdom** to obtain hints by typing *"hint"* during the answer input.
6. Progress through all nine trials by answering the riddles correctly.
7. If you answer incorrectly, the journey ends, and you will need to start again or load a saved game.
8. Upon completing the final trial, receive a victory message and **celebrate your success**


### Object-Oriented Concepts Used:

- #### Abstraction:
  The game utilizes classes and objects to represent the game entities, such as the *Game*, *TrialList*, *Trial*, and derived *trial* classes. Each class 
  encapsulates its data and behavior, providing a higher level of abstraction.
  
- #### Inheritance:
  The derived trial classes inherit from the **base Trial class**, allowing them to share common attributes and methods while adding their unique 
  characteristics.
  
- #### Polymorphism:
  The **getTrial** function in the Game class demonstrates polymorphism by returning a pointer to the base Trial class but creating and returning objects 
  of the appropriate derived trial classes based on the scroll contents.
  
- #### Encapsulation:
  The classes in the game encapsulate their data and methods, providing **data hiding and ensuring the integrity** of the game's functionality.


### Role of Linked Lists/Stacks/Queues:

In this game, a linked list data structure is used to manage the sequence of trials that *PLAYER* must pass through. The linked list is implemented using a **TrialList** class, with each trial represented by a **TrialNode** containing the trial name and scroll contents. The linked list allows for efficient traversal through the trials, progressing from one trial to the next as each is completed.

Linked lists are suitable for this purpose because they provide **dynamic memory allocation**, allowing trials to be added or removed easily. The linked list structure enables easy insertion of new trials, such as when the *PLAYER* completes a trial and moves on to the next one. The traversal through the linked list is done by following the next pointers in each node, allowing for sequential progression through the trials.

By using linked lists, the game can maintain a **dynamic and ordered collection of trials** , ensuring that *PLAYER* completes them in the correct sequence. Linked lists offer flexibility and efficiency in managing the game's flow and progression.

Stacks and queues are not explicitly used in the provided code for this game. However, these data structures could potentially be incorporated to manage additional game features, such as a stack for managing a history of visited locations or a queue for handling game events in a specific order.






