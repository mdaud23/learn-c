#include <stdio.h>
#include <stdlib.h>

int main(){

    int index = 1;
    while(index <= 5){

        printf("%d\n", index);
        index++;
    }

    // do dlu sekali, baru cek kondisi
    do {

        printf("%d\n", index);
        index++;
    } while(index <= 5);

    return 0;
}