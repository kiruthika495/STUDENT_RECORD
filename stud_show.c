#include "stud_header.h"

void stud_show(void) {
    if (hptr == NULL) {
        printf("\nNo Records Found\n");
        return;
    }
    printf("\n--------------------------------------\n");
    printf("Roll No\t\tName\t\tPercentage\n");
    printf("--------------------------------------\n");
    
    ST *temp = hptr;
    while (temp != NULL) {
        printf("%-d\t\t%-s\t\t%.f\n",temp->roll_no,temp->name,temp->percentage);
        temp = temp->next;
    }
    printf("--------------------------------------\n");
}
