//
// Created by kamin on 4/29/17.
//
#include "include/Ceaser.h"

/*
* Deals with the encryption, gets sent the plaintext after it
* was parsed in the parseInput function in main.cpp. It was also
* passed the alphabet in a character array, and a key for shifting
*/
void Ceaser::Encrypt(int key, std::string plainText, char* ALPHA)
{

    for(int i = 0; i < plainText.length(); i++)
    {
        for(int j = 0; j < 26; j++)
        {
          if(ALPHA[j] == plainText[i])
          {
            //inserts the key# of leters over and places that in the cipher text spot
            cipherText.insert(i, 1, ALPHA[(j + key) % 26]);
          }
        }
    }
}

/*
* Simply prints the cipher to the screen
*/
void Ceaser::displayCipher()
{
  std::cout << cipherText << std::endl;
}
