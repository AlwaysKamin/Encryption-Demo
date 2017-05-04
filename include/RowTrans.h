#ifndef ROW_TRANS_H
#define ROW_TRANS_H

#include <iostream>
#include <string>

class RowTrans
{
  public:
    void getKeys();
    void Encrypt(std::string &plainText);
    void displayCipher();

  private:
    int k1, k2, k3, k4, k5, k6, k7;
    char pText[7][7];
    std::string cipherText;
};

#endif //ROW_TRANS_H
