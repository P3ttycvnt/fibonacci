#include <stdio.h>
#include <stdlib.h>

int main(){
    long morer = 1;
    long lesser = 0;
    long middle = 0;
    printf("0\n");
    for(int i = 0; i < 46; i++){
    
    printf("%d\n", morer);
    middle = lesser;
    lesser = morer;
    morer += middle;





    }

    return 0;
}
