#ifndef STORELOCATION_H
#define STORELOCATION_H
#include "Location.h"
#include "defs.h"
#include <iostream>
using namespace std;

class StoreLocation : public Location
{

  public:
    //constructor
    StoreLocation();

    //member functions
    void setProduct(const string&, string&);
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