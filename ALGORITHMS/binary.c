#include <stdio.h>
#include <stdlib.h>

int main (){
    int num[] = {3,2,4,6,1,7,8,9,0,5};
    int temp = 0;
    for(int i = 0; i < 10; i++){
        if(temp == num[i]){
            printf("%d", temp);
        } 
    }
    
   

    return 0;
}