#include <stdio.h>

char towers (int n, char frompeg, char topeg, char auxpeg);
//int countingMoves(int n);

int main(){
    int n;
    scanf("%d", &n);
    char towerResult = towers(n, 'A', 'B', 'C');
    //int moves = countingMoves(n);
    printf("%c", &towerResult);
    //printf("\n%d\n", &moves);
return 0;
}

char towers (int n, char frompeg, char topeg, char auxpeg) {
    if(n==1){
    char towerResult = printf("\n%s%c%s%c", "Move disco 1 da estaca ",
                                            frompeg, " para a estaca ", topeg);
    return towerResult;
    }

    towers(n-1, frompeg, auxpeg, topeg);
    printf("\n%s%d%s%c%s%c", "Move disco ", n, " da estaca ",
                                            frompeg, " para a estaca ", topeg);

    towers(n-1, auxpeg, topeg, frompeg);

}

/*int countingMoves (int n) {
    int moves;

    if (n == 1) {
        return moves = 1;
    }

    countingMoves(n - 1) + n;

}*/
