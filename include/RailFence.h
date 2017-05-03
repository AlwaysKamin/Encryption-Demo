#ifndef RAILFENCE_H
#define RAILFENCE_H

#include <iostream>
#include <string>

class RailFence
{
  public:
    RailFence();
    void Encrypt();

  private:
    int MAX;
    std::string plainText[100];
    std::string topRailText[50];
    std::string bottomRailText[50];
};

#endif //RAILFENCE_H
