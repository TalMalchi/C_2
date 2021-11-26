#include<stdio.h>
#include <math.h>
#include "my_mat.h"
#include <stdbool.h>

int main(){

while(true){
    char c;
    printf("Please choose: A, B or C\n");
    scanf(" %c", &c );
    
    if (c=='A'){
       matrixValue();
    }

    else if (c=='B'){
        int x,y;
        printf("Please enter two numbers:\n");
        scanf(" %d %d", &x,&y);
        checkPath(x,y);
    }
    else if (c=='C'){
        int x,y;
        printf("Please enter two numbers:\n");
        scanf(" %d %d", &x,&y);
        Fun3(x, y);
    }
    else if (c=='D'){
        return 0 ;
    }
    else printf("Wrong input, try again with A, B OR C\n");
    }
}
    
    
    


