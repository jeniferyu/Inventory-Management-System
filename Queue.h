#ifndef QUEUE_H
#define QUEUE_H

#include "WHLocation.h"
#include "Location.h"
#include <iostream>
using namespace std;

class Queue
{
  class Node
  {
    public:
      WHLocation* data;
      Node*    next;
  };

  public:
    Queue();
    ~Queue();
    bool isEmpty();
    void peekFirst(WHLocation**);
    void popFirst(WHLocation**);
    void addLast(WHLocation*);
    void print() const;

  private:
    Node* head;
    Node* tail;

};

#endif
