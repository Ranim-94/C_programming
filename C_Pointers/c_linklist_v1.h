#ifndef LINK_LIST_V1
#define LINK_LIST_V1

#include<stdio.h>

struct node
{
    int data;
    struct node* next;
    
};

// instead of typing struct node we use only Node
typedef struct node Node;

void link_list_add(int data);

void print_link_list(int data);

#endif // End LINK_LIST_V1