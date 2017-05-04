#include <iostream>
#include <string>
#include <algorithm>

#include "include/Ceaser.h"
#include "include/RailFence.h"
#include "include/MonoAlpha.h"

bool validateInput(std::string inputText);
void parseInput(std::string &inputText);
bool validateKey(std::string stringKey);

int main() {

    char ALPHA[26] = {'a', 'b', 'c', 'd', 'e',
                      'f', 'g', 'h', 'i', 'j',
                      'k', 'l', 'm', 'n', 'o',
                      'p', 'q', 'r', 's', 't',
                      'u', 'v', 'w', 'x', 'y',
                      'z'};

    int keyPress = 0;
    int inputKey;
    std::string stringKey;
    std::string inputText;
    Ceaser ceaser;
    RailFence railFence;
    MonoAlpha monoAlpha;

    std::string inputString;

    /**
     * This is the section that deals with prompting the user
     * for which cipher they would like to use.
     */
    std::cout << "--------------------------------------------------------------" << std::endl;
    std::cout << "              Welcome to the NCS 320 Cipher Demo              " << std::endl;
    std::cout << " Plain Text Rule: Plain text must be less than 100 characters " << std::endl;
    std::cout << "--------------------------------------------------------------" << std::endl;
    std::cout << "                Please input your string now:                 ";
    std::cout << std::endl;

    do {
      std::getline(std::cin, inputText);
    } while(validateInput(inputText) == false);

    std::cout << "--------------------------------------------------------------" << std::endl;

    parseInput(inputText);

    std::cout << "What Kind of Cipher would you like to use?" << std::endl;
    std::cout << "Please input a 1-5 to decide which you would like." << std::endl << std::endl;

    std::cout << "1: Ceaser Cipher" << std::endl;
    std::cout << "2: Monoalphabetic Cipher" << std::endl;
    std::cout << "3: Playfair Cipher" << std::endl;
    std::cout << "4: Rail Fence Cipher" << std::endl;
    std::cout << "5: Row Transposition Cipher" << std::endl;
    std::cout << std::endl;

    /**
     * While loop deals with keeping the programming running while
     * inputing wrong numbers
     */
    while(keyPress > 5 || keyPress == 0)
    {
        std::cin >> keyPress;
        if(keyPress <= 5 && keyPress > 0)
        {
            switch(keyPress)
            {
                case 1:
                    std::cout << "You have chosen Ceaser Cipher" << std::endl;
                    std::cout << "Please insert the number you would like to shift by" << std::endl;
                    std::cin >> inputKey;
                    ceaser.Encrypt(inputKey, inputText, ALPHA);
                    ceaser.displayCipher();
                    break;
                case 2:
                    std::cout << "You have chosen Monoalphabetic Cipher" << std::endl;
                    std::cout << "Please insert a 26 character key: " << std::endl;

                    do {
                      std::cin >> stringKey;
                    } while(validateKey(stringKey) == false);

                    monoAlpha.Encrypt(inputText, stringKey, ALPHA);
                    monoAlpha.displayCipher();

                    break;
                case 3:
                    std::cout << "You have chosen Playfair Cipher" << std::endl;
                    break;
                case 4:
                    std::cout << "You have chosen Rail Fence Cipher" << std:: endl;
                    railFence.Encrypt(inputText);
                    railFence.displayCipher();
                    break;
                case 5:
                    std::cout << "You have chosen Row Transposition Cipher" << std::endl;
                    break;
                default:
                    std::cout << "Something went really wrong" << std::endl;
                    break;
            }
        }else
        {
          std::cout << "--------------------------------------------------------------" << std::endl;
          std::cout << " This number is not in the given menu, please select another. " << std::endl;
          std::cout << "--------------------------------------------------------------" << std::endl;
        }
    }


    return 0;
}

/**
* validateInput checks to make sure you are not inputing to big of a string if
* the input is over 100 characters it will ask you to try again.
**/
bool validateInput(std::string inputText)
{
  if(inputText.length() > 100)
  {
    std::cout << "You inputed to many characters, please try again." << std::endl;
    return false;
  }else
  {
    return true;
  }
}

bool validateKey(std::string stringKey)
{
  if(stringKey.length() != 26)
  {
    std::cout << "Your key was the wrong length, I need 26 exactly... sorry" << std::endl;
    return false;
  }else
  {
    return true;
  }
}

/**
* parse Input takes in the inputed string and uses the .erase function as well as the
* standard remove function to find and remove all of the spaces in the function
* as well as sets it all to lowercase.
**/
void parseInput(std::string &inputText)
{
  inputText.erase( std::remove( inputText.begin(), inputText.end(), ' ' ), inputText.end() );
  std::transform(inputText.begin(), inputText.end(), inputText.begin(), ::tolower);
}
