#include <stdio.h>
#include <stdlib.h>

//Declared functions. ------------------------------------------------
int seqSearch(int i, int j, int x, int* arr[]);

int main() {
    int i, j, x;
    int seqSearchResult;

    scanf("%d %d %d", &i, &j, &x);

    int arr[(j-i)];

    for (int num = 1; num <= sizeof arr ; num++) {
        arr[num] = num;
    }

    seqSearchResult = seqSearch(i, j, x, arr[i]);
    printf("%d\n", seqSearchResult);

    return 0;
}

int seqSearch(int i, int j, int x, int* arr[]) {

    if (i<=j) {
        if (arr[i] == x) { return i;}
        else {return seqSearch(i+1, j, x, arr[i]);}
    }
    else {return 0;}
}
