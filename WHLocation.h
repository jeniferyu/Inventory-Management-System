#ifndef WHLOCATION_H
#define WHLOCATION_H
#include "Location.h"
#include "defs.h"
#include <iostream>
using namespace std;

class WHLocation : public Location
{

  public:
    //constructor
    WHLocation();

    //member functions
    int  getFreeSpace() const;
    void print() const;


    //virtual member functions
    virtual int getCapacity() const;
    virtual bool add(const string&, int);
    virtual bool remove(int);

  private:
    static const char code;
    static const int  capacity;
    static int nextId;

};

#endif