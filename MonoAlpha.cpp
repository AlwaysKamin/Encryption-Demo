#include "include/MonoAlpha.h"

/*
* Deals with the encryption, gets sent plaintext, a string key, and the alphabet
* Uses a unique 26! alphabet to generate the new string.
* for example a key of ixfqsoatdbglpyhmjkuvcznwer.
*/
void MonoAlpha::Encrypt(std::string &plainText, std::string &stringKey, char* ALPHA)
{
  for(int i = 0; i < plainText.length(); i++)
  {
    for(int j = 0; j < 26; j++)
    {
      if(ALPHA[j] == plainText[i])
      {
        cipherText.insert(i, 1, stringKey[j]);
      }
    }
  }
}

/*
* Simply prints the cipher to the screen
*/
void MonoAlpha::displayCipher()
{
  std::cout << cipherText << std::endl;
}
