#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int win95();
int randomNumber(int upper, int lower);
void usage() {
    printf("skldhjaskldjsayhdilsahduqidhkl\n");
}


int main() {
    win95();

    return 0;
}

int win95(){
    
    int chunk1 = randomNumber(366, 100);
    int chunk2 = randomNumber(99, 96);
    const char *chunk3 = "OEM";
    int chunk4[5];
    int chunk5 = randomNumber(99999, 10000);
    char final;
    
    while((chunk4[0] + chunk4[1] + chunk4[2] + chunk4[3] + chunk4[4] + chunk4[5]) % 7 !=  0) {
        printf("Brute Forcing...\n");
        printf("DEBUG\nchunk4[0] = %d\nchunk4[1] = %d\nchunk4[2] = %d\nchunk4[3] = %d\nchunk4[4] = %d\nchunk4[5] = %d\n", chunk4[0], chunk4[1], chunk4[2], chunk4[3], chunk4[4], chunk4[5]);
        chunk4[0] = randomNumber(9, 1);
        sleep(1);
        chunk4[1] = randomNumber(9, 1);
        sleep(1);
        chunk4[2] = randomNumber(9, 1);
        sleep(1);
        chunk4[3] = randomNumber(9, 1);
        sleep(1);
        chunk4[4] = randomNumber(9, 1);
        sleep(1);
        chunk4[5] = randomNumber(7, 1);
        sleep(1);
    }
    
    printf("FINAL DEBUG\nchunk4[0] = %d\nchunk4[1] = %d\nchunk4[2] = %d\nchunk4[3] = %d\nchunk4[4] = %d\nchunk4[5] = %d\n", chunk4[0], chunk4[1], chunk4[2], chunk4[3], chunk4[4], chunk4[5]);
    printf("%d%d-OEM-0%d%d%d%d%d%d-%d", chunk1, chunk2, chunk4[0], chunk4[1], chunk4[2], chunk4[3], chunk4[4], chunk4[5], chunk5);
    return 0;
}

int randomNumber(int upper, int lower) {

    int rand, finalValue;
        srand(time(0));
        rand = random();
        finalValue = (rand % (upper - lower +1) ) + lower;
    return finalValue;
}