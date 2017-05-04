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

  k1 = k1 - 1;
  k2 = k2 - 1;
  k3 = k3 - 1;
  k4 = k4 - 1;
  k5 = k5 - 1;
  k6 = k6 - 1;
  k7 = k7 - 1;

  std::cout << k1 << k2 << k3 << k4 << k5 << k6 << k7;
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

  // This chunk will populate the matrix with the plaintext
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

  for(int i = 0; i < 7; i++)
  {
    if(k1 == i)
    {
        for(int m = 0; m < 7; m++)
        {
          if(pText[m][k1] != '~')
          {
          std::cout << pText[m][k1];
          }
        }
    }else if(k2 == i)
    {
      for(int m = 0; m < 7; m++)
        {
          if(pText[m][k2] != '~')
          {
          std::cout << pText[m][k2];
          }
        }
    }else if(k3 == i)
    {
      for(int m = 0; m < 7; m++)
        {
          if(pText[m][k3] != '~')
          {
          std::cout << pText[m][k3];
          }
        }
    }else if(k4 == i)
    {
      for(int m = 0; m < 7; m++)
        {
          if(pText[m][k4] != '~')
          {
          std::cout << pText[m][k4];
          }
        }

    }else if(k5 == i)
    {
      for(int m = 0; m < 7; m++)
        {
          if(pText[m][k5] != '~')
          {
          std::cout << pText[m][k5];
          }
        }
    }else if(k6 == i)
    {
      for(int m = 0; m < 7; m++)
        {
          if(pText[m][k6] != '~')
          {
          std::cout << pText[m][k6];
          }
        }

    }else if(k7 == i)
    {
      for(int m = 0; m < 7; m++)
        {
          if(pText[m][k7] != '~')
          {
          std::cout << pText[m][k7];
          }
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
