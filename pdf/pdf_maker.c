#include "..\Output.c"

void pass_value_to_python(student s1, result r1){
   FILE *f = fopen("storage.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    // transfers basic info
    fprintf(f, "%s,%s,%d, ",s1.level,s1.name,s1.id);
    
    // transfers gpa and TGPA
    float* new_array[2] = {r1.gpa,r1.TGPA};
    for (int i=0; i<2; i++ ){
        for(int j=0; j<7; j++){
        fprintf(f, "%.2f,",new_array[i][j] );
        }
    }
    // transfers Grades, CGPA
    for(int j=0; j<7; j++){
        fprintf(f, "%s,",r1.grade[j] );
    }
    fprintf(f,"%.2f",r1.CGPA);
    fclose(f);
 
   
}