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
    std::string topRailText;     //Holds the characters that reside in the top rail
    std::string bottomRailText;  //Holds the characters that reside in the bot rail
    std::string cipherText;      //Holds the cipher text after all minipulation
};

#endif //RAILFENCE_H
