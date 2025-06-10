#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorio (int min, int max){
    srand (time(NULL));
    return rand() % (max-min+1)+min;
}

int main() {
    int numeroRandom = aleatorio(10,100);
    printf("%d \n",numeroRandom);
    return 0;
}