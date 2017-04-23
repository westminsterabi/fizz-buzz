#include <stdio.h>
#include <stdlib.h>
#include "fizzbuzz.h"

void evidence_fizz_buzz() {
    printf("*** testing fizzbuzz \n");
    printf("- expecting 1, 2, fizz, 4, buzz: ");
    fizz_buzz(5);
}

int main(int arc, char *argv[]) {
    evidence_fizz_buzz();
    return 0;
}
