#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber();
void usage() {
    printf("skldhjaskldjsayhdilsahduqidhkl\n");
}


int main() {

    printf("%d", randomNumber());


    return 0;
}

int randomNumber() {

    int rand, finalValue;
        srand(time(0));
        rand = random();
        finalValue = (rand % 366) + 1;
    return finalValue;
}