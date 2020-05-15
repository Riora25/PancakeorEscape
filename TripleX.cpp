#include <iostream>

void PrintIntroduction(int Difficulty)
{ 
std::cout << "   _______  _______    _         _______   ________  _         _______    _______  _______     _______    _______   _______   ________    _______  _______  \n";
std::cout << "  (  ____ )(  ___   ) ( (    /| (  ____ ) (  ___   )| )    /) (  ____ )  (  ___  )(  ____ )   (  ____ ) (  ____  ) (  ____ ) (  ___   )  (  ____ )(  ____ ) \n";
std::cout << "  | (    )|| (   )  | |  (  ( | | (    /  | (   )  ||  )  / / | (        | (   ) || (    )|   | (       | (    ( / | (       | (   )  |  | (    )|| (       \n";
std::cout << "  | (____)|| (___)  | |   ( | | | |       | (___)  ||  (_/ /  | (__      | |   | || (____)|   | (__     | (_____ | | |       | (___)  |  | (____)|| (__     \n";
std::cout << "  |  _____)|  ___   | | () ( )| | |       |  ___   ||   _ (   |  __)     | |   | ||     __)   |  __)    (_____   ) | |       |  ___   |  |  _____)|  __)    \n";
std::cout << "  | (      | (   )  | | | (   | | |       | (   )  ||  ( ( )  | (        | |   | || (( (      | (              | | | |       |  )  (  |  |  )     | (       \n";
std::cout << "  | )      | )   (  | | )  (  | | (____/) | )   (  ||  /  ( ) | (____/)  | (___) || ) ( ( __  | (____/) /) ____) | | (____/) | )   (  |  | )      | (____/) \n";
std::cout << "  |/       |/     ( | |/    )_) (_______/ |/     ( ||_/    (/ (_______/  (_______)|/   ( __/  (_______/ ( _______) (_______/ |/     ( |  |/       (_______/ \n";
std::cout << "                                                                                                                                                            \n\n";
 
//Print story content for the game at start up on the terminal
    std::cout << "You wake up groggily coming to your senses slowly. You blink and take in your surroundings.\n\n";
    std::cout << "The room is a simple square in shape. There are no decorations and no furniture of any kind.\n\n";
    std::cout << "Instead of these usual objects, you see a series of dials built into the wall and a screen above each.\n\n";
    std::cout << "You attempt to open the door but there is no handle and bang as you might against the door it doesn't budge. It merely emits a dull metal thud and hurts your hands. The red lights blink at you apathetically.\n\n";
    std::cout << "There are 3 dials on each wall of the room with a number painted from 1-9. You also notice a door across from the middle set with 9 red squares on the surface.\n\n";
    std::cout << "A voice suddenly resounds in the room. \"In order to escape this room you must solve each puzzle in numerical succession, each Dial getting harder with each success. Fail to answer a dial correctly and the consequences.... well... won't be flat-tering. MWahahahaha.\" and cuts off as quickly as it started.\n\n";
    std::cout << "You notice that the ceiling has a light built into it and that it is too high to reach. The screen next to dial " << Difficulty;
    std::cout << " is lit and blinking...\n\n";
    std::cout << "Looks like you don't have much choice but to solve the puzzles if you hope to survive and eat those pancakes that you hope to avoid being turned into...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    //declaring values for variables CodeA,CodeB,CodeC for the dials in the room
    const int CodeA = 4;
    const int CodeB = 7;
    const int CodeC = 15;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print the CodeSum and CodeProduct variable to the terminal
    std::cout << "+ There are 3 numbers in the code.";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    //Store player Guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players Guess is Correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nThe door lights turn from red to green and the door releases a hiss releasing a sweet familiar scent. \n";
        std::cout << "You wipe the sweat off your brow and open the door as quickly as you can and enter a room with an exit sign and a table in the middle of the room with a stack of pancakes drenched in syrup. \n";
        std::cout << "Your stomach rumbles and your mouth drools at the sight and the smell of those round golden discs. You give in wanting some stress relief from the events you just went through and eat the stack with the utensils provided.\n";
        std::cout << "You head out the door marked exit carefully belly full. Having eaten your reward and earning your sweet freedom...\n\n";
        std::cout << "                          ./#&@@@@@@@@@@@@@@@@@@@&#*                            \n";
        std::cout << "                  *@@@@@@@@@%*(@@@              (@@/&@@@@@@@@@                  \n"; 
        std::cout << "              @@@@&,         .@@              #@@@           (@@@@%             \n"; 
        std::cout << "            @@@               @@@@@@@@@@@&&@@@@,                 ,@@&           \n"; 
        std::cout << "           ,@@.                           .                       %@@           \n"; 
        std::cout << "            ,@@@@,                                             (@@@@            \n"; 
        std::cout << "           *@@  /@@@@@&                                 (@@@@@@@. (@@           \n"; 
        std::cout << "            @@@,      @@#        %@@@@@@,         .@@@@&#.       %@@(           \n"; 
        std::cout << "           ,@@@@@@@&, #@@     .@@@.    (@@@      %@@        /@@@@@@@&           \n"; 
        std::cout << "      ,@@@@@@@.    (@@@@@    .@@(        (@@@   @@@@@@@@@@@@@.    #@@@@@@@      \n"; 
        std::cout << "   #@@@/    ,@@@@,     @@*   &@@#%&@@@@@@@@@@@@@%/,            (@@@@     %@@@,  \n"; 
        std::cout << " &@@*      *@@  *@@@@@@@@@. /@@.                       .(&@@@@@@. (@@       &@@.\n";
        std::cout << "%@@         @@@,       ,%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#.       %@@(        .@@\n";
        std::cout << "(@@.          (@@@@%,                                       /@@@@@,          ,@@\n";
        std::cout << " *@@&              /@@@@@@@@@@&#*.             ,/%&@@@@@@@@@@.              @@@ \n";
        std::cout << "   ,@@@@                      ,(%&&@@@@@@@@@@@&&#/,                     ,@@@@   \n";
        std::cout << "       #@@@@&,                                                     (@@@@@*      \n";
        std::cout << "            ,@@@@@@@@%,                                   /@@@@@@@@&            \n";
        std::cout << "                     /%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#,                    \n";
        
        return true;
    }
    else
    {
        std::cout << "\nThe ceiling groans and descends crushing you. You have failed to escape. The last thing you hear is laughing and the crunch of your body breaking...\n";
        std::cout << "               %@@@@@@@@@@@@@@,                                                 \n";
        std::cout << "            @@@@@@@@@@@@@@@@@@@@@(        @@@@@@@@@@@@@@@%.                     \n";
        std::cout << "         *@@@@@@@@@@@&&&@@@@@@@@@@@@      .@@@@@@@@@@@@@@@@@@@@%                \n";
        std::cout << "       /@@@@@@,               .@@@@@@@     @@@@@@@@@@@@@@@@@@@@@@@@*            \n";
        std::cout << "      @@@@@.                     .@@@@@,   @@@@@%&@@@@@@@@@@@@@@@@@@@@.         \n";
        std::cout << "    /@@@@*                         .@@@@%  (@@@@%           .%@@@@@@@@@@#       \n";
        std::cout << "   (@@@@.    #@@@@@@     .@@@@@@     @@@@%  @@@@@                   %@@@@@(     \n";
        std::cout << "   @@@@@    *@@@@@@@%    @@@@@@@@    #@@@@  @@@@@                       .@@@.   \n";
        std::cout << "  #@@@@#     @@@@@@@,    @@@@@@@#    (@@@@@ /@@@@#                          #%  \n";
        std::cout << " #@@@@@      .%@&,        #@@(      @@@@@@  @@@@@                               \n";
        std::cout << "   @@@@@@(           @@@           ,@@@@@@*  &@@@@.                             \n";
        std::cout << "   ,@@@@@@@@/                   ,@@@@@@@@%   (@@@@#                             \n";
        std::cout << "     @@@@@@@@@@@#            @@@@@@@@@@@.     @@@@@                             \n";
        std::cout << "      #@@@@@@@@@@/./.  %..%@@@@@@@@@@        &@@@@.                             \n";
        std::cout << "       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.                            \n";
        std::cout << "      &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                            \n";
        std::cout << "     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@                              \n";
        std::cout << "     %@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@% *@@@@%                              \n";
        std::cout << "      @@@@@@@@@@@@@@@@@@@@@@@@@@@,@@@ @@@/   @@@@@                              \n";
        std::cout << "      #@@@@@@@@@@@@@@@@@@@@@@@@@   %   @.    @@@@@,                             \n";
        std::cout << "       @@@@@@@@@@@@@@@@@@@@@@@@#             .@@@@%                             \n";
        std::cout << "        @@@@@@@@@@@@@@@@@@@@@@@               @@@@@                             \n";
        std::cout << "        ,@@@@@@@@@@@@@@@@@@@@@                @@@@@,                            \n";
        std::cout << "        ,@@@@@@@@@@@@@@@@@@@@@                @@@@@,                            \n";
        std::cout << "         (@@@@@@@@@@@@@@@@@@@                 .@@@@&                            \n";
        std::cout << "          &@@@@@@@@@@@@@@@@@                   @@@@@                            \n";
        std::cout << "         .@@@@@@@@@@@@@@@@@@.                  &@@@@.                           \n";
        std::cout << "       .&@@@@@@@@@@@@@@@@@%                    .@@@@@                           \n";
        std::cout << "        *@@@@@@@@@@@@(                                                          \n";
        std::cout << "             @#.                                                                \n";
       
        return false;
    }
}

int main()
{   
    int LevelDifficulty = 1;
    const int MaxDifficulty = 9;

    while (LevelDifficulty <= MaxDifficulty) //loop the game until all levels completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); // Discards the buffer

    if (bLevelComplete)
    {
        ++LevelDifficulty;
    }
    
    }

    return 0;
}