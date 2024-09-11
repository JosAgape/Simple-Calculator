#include <stdio.h>
int addition(int a,int b);   //Initialized the Function Prototypes for all the Operations
int subtraction(int c,int d);
int multiplication(int e, int f);
int Division(int g,int h);
int main(){
    int num,x,y,opp; //Initialized variables that I'll be using for the functions
    printf("Choose an Operation:\n Press 1 for Addition\n Press 2 for Subtraction\n Press 3 for multiplication\n Press 4 for Division\n");//This part tell the user what is expected of them
    scanf("%d",&num);//Takes the input given by the user and stores it in num: num determines which operation is carried out and should be from 1-4
     if (num==1){//this part checks if the first operation has been selected
    printf("Input the numbers for the operation\n");
    scanf("%d%d",&x,&y);
    opp= addition(x,y);//This part asks the user to input the values they want to carry out the operation with and then carries out the corresponding operation
    printf("The Answer is = %d",opp);
    }
    else if(num==2){
    printf("Input the numbers for the operation\n");
    scanf("%d%d",&x,&y);
    opp= subtraction(x,y);//This part asks the user to input the values they want to carry out the operation with and then carries out the corresponding operation
    printf("The Answer is = %d",opp);
    }
    else if(num==3){
    printf("Input the numbers for the operation\n");
    scanf("%d%d",&x,&y);
    opp=multiplication(x,y);//This part asks the user to input the values they want to carry out the operation with and then carries out the corresponding operation
    printf("The Answer is = %d",opp);
    }
    else if (num==4){
    printf("Input the numbers for the operation\n");
    scanf("%d%d",&x,&y);
    opp=Division(x,y);//This part asks the user to input the values they want to carry out the operation with and then carries out the corresponding operation
    printf("The Answer is =%d",opp);
    }
    else printf("You have Entered an invalid operation");//The code was remodeled and this part helps with error handling of Invalid Codes. It will return and error message if neither of the 4 operations was chosen or if an invalid character was input
    


    
    
}
   
   
   
   
   
   
   
     int addition(int a, int b){// The is the function definition for addition
    int sum;
    sum=a+b;
    return sum;
    }

    int subtraction(int c, int d){// The is the function definition for subtraction
        int sub;
        sub=c-d;
        return sub;
    }

    int multiplication(int e, int f){// The is the function definition for multiplication
        int mul;
        mul=e*f;
        return mul;
    }

    int Division(int g, int h){// The is the function definition for division
        if (h==0){
        printf("Impossible Equation: Remove 0 from the denominator");
        }
         else {
        int div;
        div =g/h;
        return div;
         }
    }