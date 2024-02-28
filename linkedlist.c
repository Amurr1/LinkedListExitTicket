#include <stdio.h>

struct node {
    int value;
    struct node* next;
};

// 02/28 exit ticket
void printLinkedList(node* head) {
    //TODO: print the values in the linked list, e.g. 0->1->2
}

int main(int argc, char* argv[]) {
    struct node* head = NULL;

    head = malloc(sizeof(node));
    head->value = 1; 
    head->next = NULL;    

    //TODO: add a node with value 2 at the end of the linked list

    //TODO: add a node with value 0 at the beginning of the linked list 
} 
