#include "include/Vigenere.h"

Vigenere::Vigenere()
{
  for(int i = 0; i < 100; i++)
  {
    cipherT[i] = '~';
  }
}

void Vigenere::Encrypt(std::string &plainText, std::string &stringKey, char* ALPHA)
{

  int pText[plainText.length()];

  //Copies the contents of plainText string into a int aray called pText
  //This allows us to compare the letter values a-z as 0-25
  std::cout << std::endl;
  std::cout << "PlainText: ";
  for(int i = 0; i < plainText.length(); i++)
  {
    for(int j = 0; j < 26; j++)
    {
      if(plainText[i] == ALPHA[j])
      {
        pText[i] = j;
        std::cout << j << " ";
      }
    }
  }

  std::cout << std::endl;
  std::cout << std::endl;

  //Copies the contents of stringKey string into an int array called newKey
  //This allows us to compare the letter values a-z as 0-25
  std::cout << "Key: ";
  for(int m = 0; m < stringKey.length(); m++)
  {
    for(int n = 0; n < 26; n++)
    {
      if(stringKey[m] == ALPHA[n])
      {
        newKey[m] = n;
        std::cout << n << " ";
      }
    }
  }

  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "CipherText: ";
  for(int i = 0; i < plainText.length(); i++)
  {
    //Checks to see if it has a value of a blank spot
    if(pText[i] != 126)
    {
      //Final number value for the cipher character
      cipherNum = (pText[i] + newKey[i]) % 26;
      cipherT[i] = ALPHA[cipherNum];

      std::cout << cipherNum << " ";
    }
  }
  std::cout << std::endl;
  std::cout << std::endl;

}

void Vigenere::displayCipher()
{
  std::cout << std::endl;
  std::cout << std::endl;
  for(int i = 0; i < 100; i++)
  {
    if(cipherT[i] != '~')
    {
      std::cout << cipherT[i];
    }
  }

  std::cout << std::endl;
}
