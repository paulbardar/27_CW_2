#include "Item.h"

Item::Item()
{
    name = "empty";
    price = 0;
}

Item::Item(string name, float price) {
    this->name = name;
    this->price = price;

}

void Item::setName(string name) {
    this->name = name;
}

void Item::setPrice(float price) {
    this->price = price;
}

string Item::getName() const
{
    return name;
}

float Item::getPrice() const
{
    return price;
}

void Item::showInfo() const
{
    cout << "\tName: " + name << endl;
    cout << "\tPrice: " << price << endl;
}
