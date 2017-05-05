#ifndef VIGENERE_H
#define VIGENERE_H

#include <iostream>
#include <string>

class Vigenere
{
  public:
    Vigenere();

    void Encrypt(std::string &plainText, std::string &stringKey, char* ALPHA);

    void displayCipher();

  private:
    std::string cipherText;
    char cipherT[100];
    int key;
    int cipherNum;
    char c;
    int newKey[100];
};

#endif //VIGENERE_H
