# include <stdio.h>

int kEsimoNatural(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", kEsimoNatural(n));

    return 0;
}


int kEsimoNatural(int n) {
    int kEsimo;

    if (n == 1) {return (2);}
    else {return (kEsimoNatural(n - 1) + 2);}
}
