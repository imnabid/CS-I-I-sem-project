#include "Input.c"

// Defining a structure using typedef that makes result as a new data type for the structure r1.
typedef struct{
    float gpa[7],CGPA,TGPA[7],sumTGPA;
    char *grade[7];
    
} result;
// Here result r1 has global scope.
result r1;

//Declaring and defining a function named calculation that is a function with argument but no return value.

void calculation(student s1){

    float credit[7] = {3,3,3,3,3,2,2};
    float tCredit = 19,sumTGPA=0;
    int i=0;
    for(i=0;i<7;i++){
        //else-if ladder to compute gpa and grade for each subject.
        if(s1.marks[i]>=80 && s1.marks[i]<=100){
            r1.gpa[i] = 4.00;
            r1.grade[i] = "A ";
            
        }
        else if(s1.marks[i]>=75 && s1.marks[i]<80){
            r1.gpa[i] = 3.70;
            r1.grade[i] = "A-";
            
        }
        else if(s1.marks[i]>=70 && s1.marks[i]<75){
            r1.gpa[i] = 3.30;
            r1.grade[i]= "B+";
            
        }
        else if(s1.marks[i]>=65 && s1.marks[i]<70){
            r1.gpa[i] = 3.00;
            r1.grade[i] = "B ";
            
        }
        else if(s1.marks[i]>=60 && s1.marks[i]<65){
            r1.gpa[i] = 2.70;
            r1.grade[i]= "B-";
            
        }
        else if(s1.marks[i]>=55 && s1.marks[i]<60){
            r1.gpa[i] = 2.30;
            r1.grade[i]= "C+";
            
        }
        else if(s1.marks[i]>=50 && s1.marks[i]<55){
            r1.gpa[i] = 2.00;
            r1.grade[i]= "C ";
           
        }
        else if(s1.marks[i]>=45 && s1.marks[i]<50){
            r1.gpa[i] = 1.70;
            r1.grade[i]= "C-";
          
        }
        else if(s1.marks[i]>=40 && s1.marks[i]<45){
            r1.gpa[i] = 1.00;
            r1.grade[i]= "D ";            
        }
        else{
            r1.gpa[i] = 0.00;
            r1.grade[i]= "F*";            
        }
        
        r1.TGPA[i] =r1.gpa[i]*credit[i];
        r1.sumTGPA += r1.TGPA[i];
}
        r1.CGPA = r1.sumTGPA/tCredit;
        
}
