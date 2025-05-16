
// retorna o maior valor entre 2 números inteiros.
int maior_2n (int a, int b)
{
    int maior;
   
    if (a > b)
    { maior = a; }
    else
    { maior = b; }
    return maior;
}

// retorna o menor valor entre 2 numeros inteiros.
int menor_2n (int a, int b)
{
    int menor;

    if (a < b)
    { menor = a; }
    else
    { menor = b; }
    return menor;

}

// Retorna o maior valor entre 3 números inteiros.
int maior_3n(int a, int b,int c)
{
    int maior = maior_2n(a,b);
    return maior_2n(maior, c);
}

// Retorna o menor valor entre 3 números inteiros.

int menor_3n(int a, int b,int c)
{
    int menor = menor_2n(a,b);
    return menor_2n(menor, c);
}