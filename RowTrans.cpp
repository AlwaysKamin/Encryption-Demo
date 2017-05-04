#include "include/RowTrans.h"

void RowTrans::getKeys()
{
  std::cout << "Please input numbers 1-7 randomly, one at a time seperated by a space: " << std::endl;
  std::cin >> k1;
  std::cin >> k2;
  std::cin >> k3;
  std::cin >> k4;
  std::cin >> k5;
  std::cin >> k6;
  std::cin >> k7;
}

void RowTrans::Encrypt(std::string &plainText)
{
  for(int i = 0; i < 7; i++)
  {
    for(int j = 0; j < 7; j++)
    {
      pText[i][j] = '~';
    }
  }

  int total = 0;
  for(int i = 0; i < 7; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      if(plainText[total] != '\0')
      {
      pText[i][j] = plainText[total];
      total++;
    }else
    {
      break;
    }
    }
  }
}


/*
* Simply outputs the cipherText to the screen
*/
void RowTrans::displayCipher()
{
  std::cout << cipherText << std::endl;

  for(int i = 0; i < 7; i++)
  {
    for(int j = 0; j < 7; j++)
    {
      std::cout << pText[i][j];
    }
    std::cout << std::endl;
  }
}
