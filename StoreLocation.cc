#include <iostream>
using namespace std;
#include <string>

#include "StoreLocation.h"
#include "Location.h"
#include "defs.h"

const char StoreLocation::code = 'A';
const int StoreLocation::capacity = SLOC_CAPACITY;
int StoreLocation::nextId = 1;

//constructor
StoreLocation::StoreLocation()
    : Location(code,nextId++)
{
  cout<<"-- StoreLocation ctor: "<< id <<endl;
}


//member functions
void StoreLocation::setProduct(const string& productName, string& product)
{
    product = productName;
}

int StoreLocation::getFreeSpace() const{ return capacity-quantity; }

void StoreLocation::print() const
{
  cout<<"StoreLocation "<<id<<" has "<< quantity <<" number of Products: "<<product<<endl;
}



//virtual member functions
int StoreLocation::getCapacity() const { return capacity; }

bool StoreLocation::add(const string& addProductName, int addQuantity)
{
    if (isAvailable())
    {
        product = addProductName;
    }

    if (product.compare(addProductName) == 0 && getFreeSpace() >= addQuantity)
    {
        quantity += addQuantity;
        return true;
    }

    else
        return false;
}
bool StoreLocation::remove(int removeQuantity)
{
    if (removeQuantity <= quantity)
    {
        quantity = quantity - removeQuantity;
        return true;
    }
    else
        return false;
}