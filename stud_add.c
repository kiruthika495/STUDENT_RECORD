#include"stud_header.h"


void stud_add(void) {
    ST *new_node = (ST *)malloc(sizeof(ST));
    if (!new_node) {
        printf("Memory allocation failed!\n");
        return;
    }

    
    int target_roll = 1;
    while (1) {
        ST *temp = hptr;
        int found = 0;
        while (temp != NULL) {
            if (temp->roll_no == target_roll) {
                found = 1;
                break;
            }
            temp = temp->next;
        }
        if (!found) {
            break; 
        }
        target_roll++;
    }

    new_node->roll_no = target_roll;

    printf("Enter Student Name: ");
    scanf(" %[^\n]", new_node->name); 
    printf("Enter Percentage: ");
    scanf("%f", &new_node->percentage);
    new_node->next = NULL;

    
    if (hptr == NULL) {
        hptr = new_node;
    } else {
        ST *temp = hptr;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    printf("Record Added Successfully! Assigned Roll No: %d\n", new_node->roll_no);
}
