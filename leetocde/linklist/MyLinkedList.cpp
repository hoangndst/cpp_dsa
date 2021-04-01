#include <bits/stdc++.h>
using namespace std;

class MyLinkedList {
public:
    int data;
    MyLinkedList *next, *head;
    MyLinkedList() {
        next = NULL;
        head = NULL;
    }
    

    int get(int index) {
        MyLinkedList *tmp = head;
        while(tmp) {
            int count = 0;
            if (tmp) {
                if (index == count) {
                    return tmp->data;
                } else {
                    tmp = tmp->next;
                    count++;
                }
            }
        }
        return -1;
    }
    void addAtHead(int val) {
        MyLinkedList *new_node = new MyLinkedList;
        new_node->data = val;
        new_node->next = head;
        head = new_node;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        MyLinkedList *new_node = new MyLinkedList;
        new_node->data = val;
        if (!head) {
            head = new_node;
        } else {
            MyLinkedList *tmp = head;
            while(tmp->next) {
                tmp = tmp->next;
            }
            tmp->next = new_node;
        }
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        MyLinkedList *tmp = head;
        while (index--) {
        
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        
    }


};
