#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    std::string name;
    int lives = 5;
    std::cout << "Type a name: ";
    std::cin >> name;
    std::cin.ignore();
    std::cout << "Your name is: " << name << "\n";
    std::cout << "press enter to continue...\n";
    std::cin.get();
    std::cout << "Hello, " << name << ", welcome to the land of Aetheria! In this adventure, your goal is to find the golden spoon, a mythical item with unknown powers that is said to be hidden in The Enigma Catacombs.\n";
    std::cout << "After you hear about this golden spoon you know you need to have it for yourself. But first, you must figure out where The Enigma Catacombs are. Who should you ask?\n\n";
    std::cout << "Your options are: a, barber; b, blacksmith; or c, city baker\n";
    char who;
    std::cin >> who;

    switch (who)
    {
    case 'a': {
        std::cout << "The barber said the entrance to the catacombs is under the bush in her yard and proceeds to take you to where it is.\n";

        std::cout << "You arrive at the bush in the barber's yard. You notice a lock on a trapdoor beneath the bush. The barber hands you a key and says, 'This should unlock the trapdoor, but be careful, it's guarded by a magical creature.'\n";
        std::cout << "You unlock the trapdoor and descend into the darkness...\n";


        srand(time(0));
        int randomNumber = rand() % 10 + 1;

        std::cout << "As you reach the bottom of the stairs, you encounter a creature blocking your path!\n";
        std::cout << "To defeat the creature, you must guess a number between 1 and 10.\n";

        bool guessedCorrectly = false;
        while (!guessedCorrectly && lives > 0)
        {
            std::cout << "Enter your guess: ";
            int guess;
            std::cin >> guess;

            if (guess == randomNumber)
            {
                guessedCorrectly = true;
                std::cout << "Congratulations! You guessed correctly and defeated the creature.\n";
                std::cout << "You continue through the catacombs...\n";
            }
            else
            {
                std::cout << "Oh no! Your guess was incorrect. The creature attacks you!\n";
                std::cout << "You lose a life.\n";
                lives--;
                std::cout << "You have " << lives << " lives remaining.\n";
                if (lives == 0)
                {
                    std::cout << "Game over. You have run out of lives.\n";
                    return 0;
                }
                else
                {
                    std::cout << "You try again...\n";
                }
            }
        }

        std::cout << "As you continue into the catacombs, you come across an opening in which there seems to be a locked door.\n";
        std::cout << "What should you do: a. Bang on the door b. Look for a key c. Run away\n";
        char choice2;
        std::cin >> choice2;

        switch (choice2)
        {
        case 'a': {
            std::cout << "With your immense strength you bang on the door.\n";
            std::cout << "Bang Bang Bannnngg!\n";
            std::cout << "The door topples over and you step inside.\n";
            break;
        }
        case 'b': {
            std::cout << "you look for a key but can't find it.\n";
            break;
        }
        case 'c': {
            std::cout << "you run into the darkness.\n";
            break;
        }
        }
        break;
    }
    case 'b':
        std::cout << "The blacksmith got mad at you for asking and hits you with his sledgehammer.\n";
        std::cout << "Game over.\n";
        return 0;
    case 'c':
        std::cout << "The baker got mad at you for asking this question and hits you with a baguette.\n";
        std::cout << "Game over.\n";
        return 0;
    default:
        std::cout << "Invalid choice. Game over.\n";
        return 0;
    }
}
