exe: stud_add.o stud_delete.o stud_show.o stud_modify.o stud_save.o stud_sort.o main.o
	cc stud_add.c stud_delete.c stud_show.c stud_modify.c stud_save.c stud_sort.c main.c -o exe 

main.o:main.c
	cc -c main.c

stud_add.o:stud_add.c
	cc -c stud_add.c

stud_modify.o:stud_modify.c
	cc -c stud_modify.c

stud_sort.o:stud_sort.c
	cc -c stud_sort.c

stud_save.o:stud_save.c
	cc -c stud_save.c

stud_delete.o:stud_delete.c
	cc -c stud_delete.c

stud_show.o:stud_show.c
	cc -c stud_show.c
