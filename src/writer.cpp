#include "writer.h"

void Writer::create()
{
    name = names.first[rand() % names.first.size()] + " " + names.last[rand() % names.last.size()];
    horror = rand() % 3 + 1;
    action = rand() % 3 + 1;
    comedy = rand() % 3 + 1;
}

void Writer::output()
{
    cout << endl;
    cout << "> writer" << endl;
    cout << name << endl;
    cout << horror << endl;
    cout << action << endl;
    cout << comedy << endl;
}