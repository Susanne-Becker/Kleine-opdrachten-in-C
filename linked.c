#include <stdio.h>
#include <stdlib.h>

struct node {

    int number;
    struct node* next;
};

struct node;


void insert(int number);
void print_list();

// pointer to the head node
struct node *head = NULL;


int main(void) 
{
    int array[] = {1, 2};
    int n = sizeof(array)/sizeof(int);

    for (int i = 0; i < n; i++) {
        insert(array[i]);
    }

    print_list();
}

void insert(int number) {

    struct node *temp = malloc(sizeof(struct node));
    
    if (temp == NULL)
    {
        free(temp);
    }

    temp->number = 2;
    temp->next = NULL;
    head = temp;
    
    temp = malloc(sizeof(struct node));

    temp->number = 3;
    temp->next = NULL;
    head->next = temp;
    
    temp = malloc(sizeof(struct node));

    temp->number = 4;
    temp->next = NULL;
    head->next->next = temp;
    
    temp = malloc(sizeof(struct node));

    temp->number = 5;
    temp->next = NULL;
    head->next->next->next = temp;
}

void print_list() {
    struct node* temp = head;
    printf("[");

    for(struct node *tmpnext = temp; tmpnext != NULL; tmpnext = tmpnext->next)
    {
        printf("%i ", tmpnext->number);
  
    }
    printf("]\n");
    
    while (head != NULL)
    {
        struct node *tmpnext = head->next;
        free(head);
        head = tmpnext;
    }
}