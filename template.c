#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char win95();
int randomNumber(int upper, int lower);
void usage() {
    printf("skldhjaskldjsayhdilsahduqidhkl\n");
}


int main() {

    win95();


    return 0;
}

char win95(){
    int chunk1 = randomNumber(366, 100);
    int chunk2 = randomNumber(99, 96);
    const char *chunk3 = "OEM";
    int chunk4[6];
    int chunk5[5];
    char final[23];

    printf("%s", chunk3);


}

int randomNumber(int upper, int lower) {

    int rand, finalValue;
        srand(time(0));
        rand = random();
        finalValue = (rand % (upper - lower +1) ) + lower;
    return finalValue;
}