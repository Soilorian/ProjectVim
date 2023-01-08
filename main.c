#include <string.h>
#include <stdio.h>

int main(){
    FILE * testtingLotsOfThings=fopen("./", "w");
    fprintf("hello is this working?", testtingLotsOfThings);
    fclose(testtingLotsOfThings);
    return 0;
}
