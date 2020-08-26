#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int upper, int lower);
void usage() {
    printf("skldhjaskldjsayhdilsahduqidhkl\n");
}


int main() {

    printf("%d", randomNumber(366, 1));

    return 0;
}

int randomNumber(int upper, int lower) {

    int rand, finalValue;
        srand(time(0));
        rand = random();
        finalValue = (rand % (upper - lower +1) ) + 1;
    return finalValue;
}