#include "element.h"

Element::Element(string &name)
    :theName(name),
      next(0)

{
    cout << "Elemented \"" << name << "\" constructed" << endl;
}

Element* Element::getNext()
{
    return next;
}

Element::~Element()
{
    cout << "Element \"" << theName << "\" destructed" << endl;
    delete next;
}

void Element::setNext(Element *nextElement)
{
    next = nextElement;
}

string Element::getName()
{
    return theName;
}
