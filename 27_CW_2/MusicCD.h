#pragma once
#include "Item.h"
class MusicCD :
    public Item
{
protected:
    int duration;
public:
    MusicCD();
    MusicCD(string name, float price, int duration);

    void setDuration(int duration);

    int getDuration()const;

    void showInfo()const;
};

