#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
int hasLowercase(char arr[]){
    
    int i;
    for(i=0;i<strlen(arr);i++){
        if(islower(arr[i])!=0){
            return 1;
        }
    }
    return 0;
    
}

int hasUppercase(char arr[]){
    int i;
    for(i=0;i<strlen(arr);i++){
        if(isupper(arr[i])!=0){
            return 1;
        }
    }
    return 0;
    
}

int hasDigit(char arr[]){
    int i;
    for(i=0;i<strlen(arr);i++){
        if(isdigit(arr[i])!=0){
            return 1;
        }
    }
    return 0;
    
    
}

int hasSpecialChar(char arr[]){
    int i;
    for(i=0;i<strlen(arr);i++){
        if(isalpha(arr[i])==0 && isdigit(arr[i])==0 ){
            return 1;
        }
    }
    return 0;
    
    
}

int evaluateStrength(char arr[]){
    int total=0;
    total= +(hasSpecialChar(arr)+hasDigit(arr)+hasUppercase(arr)+hasLowercase(arr));
    if (strlen(arr)>=12){
        total ++;
    }
    
    return total;
    
}

int TestNew(){
    char UserPass[100];
    
    while (strlen(UserPass)<8){
    printf("Enter the password: ");
    scanf("%s",UserPass);
    if (strlen(UserPass)<8){
        printf("Error: Password should be atleast 8 characters long\n");
        return -1;
    }
    
    }
    
    
    if (0<=evaluateStrength(UserPass)&&evaluateStrength(UserPass)<=2){
        printf("Password Strength: Weak\n");
        
    }
    else if (3<=evaluateStrength(UserPass)&&evaluateStrength(UserPass)<=4){
        printf("Password Strength: Moderate\n");
        
    }
    else if (evaluateStrength(UserPass)==5){
        printf("Password Strength: Strong\n");
        
    }
    else{
        printf("DEBUG: %d",evaluateStrength(UserPass));
    }
    
    return evaluateStrength(UserPass);
}

void ViewLastStrength(UserPass){
    
    if (0<=UserPass&&UserPass<=2){
        printf("Password Strength: Weak\n");
        
    }
    else if (3<=UserPass&&UserPass<=4){
        printf("Password Strength: Moderate\n");
        
    }
    else if (UserPass==5){
        printf("Password Strength: Strong\n");
        
    }
    else{
        printf("You have not previously inputted a password \n");
    }
    
}




void main()
{
    int UserPass =-1;
    while (true){
    printf("\nPassword Resilience Analyzer\n");
    printf("1. Test a new password \n");
    printf("2. View the strength of last tested password \n");
    printf("3. Exit \n");
    
    printf("Enter your choice: ");
    
    int choice;
    
    scanf("%d",&choice);
    
    if (choice == 1){
        
     UserPass = TestNew();
     
    }
    else if(choice==2){
    
       ViewLastStrength(UserPass);
    }
    else if (choice ==3){
        printf("Exiting... \n");
        exit(0);
    }
    else{
        printf("Invalid choice \n");
    }
}
    
}
