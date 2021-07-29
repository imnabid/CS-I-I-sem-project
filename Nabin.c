#include <stdio.h>

// structure student
typedef struct {
    char name[20], address[20], dob[20], department[30];
    int id;
    float marks[6];


}student;

student input_details(){
    student s1;
    // Name
    printf("Student's Full Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);  // read string
    
    // Address
    printf("Student's Address:");
    fgets(s1.address, sizeof(s1.address), stdin);  // read string
   
    // dob
    printf("Date of birth dd-mm-yyyy: ");
    fgets(s1.dob, sizeof(s1.dob), stdin);  // read string
   
    //Department
    printf("Department:");
    fgets(s1.department, sizeof(s1.department), stdin);  // read string
    
    // id
    printf("ID: ");
    scanf("%d",&s1.id);
    
    // Marks
    printf("Student's marks in:\n");
    char subjects[6][10] = {"MATH101","COMP102","ENGG111","EDRG101","PHY101","CHEM101"};
    for(int i=0; i<6; i++){
        printf("%s: ",subjects[i]);
        scanf("%f",&s1.marks[i]);
    }
    return s1;
}
int main(){
    input_details();
    return 0;
}