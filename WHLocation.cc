#include <iostream>
using namespace std;
#include <string>

#include "WHLocation.h"
#include "Location.h"
#include "defs.h"

const char WHLocation::code = 'B';
const int WHLocation::capacity = WHLOC_CAPACITY;
int WHLocation::nextId = 1;

//constructor
WHLocation::WHLocation()
    : Location(code,nextId++)
{
  cout<<"-- WHLocation ctor: "<< id <<endl;
}


//member functions


int WHLocation::getFreeSpace() const{ return capacity - quantity; }

void WHLocation::print() const
{
  cout<<"WHLocation "<<id<<" has "<<quantity<<" number of Products: "<<product<<endl;
}



//virtual member functions
int WHLocation::getCapacity() const { return capacity; }

bool WHLocation::add(const string& addProductName, int addQuantity)
{
    if (isAvailable() && getFreeSpace() >= addQuantity)
    {
        product = addProductName;
        quantity += addQuantity;
        return true;
    }

    else
        return false;
}

bool WHLocation::remove(int removeQuantity)
{
    if (removeQuantity <= quantity)
    {
        quantity = quantity - removeQuantity;

        if (quantity == 0)
            product = NONE;

        return true;
    }
    else
        return false;
}