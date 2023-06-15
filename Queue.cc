#include <iostream>
#include <string>
using namespace std;

#include "Queue.h"

Queue::Queue() : head(NULL) , tail(NULL) { }

Queue::~Queue()
{
  Node* currNode;
  Node* nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
}

bool Queue::isEmpty() 
{
    if (head == NULL)
        return true;
    else
        return false;
}

void Queue::peekFirst(WHLocation** loc)
{
    if (head!= NULL)
        *loc = head->data;
    else
        *loc = NULL;
}

void Queue::popFirst(WHLocation** loc)
{
    if (head == NULL)
    {
        *loc = NULL;
    }
    else
    {
        *loc = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        
    }
        
}

void Queue::addLast(WHLocation* loc)
{
    Node* newNode;
    Node* currNode;
    Node* prevNode;

    newNode = new Node;
    newNode->data = loc;
    newNode->next = NULL;


    if (head == NULL)
        head = tail = newNode;
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}



void Queue::print() const
{
  Node* currNode = head;

  while (currNode->next != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }
  currNode->data->print();
}

