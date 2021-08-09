#include "Calculation.c"

//output function
void output(student s1, result r1){
	
	system("cls"); //clear the screen
	printf("\n\n");
	printf("Department : %s\n",s1.level);
	printf("Name : %s\n",s1.name);
	printf("Birth Date : %s\n",s1.dob);
	printf("Examination ID : %d\n",s1.id);
	printf("Address : %s\n",s1.address);
	printf("\n");

	//marks
	int credit[7] = {3,3,3,3,3,2,2};

	int i;
 	char subjects[7][10] = {"MATH101","PHYS101","CHEM101","COMP102","ENGG111","ENGG101","EDRG101"};
	char fullSubjects[7][50] = {"  Calculus & Linear Algebra    ","       General Physics I       ","       General Chemistry       ","     Computer Programming      ","    Element of Engineering I   ","Engineering Project Preparation","     Engineering Drawing I     "};
	// for displaying current date in the marksheet
	time_t t = time(NULL);
  	struct tm tm = *localtime(&t);

	//console marksheet
	printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| Year I Semester I                                                               %d-%02d-%02d   |\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
	printf("................................................................................................\n");
	printf("| Course No \t\tCourse Title\t\t  Marks\t   Credit  Grade   Grade Val   Grade P |\n");
    for(int i=0; i<7; i++){
		printf("................................................................................................\n");
        printf("| %s  |  %s  |  %*.2f  |   %d   |  %s  |   %.2f   |  %*.2f   |\n",subjects[i],fullSubjects[i],6,s1.marks[i],credit[i],r1.grade[i],r1.gpa[i],5,r1.TGPA[i]);
        
    }
		printf("................................................................................................\n");	
		printf("|          |                              Total|          |   19  |      |          |  %*.2f   |\n",5,r1.sumTGPA);
		printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");


    printf("GPA(Grade Point Average): %.2f",r1.CGPA);
	printf("\n");
}



