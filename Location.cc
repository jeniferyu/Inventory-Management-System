#include <iostream>
using namespace std;
#include <string>

#include "Location.h"

//constructor
Location::Location(char code, int n)
    : id(code + std::to_string(n)), quantity(0),NONE("Empty")
{
  product = NONE;
  cout<<"-- Location ctor: "<<id<<endl;
}


//getters
string Location::getId()       const { return id; }

string Location::getProduct()  const { return product; }

int    Location::getQuantity() const { return quantity; }

//member functions
bool Location::isEmpty() const
{
  if (quantity == 0)
    return true;
  else
    return false;
}

bool Location::isAvailable() const
{
  if (product == NONE)
      return true;
    else
      return false;
}

void Location::print() const
{
  cout<<"Location  "<<id<<" has "<<quantity<<" number of Products: "<<product<<endl;
}
