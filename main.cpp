#include <iostream>
#include "linkedlist.h"

using namespace std;

int main()
{
    LinkedList* ll = new LinkedList();
    string x = "a";
    ll->insertNewElement(x);
    ll->insertNewElement((x="h"));
    ll->insertNewElement((x="f"));
    ll->insertNewElement((x="b"));
    ll->insertNewElement((x="j"));
    ll->insertNewElement((x="z"));
    ll->insertNewElement((x="b"));
    ll->insertNewElement((x="c"));

    ll->showList();
    ll->deleteElement((x="c"));
    ll->showList();
    delete ll;
    return 0;
}
