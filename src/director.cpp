#include "director.h"

void Director::create()
{
    name = names.first[rand() % names.first.size()] + " " + names.last[rand() % names.last.size()];
    horror = rand() % 3 + 1;
    action = rand() % 3 + 1;
    comedy = rand() % 3 + 1;
}

void Director::output()
{
    cout << endl;
    cout << "> director" << endl;
    cout << name << endl;
    cout << horror << endl;
    cout << action << endl;
    cout << comedy << endl;
};