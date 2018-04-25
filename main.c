#include "list.h"

#include <stdbool.h>

/**
 * This file is to check list.h and list.c for part I of the assignment only
 *
 * Do not include it in the submission of part II
 *
 * You are expected to add additional test cases to this file
 * and to run valgrind on the program once you have it working
 */

#define CHECK_STATUS(status, status_enum) if ((status) != (status_enum)) return false;

bool testcase1()
{
    LIST_STATUS status;

    list_element* head = init_list_head();
    head->val = 2;

    //2

    status = insert_head(&head, 1);
    CHECK_STATUS(status, LIST_OKAY);

    //1 2

    status = insert_tail(head, 3);
    CHECK_STATUS(status, LIST_OKAY);

    //1 2 3

    status = clear_list(head);
    CHECK_STATUS(status, LIST_EMPTY);

    return true;
}

bool testcase2()
{
    LIST_STATUS status;

    list_element* head = init_list_head();
    head->val = 2;

    //2

    status = insert_head(&head, 1);
    CHECK_STATUS(status, LIST_OKAY);

    //1 2

    status = pop_head(&head);
    CHECK_STATUS(status, LIST_OKAY);

    //2

    status = pop_tail(head);
    CHECK_STATUS(status, LIST_EMPTY);

    //

    return true;
}

int main()
{
    if(!testcase1())
    {
        puts("Test case1 failed");
    }
    if(!testcase2())
    {
        puts("Test case2 failed");
    }
    puts("All test cases passed");
    return 0;

}
