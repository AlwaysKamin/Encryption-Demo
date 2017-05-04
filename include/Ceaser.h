//
// Created by kamin on 4/29/17.
//
//#include "define.h"

#ifndef CIPHERS_CEASER_H
#define CIPHERS_CEASER_H

#include <string>
#include <iostream>
class Ceaser{
  public:
    void Encrypt(int key, std::string plainText,  char* ALPHA);
    std::string CeaserDecrypt();
    void displayCipher();

  private:
    int testKey;
    std::string cipherText;
};

#endif //CIPHERS_CEASER_H
