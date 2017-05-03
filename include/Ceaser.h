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
    void CeaserEncrypt(int key);
    std::string CeaserDecrypt();

    int testKey = 12;
    std::string plainText[100];
    std::string cipherText[100];
};

#endif //CIPHERS_CEASER_H
