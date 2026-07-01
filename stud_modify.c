#include"stud_header.h"

void perform_modification(ST *node) {
    char choice;
    printf("\nModify Field:\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n\n");
    printf("Enter Your Choice: ");
    scanf(" %c", &choice);

    if (choice == 'N' || choice == 'n') {
        printf("Enter New Name: ");
        scanf(" %[^\n]", node->name);
        printf("Name modified successfully.\n");
    } else if (choice == 'P' || choice == 'p') {
        printf("Enter New Percentage: ");
        scanf("%f", &node->percentage);
        printf("Percentage modified successfully.\n");
    } else {
        printf("Invalid target choice.\n");
    }
}


void stud_modify(void) {
    if (hptr == NULL) {
        printf("List is empty!\n");
        return;
    }
    char choice;
    printf("\nStep 1: Search Record\n");
    printf("R/r : Roll Number\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n\n");
    printf("Enter Your Choice: ");
    scanf(" %c", &choice);

    if (choice == 'R' || choice == 'r') {
        int roll;
        printf("Enter Roll Number: ");
        scanf("%d", &roll);
        ST *temp = hptr;
        while (temp != NULL && temp->roll_no != roll) temp = temp->next;
        if (temp) perform_modification(temp);
        else printf("Record not found.\n");
    } 


    

     else if (choice == 'N' || choice == 'n' || choice == 'P' || choice == 'p') {
        char s_name[100]; float s_pct = -1.0;
        if (choice == 'N' || choice == 'n') {
            printf("Enter Name: "); 
	    scanf(" %[^\n]", s_name);
        } else {
            printf("Enter Percentage: ");
	    scanf("%f", &s_pct);
        }

        printf("\nMatching Records:\n");
        printf("--------------------------------------\n");
        ST *temp = hptr; int count = 0;
        while (temp != NULL) {
            if (((choice == 'N' || choice == 'n') && strcmp(temp->name, s_name) == 0) ||
                ((choice == 'P' || choice == 'p') && temp->percentage == s_pct)) {
                printf("Roll No: %d | Name: %s | Pct: %.1f\n", temp->roll_no, temp->name, temp->percentage);
                count++;
            }
            temp = temp->next;
        }
        if (count == 0) {
            printf("No records matched.\n");
            return;
        }
        int roll;
        printf("\nEnter Roll Number to modify from matches: ");
        scanf("%d", &roll);
        temp = hptr;
        while (temp != NULL && temp->roll_no != roll) 
		temp = temp->next;
        if (temp)
	       	perform_modification(temp);
        else
	       	printf("Invalid Roll Selection.\n");
    }
}

