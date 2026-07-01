#include "stud_header.h"

void stud_save(void) {
    FILE *fp = fopen("student.dat", "wb");
    if (!fp) {
        printf("Error \n");
        return;
    }
    ST *temp = hptr;
    while (temp != NULL) {
        fwrite(temp, sizeof(ST) - sizeof(ST*), 1, fp); // 
        temp = temp->next;
    }
    fclose(fp);
    printf("Database updated and saved to 'student.dat' successfully.\n");
}


void stud_load(void) {
    FILE *fp = fopen("student.dat", "rb");
    if (!fp) return; 

    ST temp_stud;
    while (fread(&temp_stud, sizeof(ST) - sizeof(ST *), 1, fp) == 1) {
        ST *new_node = (ST *)malloc(sizeof(ST));
        if (!new_node)
	       	break;
        new_node->roll_no = temp_stud.roll_no;
        strcpy(new_node->name, temp_stud.name);
        new_node->percentage = temp_stud.percentage;
        new_node->next = NULL;

        if (hptr == NULL) {
            hptr = new_node;
        } else {
            ST *t = hptr;
            while (t->next != NULL) t = t->next;
            t->next = new_node;
        }
    }
    fclose(fp);
}
