#pragma once
#include <string>
#include <iostream>
using namespace std;


class Item {
protected:
	string name;
	float price;

public:
	Item();
	Item(string name, float price);


	void setName(string name);
	void setPrice(float price);

	string getName()const;
	float getPrice()const;

	void showInfo()const;

};

