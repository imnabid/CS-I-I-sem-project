//Program starts from here

//importing all header files required for the program.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>



// Defining a structure using typedef that makes student as a new data type for the structure s1.
typedef struct {

// 
    char name[30], address[30], dob[20], level[30];
    int id;
    float marks[7];


}student;

// defining student struct s1 for global use
student s1;

char comma_replacer(char s[50]){

    for (int i = 0; i < strlen(s); ++i)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
    }

    return s[50];

}


void input_details(){
    
    // Taking name of the student s1.
    printf("Student's Full Name: ");
    gets(s1.name);  // read string    
    

    // Taking address of the student s1.
    printf("Student's Address:");
    gets(s1.address);  // read string    
    s1.address[30] = comma_replacer(s1.address);


    // Taking birthdate of the student s1.
    printf("Date of birth dd-mm-yyyy: ");
    gets(s1.dob);  // read string

    // Taking name of the student s1.
    printf("Level:");
    gets(s1.level);  // read string
    
    // Taking ID of the student s1.
    printf("ID: ");
    scanf("%d",&s1.id);
    
    // Taking individual subject marks of the student s1.
    printf("Student's marks in:\n");
    char subjects[7][10] = {"MATH101","PHYS101","CHEM101","COMP102","ENGG111","ENGG101","EDRG101"};
    for(int i=0; i<7; i++){
        printf("%s: ",subjects[i]);
        scanf("%f",&s1.marks[i]);
    }
    
}
