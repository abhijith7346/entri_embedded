#include<stdio.h>

void printStar(int height){
    int n = height;
    int horizontalLimit = n + (n-1);

    for(int i=0;i<n;i++){
         
        
        for(int j=1;j<=horizontalLimit;j++){
            
            int star = 2*i + 1;
            int spaces = horizontalLimit - star;
            int halfSpaces = spaces / 2;

            if(j<=halfSpaces || j>(halfSpaces + star)){
                printf(" ");
                continue;
            }
        
            printf("*");    
        }

        printf("\n");    

    }
}


int main(){

    int height = 0;

    while (16)
    {
        printf("enter n for pyramid height\n");
         printf("enter 0 for exit\n");
        scanf("%d", &height);
        
        switch (height)
        {
        case 0:
            return 1;
            break;
        case 1:
            printf("please enter a number greater than 2\n");
            continue;
        default:
            printStar(height);
            break;
        }

    }
    
    return 0;
}