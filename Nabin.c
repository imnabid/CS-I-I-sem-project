#include <stdio.h>

// structure student
typedef struct {
    char name[30], address[30], dob[20], level[30];
    int id;
    float marks[7];


}student;

// defining student struct s1 for global use
student s1;

student input_details(){
    
    // Name
    printf("Student's Full Name: ");
    gets(s1.name);  // read string
    
    
    // dob
    printf("Date of birth dd-mm-yyyy: ");
    gets(s1.dob);  // read string
    
    // Address
    printf("Student's Address:");
    gets(s1.address);  // read string
    

    //Department
    printf("Level:");
    gets(s1.level);  // read string
    
    // id
    printf("ID: ");
    scanf("%d",&s1.id);
    
    // Marks
    printf("Student's marks in:\n");
    char subjects[7][10] = {"MATH101","PHYS101","CHEM101","COMP102","ENGG111","ENGG101","EDRG101"};
    for(int i=0; i<7; i++){
        printf("%s: ",subjects[i]);
        scanf("%f",&s1.marks[i]);
    }
    return s1;
}
