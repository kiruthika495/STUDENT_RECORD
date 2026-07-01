#include"stud_header.h"


void swap_data(ST *a, ST *b) {
    int t_roll = a->roll_no;
    a->roll_no = b->roll_no;
    b->roll_no = t_roll;

    char t_name[100];
    strcpy(t_name, a->name);
    strcpy(a->name, b->name);
    strcpy(b->name, t_name);

    float t_pct = a->percentage;
    a->percentage = b->percentage;
    b->percentage = t_pct;
}

void stud_sort(void) {
    if (hptr == NULL || hptr->next == NULL) {
        printf("Not enough records present to sort.\n");
        return;
    }
    char choice;
    printf("\nN/n : Sort by Name\n");
    printf("R/r : Sort by roll_no\n");
    printf("P/p : Sort by Percentage\n\n");
    printf("Enter Your Choice: ");
    scanf(" %c", &choice);

    int swapped;
    ST *ptr1;
    ST *lptr = NULL;

    do {
        swapped = 0;
        ptr1 = hptr;

        while (ptr1->next != lptr) {
            int condition = 0;
            if ((choice == 'N' || choice == 'n') && strcmp(ptr1->name, ptr1->next->name) > 0) {
                condition = 1;
            }
	    else if ((choice == 'P' || choice == 'p') && ptr1->percentage > ptr1->next->percentage) {
                condition = 1;
            }
	    else if ((choice =='R' || choice == 'r') &&  (ptr1->roll_no > ptr1->next->roll_no)){
			    condition=1;
	     }

            if (condition) {
                swap_data(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);

    printf("List sorted successfully! \n");
}
