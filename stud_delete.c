#include "stud_header.h"

void delete_node(int roll) {
    ST *temp = hptr, *prev = NULL;
    
    if (temp != NULL && temp->roll_no == roll) {
        hptr = temp->next;
        free(temp);
        printf("Record with Roll No %d deleted successfully.\n", roll);
        return;
    }
    while (temp != NULL && temp->roll_no != roll) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Record not found.\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Record with Roll No %d deleted successfully.\n", roll);
}

void stud_delete(void) {
    if (hptr == NULL) {
        printf("List is empty! Nothing to delete.\n");
        return;
    }
    char choice;
    printf("\nR/r : Delete using Roll Number\n");
    printf("N/n : Delete using Name\n\n");
    printf("Enter Your Choice: ");
    scanf(" %c", &choice);

    if (choice == 'R' || choice == 'r') {
        int roll;
        printf("Enter Roll Number to delete: ");
        scanf("%d", &roll);
        delete_node(roll);
    } 
    else if (choice == 'N' || choice == 'n') {
        char search_name[100];
        printf("Enter Name to delete: ");
        scanf(" %[^\n]", search_name);

        // Display matching rows first
        printf("\nMatching Records:\n");
        printf("--------------------------------------\n");
        printf("Roll No     Name         Percentage\n");
        printf("--------------------------------------\n");
        ST *temp = hptr;
        int count = 0;
        while (temp != NULL) {
            if (strcmp(temp->name, search_name) == 0) {
                printf("%-12d%-13s%.1f\n", temp->roll_no, temp->name, temp->percentage);
                count++;
            }
            temp = temp->next;
        }
        printf("--------------------------------------\n");

        if (count == 0) {
            printf("No matching records found.\n");
        } else {
            int roll;
            printf("Enter the specific Roll Number to delete from above: ");
            scanf("%d", &roll);
            delete_node(roll);
        }
    } else {
        printf("Invalid selection.\n");
    }
}

