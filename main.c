
#include "database.c"

int main(){
    char user_ans,x;
    char val;
    // clear the screen
    system("cls");

    printf("Do you want to ACCESS existing data or ENTER new data (A,E)? ");    
    scanf("%c",&user_ans);
    scanf("%c",&x); //dummy scanf 

    if (toupper(user_ans) == 'A'){
        printf("\n");
        access_database();   
    }
    else if(toupper(user_ans) == 'E'){    
        printf("\n");
        input_details();
        add_to_csv();        
    }
    else{
        printf("Please enter the correct option\n");
        return 0;        
    }
    // performs calculations and prints results
    calculation(s1);
    output(s1,r1);
    pass_value_to_python(s1, r1);    
    // pdf implementation
    printf("\n");
    printf("Do you want to see the pdf form of the result (y,n):");
    scanf("  %c",&val);
    if(val=='y'){
        system("auto.bat"); //command running the python file is stored in auto.bat
    }
   
    return 0;
}