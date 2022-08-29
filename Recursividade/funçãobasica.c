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

    if (n <= 1) {return (0);}
    else if (n == 2) { return (1);}
    else if (n > 1 && n != 2) {return (kEsimoNatural(n - 1) + 2);}
}
