#include "Nischal.c"


//output function
void output(student s1,result r1){
	printf("Department : %s\n",s1.level);
	printf("Name : %s\n",s1.name);
	printf("Birth Date : %s\n",s1.dob);
	printf("Examination ID : 202101-%d\n\n",s1.id);
	printf("Address : %s\n",s1.address);
	printf("\n\n");

	//marks
	int credit[7] = {3,3,3,3,3,2,2};
	

	int i;
 	char subjects[7][10] = {"MATH101","PHYS101","CHEM101","COMP102","ENGG111","ENGG101","EDRG101"};
	char fullSubjects[7][50] = {"  Calculus & Linear Algebra    ","       General Physics I       ","       General Chemistry       ","     Computer Programming      ","    Element of Engineering I   ","Engineering Project Preparation","     Engineering Drawing I     "};
	
	//console marksheet
	printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| Year I; Semester I                                                       18th August, 2021  |\n");
	printf("...............................................................................................\n");
	printf("| Course No \t\tCourse Title\t\t  Marks\t   Credit  Grade  Grade Val   Grade P |\n");
    for(int i=0; i<7; i++){
		printf("...............................................................................................\n");
        printf("| %s  |  %s  |  %*.2f  |   %d   |  %s  |   %.2f   |  %*.2f   |\n",subjects[i],fullSubjects[i],5,s1.marks[i],credit[i],r1.grade[i],r1.gpa[i],5,r1.TGPA[i]);
        
    }
		printf("...............................................................................................\n");	
		printf("|          |                              Total|         |   19  |      |          |  %*.2f   |\n",5,r1.sumTGPA);
		printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");


    printf("GPA : %.2f",r1.CGPA);
}



