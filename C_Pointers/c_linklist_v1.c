#include"c_linklist_v1.h"
#include<stdlib.h>

void link_list_add(int data){

// 1st step: we need to create some node in the 
Node* new_node = malloc(sizeof(Node));

/*
    malloc take as argument number and return it a data in terms of byte on the heap
    if we use malloc(5) it will return 5 byte on the heap
*/

// adding the data to this node
new_node->data = data;

// making this node pointing to null
new_node->next = NULL;


}// End function link_list_add()


// =================== Some Explanation ==================

/*
 key elements to implement the function link_list_add()

1) we use head and tail pointers to point at the starting node
    - starting node is the only node at the begining

2) the start node is pointing to NULL at 1st
    - we will use this NULL pointer later

3) to add some node
    - we add some value
    - then the tail will point to this 2nd node
    - and this node will point to NULL (always the last node points to NULL)


4) if we want to add some 3rd node
    - we create the node
    - we move the tail to this 3rd node
    - this node will now point to NULL

*/