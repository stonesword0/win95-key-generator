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
    srand(time(NULL));
    int chunk1 = (rand() % (365 - 100 +1)) + 365;
    int chunk2 = (rand() % (99 - 95 +1)) + 95;
    const char *chunk3 = "OEM";
    int chunk4[6];
    int chunk5 = (rand() % (99999 - 10000 +1)) + 10000;
    char final;
    
    while((chunk4[0] + chunk4[1] + chunk4[2] + chunk4[3] + chunk4[4] + chunk4[5]) % 7 !=  0) {
        chunk4[5] = 0;
        if (chunk4[0] >= 10){
            chunk4[0] = 5;
        }
        if (chunk4[1] >= 10){
            chunk4[1] = 5;
        }
        if (chunk4[2] >= 10){
            chunk4[2] = 5;
        }
        if (chunk4[3] >= 10){
            chunk4[3] = 5;
        }
        if (chunk4[4] >= 10){
            chunk4[4] = 5;
        }
        if (chunk4[5] >= 10){
            chunk4[5] = 5;
        }
        printf("Brute Forcing...\n");
        printf("DEBUG\nchunk4[0] = %d\nchunk4[1] = %d\nchunk4[2] = %d\nchunk4[3] = %d\nchunk4[4] = %d\nchunk4[5] = %d\n", chunk4[0], chunk4[1], chunk4[2], chunk4[3], chunk4[4], chunk4[5]);
        chunk4[0] = (rand() % (9 - 1 +1)) + 1;
        chunk4[1] = (rand() % (9 - 1 +1)) + 1;
        chunk4[2] = (rand() % (9 - 1 +1)) + 1;
        chunk4[3] = (rand() % (9 - 1 +1)) + 1;
        chunk4[4] = (rand() % (9 - 1 +1)) + 1;
        chunk4[5] = (rand() % (7 - 1 +1)) + 1;
    }
    
    printf("FINAL DEBUG\nchunk4[0] = %d\nchunk4[1] = %d\nchunk4[2] = %d\nchunk4[3] = %d\nchunk4[4] = %d\nchunk4[5] = %d\n\n", chunk4[0], chunk4[1], chunk4[2], chunk4[3], chunk4[4], chunk4[5]);
    printf("Key: %d%d-OEM-0%d%d%d%d%d%d-%d\n\nThanks for using my program!\n\nWARNING: Sometimes the program will generat a invalid key. The FINAL DEBUG will say one of the chunks is over 10. That means something went wrong. I am working to fix this soon! Until it is fixed, just start the program again with the same arguments.\n\n", chunk1, chunk2, chunk4[0], chunk4[1], chunk4[2], chunk4[3], chunk4[4], chunk4[5], chunk5);
    return 0;
}

int randomNumber(int upper, int lower) {
    int seed;
    

    int randomm, finalValue;
        srand(time(NULL));
        randomm = rand();
        finalValue = (randomm % (upper - lower +1) ) + lower;
    return finalValue;
}