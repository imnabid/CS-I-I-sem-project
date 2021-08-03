
#include "database.c"
#include <ctype.h>

int main(){
    char user_ans,x;

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
        add_csv();
        
    }
    else{
        printf("Please enter the correct option\n");
        return 0;
        
    }
    calculation(s1);
    output(s1,r1);
    pass_value_to_python(s1, r1);

    int val;

    printf("\nDo you want to see the pdf form of the result (0,1): ");
    scanf("%d",&val);
    if(val==1){
        system("auto.bat");
    }
    
    

    // }
    return 0;
}