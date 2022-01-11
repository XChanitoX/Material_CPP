#include <iostream>
#include "BST.h"
using namespace std;

int main(){
    auto* arbol = new BST<int>();
    arbol->insert(10);
    arbol->insert(11);
    arbol->insert(9);
    arbol->insert(70);
    arbol->insert(1);
    arbol->insert(4);
    arbol->BreadthFirstSearch();
    return 0;
}