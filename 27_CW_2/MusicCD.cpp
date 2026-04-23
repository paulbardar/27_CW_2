#include "MusicCD.h"

MusicCD::MusicCD(){
    duration = 0;
}

MusicCD::MusicCD(string name, float price, int duration)
    :Item(name, price)
{
    this->duration = duration;
}

void MusicCD::setDuration(int duration)
{
    this->duration = duration;
}

int MusicCD::getDuration() const
{
    return duration;
}

void MusicCD::showInfo() const
{
    cout << "Music CD: " << endl;
    Item::showInfo();
    cout << "\tDuration: " << duration << endl;
}
