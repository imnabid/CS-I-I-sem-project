#include "Nischal.c"


//output function
void output(student s1,result r1){
	printf("Department : %s\n",s1.department);
	printf("Name : %s\n",s1.name);
	printf("Birth Date : %s\n",s1.dob);
	printf("Examination ID : 202101-%d\n\n",s1.id);
	printf("Address : %s\n",s1.address);
	printf("\n\n");

	//marks
	int credit[7] = {3,3,3,3,3,2,2};

	int i;
 	char subjects[7][10] = {"MATH101","PHYS101","CHEM101","COMP102","ENGG111","ENGG101","EDRG101"};

    for(int i=0; i<7; i++){
        printf("%s    %.2f    %d    %s    %.2f    %.2f\n\n",subjects[i],s1.marks[i],credit[i],r1.grade[i],r1.gpa[i],r1.TGPA[i]);
        
    }

    printf("Your grade point average : %.2f",r1.CGPA);

}



int main(){
 
    input_details();
    calculation(s1);
    output(s1,r1);
    
    return 0;
}