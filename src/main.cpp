#include "titles.h"
#include "cast.h"
#include "director.h"
#include "writer.h"

int main()
{
    Titles titles;
    Cast cast;
    Director director;
    Writer writer;

    srand(time(0));
    titles.create();
    titles.output();
    cast.create();
    cast.output();
    director.create();
    director.output();
    writer.create();
    writer.output();

    return (0);
}