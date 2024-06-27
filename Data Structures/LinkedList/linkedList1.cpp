/*
LinkedList1 Objectives:
1. Able to create a Linked List
2. Able to add Node to Head

Here we are going to create a empty list and add to head data "1", "2", and "3".
So the Expected List would be 3->2->1->nullptr(NULL).
*/

#include <iostream>
using namespace std;

class LinkedList {

    private: int data; LinkedList* next; LinkedList* head;

    public: LinkedList() {
        head = nullptr;
    }

    public: LinkedList(int x) {
        data = x;
        next = nullptr;
    }

    public: void printList() {
        LinkedList* current = head;
        while( current != nullptr) {
            cout << "Data is: " << current->data << endl;
            current = current->next;
        }
    }

    public: void addToHead(int x) {
        LinkedList* newHead = new LinkedList(x);
        newHead->next = head;
        head = newHead;
    } 
};

int main() {
    LinkedList list = LinkedList();
    list.addToHead(1);
    list.addToHead(2);
    list.addToHead(3);
    list.printList();
    return 0;
}
