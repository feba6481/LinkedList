#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "element.h"

using namespace std;

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    void addNewElement(string &name);
    void showList();
    void insert(string &name);
    void deleteElement(string &name);
    void insertNewElement(string &name);
private:
    Element* start;
    Element* currentPosition;
};

#endif // LINKEDLIST_H
