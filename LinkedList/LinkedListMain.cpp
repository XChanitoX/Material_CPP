#include "LinkedList.h"

int main(){
    auto *List = new LinkedList();
    List->push_back(1);
    List->push_back(2);
    List->push_back(3);
    List->push_back(4);
    List->push_back(5);
    List->push_back(6);
    List->pop_back();
    List->print();
    cout << List->listSize() << endl;
    return 0;
}