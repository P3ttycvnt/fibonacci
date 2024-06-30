#include <stdio.h>
#include <stdlib.h>

int main(){
    //ints messed it all up, the program just printed negative numbers
    long morer = 1;
    long lesser = 0;
    long middle = 0;
    
    //quick cheat to print 0 as first number in sequence lol
    printf("0\n");
    
    for(int i = 0; i < 46; i++){
    //algorithm to print fibonacci
    printf("%d\n", morer);
    middle = lesser;
    lesser = morer;
    morer += middle;

        
    //some space lol
    //nothing special here

    }

    return 0;
}
