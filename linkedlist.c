#include <stdio.h>

struct node {
    int value;
    struct node* next;
};

// 02/28 exit ticket
void printLinkedList(node* head) {
    //TODO: print the values in the linked list, e.g. 0->1->2
    node* current = head;
    while (current != NULL) {
        printf("%d", current->value);
        if (current->next != NULL) {
            printf("->");
        }
        current = current->next;
    }
}

int main(int argc, char* argv[]) {
    struct node* head = NULL;

    head = malloc(sizeof(node));
    head->value = 1; 
    head->next = NULL;    

    //TODO: add a node with value 2 at the end of the linked list
    head->next = malloc(sizeof(node));
    head->next->value = 2;
    head->next->next = NULL;

    //TODO: add a node with value 0 at the beginning of the linked list 
    struct node* temp = malloc(sizeof(node));
    temp->value = 0;
    temp->next = head;
    head = temp;
    free(temp);
} 
