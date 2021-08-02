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
    fgets(s1.name, sizeof(s1.name), stdin);  // read string
    
    // dob
    printf("Date of birth dd-mm-yyyy: ");
    fgets(s1.dob, sizeof(s1.dob), stdin);  // read string
    
    // Address
    printf("Student's Address:");
    fgets(s1.address, sizeof(s1.address), stdin);  // read string
    

    //Department
    printf("Level:");
    fgets(s1.level, sizeof(s1.level), stdin);  // read string
    
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
