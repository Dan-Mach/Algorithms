#include <stdio.h>
#include <stdlib.h>

int main (){

    int num [] = {1, 3, 5, 6, 2, 9, 0};

    for(int i = 0; i < 7; i++){

        if(num[i] == 4){
            printf("Found");
            return 0;
        }
        
    }
    printf("Number not found!\n ");
        return 1;

    return 0;
}