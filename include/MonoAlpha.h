#ifndef MONO_ALPHA_H
#define MONO_ALPHA_H

#include <iostream>
#include <string>

class MonoAlpha
{
  public:
    void Encrypt(std::string &plainText, std::string &stringKey, char* ALPHA);
    void displayCipher();

  private:
    std::string cipherText; //Holds the ciphertext
};

#endif //MONO_ALPHA_H
