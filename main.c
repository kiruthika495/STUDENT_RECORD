#include"stud_header.h"

ST *hptr=NULL;

void free_list() {
    ST *temp;
    while (hptr != NULL) {
        temp = hptr;
        hptr = hptr->next;
        free(temp);
    }
}


int main()
{
	char choice,exit_choice,ch;
	while(1)
	{

	printf("\t|-------------------------------------|\n");
	printf("\t|********STUDENT RECORD MENU**********|\n");
	printf("\t|-------------------------------------|\n");

	printf("\n");

	printf("\t| A/a: Add New Record                 |\n");
	printf("\t| D/d: Delete New Record              |\n");
	printf("\t| S/s: Show the list		      |\n");
	printf("\t| M/m: Modify a Record                |\n");
	printf("\t| V/v: Save the list                  |\n");
	printf("\t| T/t: Sort the list                  |\n");
	printf("\t| E/e: Exit                           |\n");
	printf("\t|-------------------------------------|\n");


	printf("Enter the choice\n");
	scanf(" %c",&choice);
	switch(choice)
	{
		case 'a':
		case 'A':
			do
			{
			printf("Add student\n");
			stud_add();
			printf("Do you want to add another record\n");
			scanf(" %c", &ch);
			}while(ch=='y');

			break;
           
            case 'D':
	    case 'd':
		       	stud_delete(); 
			break;
            case 'S':
	    case 's':
		       	stud_show();
		       	break;
            case 'M':
	    case 'm':
		       	stud_modify();
		       	break;
            case 'V':
	    case 'v': 
			stud_save(); 
			break;
            case 'T':
	    case 't':
		       	stud_sort();
		       	break;
            case 'E':
	    case 'e':
                printf("\nS/s : Save and Exit\n");
                printf("E/e : Exit Without Saving\n\n");
                printf("Enter Your Choice: ");
                scanf(" %c", &exit_choice);
                
                if (exit_choice == 'S' || exit_choice == 's') {
                    stud_save();
                }
                free_list();
                printf("Exiting program.\n");
                return 0;
       //     default:
         //       printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
	





