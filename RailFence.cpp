#include "include/RailFence.h"
/*
* Deals with the encryption, gets sent the plaintext after it
* was parsed in the parseInput function in main.cpp
*/
void RailFence::Encrypt(std::string &plainText)
{
  std::cout << "RailFenceEncrypt is good to go" << std::endl;
  int b = 0;
  int t = 0;

  for(int i = 0; i < plainText.length(); i ++)
  {
      if(i % 2 == false)
      {
        topRailText.insert(t, 1, plainText[i]);
        //topRailText[t] = plainText[i];
        t++;
      }else
      {
        bottomRailText.insert(b, 1, plainText[i]);
        //bottomRailText[b] = plainText[i];
        b++;
      }
  }

  cipherText = topRailText + bottomRailText;
}

/*
* Simply prints the cipher to the screen
*/
void RailFence::displayCipher()
{
  std::cout << cipherText << std::endl;
}
