#include "titles.h"

void Titles::create()
{
    bool a;

    a = rand() % 2;
    if (a == true)
    {
        title += part000[rand() % part000.size()] + " ";
    }
    else
        title += "";

    a = rand() % 2;
    if (a == true)
    {
        title += part001[rand() % part001.size()] + " ";
    }
    else
        title += "";

    a = rand() % 2;
    if (a == true)
    {
        title += part002[rand() % part002.size()];
        title += " ";
    }
    else
        title += "";

    title += part003[rand() % part003.size()];
    title += " ";

    a = rand() % 2;
    if (a == true)
    {
        title += part004[rand() % part004.size()];
        title += " ";
    }
    else
        title += "";

    a = rand() % 2;
    if (a == true)
    {
        title += part005[rand() % part005.size()];
    }
    else
        title += "";
}

void Titles::output()
{
    cout << title << endl;
}