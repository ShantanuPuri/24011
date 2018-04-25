#include "list.h"

/**
 * @brief Inits head
 * 
 * @return New head node (initialize fields to 0 or NULL)
 */

struct list_element* init_list_head()
{
    return NULL;
}

/**
 * @brief Inserts a node at the head ([new_node] -> [head])
 * 
 * @param head Address of head node
 * @param val Value of new node
 *
 * @return LIST_STATUS to indicate if the function successfully executed (LIST_OKAY) or LIST_HEAD_NULL if the head is NULL
 */

LIST_STATUS insert_head(struct list_element** head, int val)
{
    return LIST_OKAY;
}

/**
 * @brief Inserts a node at the head ([head] -> ... -> [new_node])
 * 
 * @param head Head node
 * @param val Value of new node
 *
 * @return LIST_STATUS to indicate if the function successfully executed (LIST_OKAY) or LIST_HEAD_NULL if the head is NULL

 */

LIST_STATUS insert_tail(struct list_element* head, int val)
{
    return LIST_OKAY;
}

/**
 * @brief Gets the last element
 * 
 * @param head Head node
 * @param tail Tail node to be populated
 *
 * @return LIST_STATUS to indicate if the function successfully executed (LIST_OKAY, LIST_EMPTY, LIST_HEAD_NULL)
 */

LIST_STATUS peek_tail(struct list_element* head, struct list_element** tail)
{
    return LIST_OKAY;
}

/**
 * @brief Pops a node at the head and sets the next node to be head ([xxx-head-xxx] -x> [new_head])
 * 
 * @param head Address of head node
 *
 * @return LIST_STATUS to indicate if the function successfully executed (LIST_OKAY, LIST_EMPTY, LIST_HEAD_NULL)

 */

LIST_STATUS pop_head(struct list_element** head)
{
    return LIST_OKAY;
}

/**
 * @brief Pops a node at the tail and updates the previous node before the tail ([head] -> ... -x> [xxx-node-xxx])
 * 
 * @param head Head node
 *
 * @return LIST_STATUS to indicate if the function successfully executed (LIST_OKAY, LIST_EMPTY, LIST_HEAD_NULL)
 */

LIST_STATUS pop_tail(struct list_element* head)
{
    return LIST_OKAY;
}

/**
 * @brief Deletes the first element containing val and fixes the linked list ([head] -> ... -x> [xxx-node-xxx] -x> ...)
 * 
 * @param head Head node
 *
 * @return LIST_STATUS to indicate if the function successfully executed (LIST_OKAY, LIST_ELEMENT_NOT_FOUND, LIST_HEAD_NULL)
 */

LIST_STATUS delete_element(struct list_element** head, int val)
{
    return LIST_OKAY; 
}

/**
 * @brief Clears all the elements ihe linked list including the head
 * 
 * @param head Head node
 *
 * @return LIST_STATUS to indicate if the function successfully executed (LIST_EMPTY, LIST_HEAD_NULL)
 */

LIST_STATUS clear_list(struct list_element* head)
{
    return LIST_OKAY;
}

/**
 * @brief Converts a list status to a string
 * 
 * @param status List status
 *
 * @return string representation of the list status
 */

const char* convert_list_status_to_enum(LIST_STATUS status)
{
    return NULL;
}

/**
 * @brief Prints all the strings to screen and line starts with "List: " and ends with a newline
 * So, for example, if the list contains 2, 3, 6, print on the screen:
 * "List: 2 3 6"
 * 
 * If the head is null just print out "List: "
 * 
 * @param head
 *
 * @return void 
 */

void print_list(struct list_element* head)
{

}



