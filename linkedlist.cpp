#include "linkedlist.h"

LinkedList::LinkedList()
    :start(0)
{
    cout << "LinkedList constructed" << endl;
}

LinkedList::~LinkedList()
{
    delete start;
    cout << "LinkedList destructed" << endl;
}

void LinkedList::deleteElement(string &name)
{
    cout << "Deleting " << name << endl;
    Element* tempi = start;
    if(tempi->getName()==name)
    {
        start = tempi->getNext();
        tempi->setNext(0);
        delete tempi;
        return;
    }
    while(tempi->getNext()->getName()!=name)
        tempi = tempi->getNext();
    Element* toDel = tempi->getNext();
    tempi->setNext(tempi->getNext()->getNext());
    toDel->setNext(0);
    delete toDel;

}

void LinkedList::insertNewElement(string &name)
{
    cout << "Inserting " << name << endl;
    Element* element = new Element(name);
    if(start == 0)
    {
        start = element;
        return;
    }
    Element* elementOld = start;

    while(elementOld->getNext()!=0)
    {
        if(elementOld->getNext()->getName().compare(name)>0)
            break;
        else if(elementOld->getNext()->getName().compare(name)==0)
        {
            cout << "Duplicate detected \"" << name << "\" skipping.." << endl;
            return;
        }
        elementOld = elementOld->getNext();
    }
    element->setNext(elementOld->getNext());
    elementOld->setNext(element);
}

void LinkedList::showList()
{
    cout << "Listing" <<endl;
    Element* tempi = LinkedList::start;
    while(tempi!=0)
    {
        cout<< tempi->getName()<<endl;
        tempi = tempi->getNext();
    }
}
