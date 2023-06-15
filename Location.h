#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
using namespace std;

class Location
{

  public:
    //constructor
    Location(char,int);

    //getter
    string getId()      const;
    string getProduct() const;
    int    getQuantity() const;

    //member functions
    bool isEmpty()     const;
    bool isAvailable() const;
    void print()       const;

    //virtual member functions
    virtual int getCapacity() const = 0;
    virtual bool add(const string&, int) = 0;
    virtual bool remove(int) = 0;


  protected:
    string id;
    string product;
    int    quantity;
    const  string NONE;

};

#endif