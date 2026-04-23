

#include "Item.h"
#include "MusicCD.h"

int main()
{

    MusicCD a;
    a.showInfo();

    MusicCD b("Sting", 110, 56);
    b.showInfo();

    return 0;
}


