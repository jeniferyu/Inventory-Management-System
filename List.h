#ifndef LIST_H
#define LIST_H

#include "Product.h"
#include <iostream>
using namespace std;

class List
{
  class Node
  {
    public:
      Product* data;
      Node*    next;
  };

  public:
    List();
    ~List();
    void add(Product*);
    void del(const string&, Product**);
    bool isEmpty();
    void findProduct(const string& name, Product** prod);
    void print() const;

  private:
    Node* head;

};

#endif

