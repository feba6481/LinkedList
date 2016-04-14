#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>

using namespace std;

class Element
{
public:
    Element(string &name);
    ~Element();
    Element* getNext();
    void setNext(Element* nextElement);
    string getName();
private:
    string theName;
    Element* next;
};

#endif // ELEMENT_H
