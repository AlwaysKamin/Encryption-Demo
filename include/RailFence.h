#ifndef RAILFENCE_H
#define RAILFENCE_H

#include <iostream>
#include <string>
#include <stdio.h>

class RailFence
{
  public:
    void Encrypt(std::string &plainText);
    void displayCipher();

  private:
    //char topRailText[50];    //Holds the characters that reside in the top rail
    //char bottomRailText[50]; //Holds the characters that reside in the bot rail
    //char cipherText[100];    //Holds the cipher text after all minipulation
    std::string topRailText;
    std::string bottomRailText;
    std::string cipherText;
};

#endif //RAILFENCE_H
