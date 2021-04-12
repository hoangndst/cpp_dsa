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
        int count = 0;
        while(tmp) {
            if (index == count) {
                return tmp->data;
            } else {
                tmp = tmp->next;
                count++;
            }
        }
        return -1;
    }
    void addAtHead(int val) {
        MyLinkedList *tmp = new MyLinkedList();
        tmp->data = val;
        tmp->next = head;
        head = tmp;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        MyLinkedList *new_node = new MyLinkedList();
        new_node->data = val;
        if (!head) head = new_node;
        else {
            MyLinkedList *tmp = head;
            while(tmp) {
                tmp = tmp->next;
            }
            tmp->next = new_node;
        }
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        int len = 0;
        int count = 0;
        MyLinkedList *tmp = head;
        while(tmp) {
            tmp = tmp->next;
            len++;
        }
        if (index > len) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == len) {
            addAtTail(val);
            return;
        }
        tmp = head;
        while(tmp && count < len - 1) {
            tmp = tmp->next;
            count++;
        }
        MyLinkedList *new_node = new MyLinkedList();
        new_node->data = val;
        MyLinkedList *end = tmp->next;
        tmp->next = new_node;
        new_node->next = end;
    }
    
    void deleteAtIndex(int index) {
        int len = 0;
        int count = 0;
        MyLinkedList *tmp = head;
        while(tmp) {
            tmp = tmp->next;
            len++;
        }
        if (index >= len) return;
        if (index == 0) {
            if (head) {
                head->next = head;
            }
            return;
        }
        tmp = head;
        while (tmp && count < index - 1) {
            tmp = tmp->next;
            count++;
        }
        tmp->next = tmp->next->next;

    }


};






int main() {




    return 0;
}
