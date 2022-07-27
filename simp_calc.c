//generating a C calculator


#include <stdio.h>

int main() {

    //variable initialization
    float a,b;
    printf("Give the 1st num \n");
    scanf("%f",&a);
    printf("Give the 2nd num \n");
    scanf("%f",&b);
    printf("\nfor a+b: enter + \nfor a-b : enter - \nfor a/b : enter / \nfor a x b : enter x \n");
    
    char x;
    land:
    printf("Enter the opration to excute:");
    scanf("%s",&x);

    //calculations
    float ans;
    switch (x){
        case '-':
        ans=a-b;
        break;
        
        case '+':
        ans=a+b;
        break;
        
        case '/':
        ans=a/b;
        break;
        
        case 'x':
        ans=a*b;
        break;
        
        default:
        printf("Enter a proper opretpr \n");
        goto land;
        
    }
    //output display
    printf("result is: %f",ans);


    return 0;
}