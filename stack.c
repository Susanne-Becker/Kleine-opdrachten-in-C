#include <stdio.h>
#include <stdlib.h>


// number node type
typedef struct node
{
    int number;
    struct node* next;
} node;

// root node type
typedef struct stack
{
    struct node* root;
    int size;
} stack;


// prototypes
struct stack* create();
void push(struct stack* stack, int number);
int pop(struct stack* stack);
void destroy(struct stack* stack);
void print_stack(struct stack* stack);


int main(void)
{
    // source array for testing
    int array[] = { 4, 5, 6};
    int n = sizeof(array) / sizeof(int);

    // create a blank stack
    struct stack *stack = create();

    // fill stack from source array
    for (int i = 0; i < n; i++)
    {
        push(stack, array[i]);
    }

    print_stack(stack);

    // remove one element (should be the one that's been added most recently)
    int num = pop(stack);

    printf("removed with pop: %d\n", num);
    printf("size is now: %d\n", stack->size);

    destroy(stack);
}


/**
 * create() should create (malloc!) a blank stack-type node and return a pointer to it.
 */
struct stack* create()
{
    //the stack is completely valid: it does not contain any elements
    struct stack* stack = malloc(sizeof(struct stack));
    stack->root = NULL;
    stack->size = 0;

    return (stack);
}

/**
 * push() inserts value into the stack.
 */
void push(struct stack* stack, int number)
{
    node *newNode = malloc(sizeof(node));

    if (newNode == NULL)
    {
        printf("Error");
    }
    
    //insert value into stack
    newNode->number = number;
    newNode->next = stack->root;
    stack->root = newNode;
    
    //calculate size
    stack->size++;
}

/**
 * pop() which removes the last-inserted value from the stack.
 */
int pop(struct stack* stack)
{
    if (stack->root == NULL)
    {
        printf("Stack is empty");
    }

    //remove last-in from stack (lifo) and return removed value
    node *removed = stack->root;
    int removed_value = stack->root->number;
    stack->root = removed->next;
    stack->size--;

    free(removed);
    return removed_value;
}

/**
 * destroy() removes all items in the stack, and the stack itself.
 */
void destroy(struct stack* stack)
{
    //free stack and value in it
    free(stack);
    stack = NULL;
}

/**
 * print_stack() should take a stack and print the values in it.
 */
void print_stack(struct stack* stack)
{
    //print all values in stack
    node *print = stack->root->next;

    while (print != NULL)
    {
        printf("%i\n", print->number);
        print = print->next;
    }
}