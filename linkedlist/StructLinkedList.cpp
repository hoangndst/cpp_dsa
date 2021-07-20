#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    Node *next;
};

void addhead(int value, Node **head) {
    Node *new_head = new Node();
    new_head->value = value;
    new_head->next = *head;
    *head = new_head;
}

void insertAfter(Node *index, int value) {
    if (index == NULL) return;
    Node *new_node = new Node();
    new_node->value = value;
    new_node->next = index->next;
    index->next = new_node;
}

void append(Node **head, int value) {
    Node *new_end = new Node();
    new_end->value = value;
    new_end->next = NULL;
    if (*head == NULL) {
        *head = new_end;
        return;
    }

    Node *tmp = *head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = new_end;
}


void printlist(Node *node) {
    while(node) {
        cout << node->value << " ";
        node = node->next;
    }
}

void delete_key(Node **head, int key) {
    Node *tmp = *head;
    Node *prev = NULL;
    if (*head == NULL) return;
    if (tmp->value == key) {
        *head = tmp->next;
        delete tmp;
        return;
    } else {
        while (tmp->value != key) {
            prev = tmp;
            tmp = tmp->next;
        }
        if (tmp == NULL) return;
        prev->next = tmp->next;
        delete tmp;
    }
}
void delete_pos(Node **head, int pos) {
    Node *tmp = *head;
    Node *prev = NULL;
    if (tmp == NULL) return;
    if (pos == 0) {
        *head = tmp->next;
        delete tmp;
        return;
    }
    pos = pos - 1;
    for (int i = 0; i < pos; i++) {
        tmp = tmp->next;
    }
    Node *aft = tmp->next->next;
    delete tmp->next;
    tmp->next = aft;
}

void delete_list (Node **head) {
    Node *curr = *head;
    Node *next = NULL;
    while (curr) {
        next = curr->next;
        delete curr;
        curr = next;
    }
    *head = NULL;
}

int list_len(Node *head) {
    int len = 0;
    Node *tmp = head;
    while (tmp) {
        tmp = tmp->next;
        len++;
    }
    return len;
}

bool search(Node *head, int value) {
    Node *tmp = head;
    while(tmp) {
        if (tmp->value == value) return true;
        tmp = tmp->next;
    }
    return false;
}

int getNth(Node *head, int index) {
    Node *tmp = head;
    int len = list_len(head);
    if (index > len) return -1;
    while (index--) {
        tmp = tmp->next;
    }
    return tmp->value;
}

int countfrom(Node *index) {
    int res = 1;
    Node *tmp = index;
    while (tmp->next != index) {
        res++;
        tmp = tmp->next;
    }
    return res;
}

int countLoop (Node *head) {
    Node *fast = head;
    Node *slow = head;
    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) {
            return countfrom(slow);
        }
    }
    return 0;
}

int main() {
    
    Node *head = NULL;
    append(&head, 0); // 0
    append(&head, 2); // 0 2
    insertAfter(head, 1); // 0 1 2
    append(&head, 3); // 0 1 2 3
    append(&head, 4);
    append(&head, 2);
    cout << list_len(head);
    cout << getNth(head, 2) << endl;
    cout << endl;
    printlist(head);
    return 0;
}
