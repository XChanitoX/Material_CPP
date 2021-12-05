#ifndef MATERIAL_CPP_LINKEDLIST_H
#define MATERIAL_CPP_LINKEDLIST_H
#include <iostream>
using namespace std;

struct Node{
    Node* next;
    int data;

    Node(int data_){
        this->data = data_;
        this->next = nullptr;
    }

    void KillSelf(){
        this->next = nullptr;
        delete [] this;
    }

};

class LinkedList{
private:
    Node* head;
    int numberOfNodes;
public:
    LinkedList(){
        this->head = nullptr;
        this->numberOfNodes = 0;
    }

    void push_back(int value){
        Node* temp = head;
        this->numberOfNodes++;
        if(!head)
            this->head = new Node(value);
        else{
            while(temp->next){
                temp = temp->next;
            }
            temp->next = new Node(value);
        }
    }

    void pop_back(){
        Node* temp = head;
        if(!head){
            cout << "List is empty..." << endl;
            return;
        }
        while(temp->next->next){
            temp = temp->next;
        }
        temp->next->KillSelf();
        temp->next = nullptr;
        this->numberOfNodes--;
    }

    void print(){
        Node* temp = head;
        if(!head){
            cout << "List is empty..." << endl;
            return;
        }
        cout << "The List Elements are:" << endl;
        while(temp->next){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }

    int listSize(){
        return this->numberOfNodes;
    }
};

#endif //MATERIAL_CPP_LINKEDLIST_H