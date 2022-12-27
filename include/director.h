#include <iostream>
#include <vector>
#include "conio.h"
#include "names.h"

using namespace std;

class Director
{
  public:
    Names names;
    string name;
    int horror;
    int action;
    int comedy;

    void create();
    void output();
};