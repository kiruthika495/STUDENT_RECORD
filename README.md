
                              STUDENT RECORD MANAGEMENT SYSTEM
                              
PROBLEM STATEMENT:
          Maintaining student records manually is time-consuming and inefficient, especially when handling a large number of students. It is also prone to human errors and makes searching, updating, and organizing records difficult.
            
SOLUTION:
          To overcome these issues, I developed a Student Record Management System in C. This application digitally manages student records, reducing manual effort and saving time while providing an easy-to-use menu-driven interface.
            
FEATURES:
Add Student Record:

    .Accepts student details from the user.
    .Automatically generates the next available roll number.
    .After adding a record, the user is asked whether to add another student.

Show Records:
    .Displays all student records in a well-formatted table for easy viewing.

Delete Record:
    .Records can be deleted using either the student's name or percentage.
    .If multiple matching records are found, the program displays all matching records and asks for confirmation before deletion to prevent accidental data loss.

Sort Records:
The records can be sorted based on:
  .Roll Number
  .Name
  .Marks/Percentage

Modify Record:
  .Records can be searched using Roll Number, Name, or Percentage.
  .If multiple matching records are found, the program requests confirmation before modifying the selected record.
    
Save Records:
  .Stores all student records in a file, allowing the data to be accessed later.

Exit:
    Provides two options:
        .Save records and exit.
        .Exit without saving.

Technologies Used:
    Programming Language: C
    Data Structure: Singly Linked List
    File Handling: Text/Binary File Storage
    
Concepts: Dynamic Memory Allocation, Functions, Menu-Driven Programming, Sorting, Searching, and File Operations

Result:
    This project demonstrates how linked lists and file handling can be used to build an efficient student record management application. It simplifies record maintenance, reduces manual work, and improves data organization.
