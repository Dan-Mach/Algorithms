#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
}
person;
int main (){

    person people[2];

    people[0].name = "Bob";
    people[0].number = "0745354534";

    people[1].name = "Roy";
    people[1].number = "0734354353";
    
    for(int i = 0 ; i < people[])
        if( strcmp(people[i].name, "Roy") == 0){
            printf("Found %s \n", people[i].number);
            return 0;
        }
    }
    printf("Not found!\n"); 

    return 0;
    
}