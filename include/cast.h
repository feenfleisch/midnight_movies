#include <iostream>
#include <vector>
#include "conio.h"
#include "names.h"

using namespace std;

class Cast
{
  private:
    struct trait_t
    {
        string name;
        string description;
        int horror;
        int action;
        int scifi;
        float salary;
    };

    const vector<trait_t> traits{
        {"i love satan", "horror +1", 1, 0, 0, 0},
        {"steroids & gym", "action +1", 0, 1, 0, 0},
        {"ex-wrestler", "action +1", 0, 1, 0, 0},
        {"nerd", "scifi +1", 0, 0, 1, 0},

        {"live long and prosper", "scifi +1", 0, 0, 1, 0},
        {"jesus is my buddy", "horror -1", -1, 0, 0, 0},
        {"couch-potato", "action -1", 0, -1, 0, 0},
        {"junk food fan", "action -1", 0, -1, 0, 0},
        {"kidnapped by aliens", "scifi -1", 0, 0, -1, 0},
        {"for the art", "salary -1/2", 0, 0, 0, -0.5},
        {"money, money, money!", "salary x2", 0, 0, 0, 1},
        {"ex a-lister", "all +1 / salary x2", 1, 1, 1, 1},
        {"ex stripper", "all -1", -1, -1, -1, 0},
        {"i am not drunk. really!", "all -1", -1, -1, -1, 0},
        {"i love mary jane", "all -1", -1, -1, -1, 0},
        {"ex stripper", "all -1", -1, -1, -1, 0},
        {"ex soap actor", "all -1 / salary x2", -1, -1, -1, 1}};

    struct actor_t
    {
        string name;
        int horror;
        int action;
        int scifi;
        int salary;
        trait_t trait;
    };

  public:
    Names names;
    vector<actor_t> list;

    void output();
    void create();
};