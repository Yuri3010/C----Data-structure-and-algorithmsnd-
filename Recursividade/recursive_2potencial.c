# include <stdio.h>

int potenciaDois(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", potenciaDois(n));

    return 0;
}


int potenciaDois(int n) {
    if (n == 1) {return (2);}

    else {return (potenciaDois(n - 1) * 2);}
}
