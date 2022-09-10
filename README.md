# SD_2022_19BCE0273


**Description:**
The game has been made till Level-1 +  parts of (Level-2) have also been implemented.

The code is entirely written in c++ with heavy usage of Object oriented paradigms like inheritance, polymorphism and function overloading.

Global / Main parent class is **global_chess** which encapsulates the chess board matrix and initial global status of each cell. 

Child class of **global_chess** is **avatar** class, which encapsulates the avatar type and it’s initial position on the board for both participant A and B. 

Child class of avatar is **participant**, it is where participant can decide the avatars/characters and can initialize the position of his characters.

Major function of avatar class is **movement**(char player, string my_character, char next). 
When called by the participant, it takes the character and the next move and moves the character as per the calculations and even kills the opponent as per the norms of the game.


In **main** function, there will be a context switching between the turns of two players (i.e player A and player B) till they want to play.

Thank you


_Nirbhay S Gandhi assures and guarantees the authenticity of the code. No part of the code has been copied / reused in any manner from any individual or from any internet source._


