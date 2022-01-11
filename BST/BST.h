#ifndef MATERIAL_CPP_BST_H
#define MATERIAL_CPP_BST_H
#include <queue>
#include <iostream>
using namespace std;

template <typename T>
struct NodeBST{
    NodeBST<T>* right;
    NodeBST<T>* left;
    T data;

    NodeBST(){
        this->right = nullptr;
        this->left = nullptr;
    }

    NodeBST(T value){
        this->right = nullptr;
        this->left = nullptr;
        this->data = value;
    }

    void KillSelf(){
        if(right)
            this->right->KillSelf();
        if(left)
            this->left->KillSelf();
        this->right = nullptr;
        this->left = nullptr;
        delete [] this;
    }
};

template <typename T>
class BST{
private:
    NodeBST<T>* root;
public:
    BST(){
        this->root = nullptr;
    }

    void insert(T value){
        if(!root)
            this->root = new NodeBST<T>(value);
        else{
            NodeBST<T>* temp = root;
            while(temp->right && temp->left){
                if(temp->data < value && temp->right)
                    temp = temp->right;
                if(temp->data > value && temp->left)
                    temp = temp->left;
            }
            if(temp->data > value)
                temp->left = new NodeBST<T>(value);
            if(temp->data < value)
                temp->right = new NodeBST<T>(value);
        }
    }

    void BreadthFirstSearch(){
        queue<NodeBST<T>*> cola;
        cola.push(this->root);
        while(!cola.empty()){
            NodeBST<T>* temp = cola.front();
            cola.pop();
            cout << temp->data << " ";
            if (temp->left)
                cola.push(temp->left);
            if (temp->right)
                cola.push(temp->right);
        }
    }

};

#endif //MATERIAL_CPP_BST_H