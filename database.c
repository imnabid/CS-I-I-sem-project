#include ".\pdf\pdf_maker.c"
#define NO_CS_STUDENTS 61

void add_to_csv(){
    FILE *fp;   
    fp = fopen("database.csv","a");
    fprintf(fp,"%d,%s,%s,%s,%s,",s1.id,s1.name,s1.level,s1.dob,s1.address);
    for(int i=0; i<7; i++){
        // Ternary operation used for the last value inorder to break row
        i<6 ? fprintf(fp,"%.2f,",s1.marks[i]):fprintf(fp,"%.2f\n",s1.marks[i]);
    }
    fclose(fp);
}

//function to convert string num to float
float float_extractor(char *num){
    float val;   
    val = atof(num);
    return val;
}

int access_database(){   
    
    // printf("HI i am running");

    FILE *fp;
    char row[200];
    int roll;int num;char temp[3];

    fp = fopen("database.csv","r");
    printf("Enter an ID to index: ");
    scanf("%d",&roll);
    printf("\n");

    for(int i=0; i<NO_CS_STUDENTS; i++) //Each loop is a row in the database
    {   
        if(i==0){
            continue; 
        }
        fgets(row, sizeof(row), fp); 

        strncpy(temp,row,2); //to access the ID from the current
        num = atoi(temp); //to convert string into int
        if(num == roll){ //to match the roll no with the ID and when true exit the loop
            break;
        }         
    }
    if (num != roll)
        return 0;

    // We HAVE ROW now  
    char * token = strtok(row, ","); //returns first element before',' also creates a static variable and stores the row.

   // loop through the string to extract all other tokens
   char *students_data[13];
   int p = 0;
    while( token != NULL ) {
        
         //printing each token
        students_data[p] = token;
        token = strtok(NULL, ",");
        p++;
        
    }
    //We have array of data from the row in students_data array
    
    for(int i=0; i<7; i++){//to add marks from the csv to the struct s1
        s1.marks[i] = float_extractor(students_data[i+5]);
    }
    //to add ID and other basic info
    s1.id = atoi(students_data[0]);
    strcpy(s1.name,students_data[1]);
    strcpy(s1.level,students_data[2]);
    strcpy(s1.dob,students_data[3]);
    strcpy(s1.address,students_data[4]);
    
    return 1;
}
