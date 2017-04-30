#include <iostream>
#include <string>

#include "include/define.h"
#include "include/Ceaser.h"

int main() {

    int keyPress = 0;
    int inputKey;
    Ceaser ceaser;

    std::string inputString;

    /**
     * This is the section that deals with prompting the user
     * for which cipher they would like to use.
     */

    std::cout << "Hello, World!" << std::endl;
    std::cout << "What Kind of Cipher would you like to use?" << std::endl;
    std::cout << "Please input a 1-5 to decide which you would like." << std::endl << std::endl;

    std::cout << "1: Ceaser Cipher" << std::endl;
    std::cout << "2: Monoalphabetic Cipher" << std::endl;
    std::cout << "3: Playfair Cipher" << std::endl;
    std::cout << "4: Rail Fence Cipher" << std::endl;
    std::cout << "5: Row Transposition Cipher" << std::endl;

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

                    std::cout << "Please insert the string you would like to encrypt, no longer than 100 char" << std::endl;
                    std::cin >> inputString;


                    ceaser.CeaserEncrypt(inputKey);
                    break;
                case 2:
                    std::cout << "You have chosen Monoalphabetic Cipher" << std::endl;
                    break;
                case 3:
                    std::cout << "You have chosen Playfair Cipher" << std::endl;
                    break;
                case 4:
                    std::cout << "You have chosen Rail Fence Cipher" << std:: endl;
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
            std::cout << "This number is not in the given menu" << std::endl;
        }
    }

    return 0;
}
