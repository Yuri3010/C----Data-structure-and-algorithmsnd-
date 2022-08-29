#include <stdio.h>

char towers (int n, char frompeg, char topeg, char auxpeg);

int main(){
    int n;
    scanf("%d", &n);
    char result = towers(n, 'A', 'B', 'C');
    printf("%c", &result);
return 0;
}

char towers (int n, char frompeg, char topeg, char auxpeg) {
    if(n==1){
        printf("\n%s%c%s%c", "move disco 1 da estaca ", frompeg, " para a estaca ", topeg);
    return;
    }

    towers(n-1, frompeg, auxpeg, topeg);
    printf("\n%s%d%s%c%c", "move disco ", n, " da estaca ", frompeg, " para a estaca ", topeg);

    towers(n-1, auxpeg, topeg, frompeg);

}
