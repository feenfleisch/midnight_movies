#include "cast.h"

void Cast::create()
{
    int number;

    number = rand() % 3 + 3;
    list.resize(number);

    for (int i = 0; i < list.size(); i++)
    {
        list[i].name = names.first[rand() % names.first.size()] + " " + names.last[rand() % names.last.size()];
        list[i].horror = rand() % 3 + 1;
        list[i].action = rand() % 3 + 1;
        list[i].scifi = rand() % 3 + 1;

        list[i].trait = traits[rand() % traits.size()];
        list[i].horror += list[i].trait.horror;
        list[i].action += list[i].trait.action;
        list[i].scifi += list[i].trait.scifi;

        list[i].salary = (list[i].horror + list[i].action + list[i].scifi) * 500;
        list[i].salary += list[i].trait.salary * list[i].salary;
    }
}

void Cast::output()
{
    cout << endl;
    cout << "> cast list" << endl;

    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i].name << endl;
        cout << list[i].horror << endl;
        cout << list[i].action << endl;
        cout << list[i].scifi << endl;
        cout << list[i].salary << endl;
        cout << list[i].trait.name << " (" << list[i].trait.description << ")" << endl;
        cout << endl;
    }
}