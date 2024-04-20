#include <stdio.h>
#include <string.h>

void linear_search(char *name[], int size, char *target);

int main (){

    char *name [] = {"Dan", "Roy", "Bill", "John"};
    char *target = "Roy";

    linear_search(name, sizeof(name[0]), target);

    return 0;
}

void linear_search(char * name[], int size, char * target)
{
    for(int i = 0; i < size; i++){
        if(strcmp(name[i], target) == 0 ){
            printf("Found", target);
            return ;
        }

    }
    printf("The name was not found ! ");
        
}
