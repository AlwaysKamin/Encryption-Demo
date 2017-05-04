//
// Created by kamin on 4/29/17.
//
#include "include/Ceaser.h"

void Ceaser::Encrypt(int key, std::string plainText, char* ALPHA)
{

    for(int i = 0; i < plainText.length(); i++)
    {
        //cipherText.insert(i, 1, (plainText[i] + key));
        for(int j = 0; j < 26; j++)
        {
          if(ALPHA[j] == plainText[i])
          {
            cipherText.insert(i, 1, ALPHA[(j + key) % 26]);
          }
        }
    }
}

void Ceaser::displayCipher()
{
  std::cout << cipherText << std::endl;
}
