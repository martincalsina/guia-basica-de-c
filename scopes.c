int b, c; //globales

void f(void)
{
    int b, d; //locales a f, distintas de las globales
}

void g(int a)
{
    int c; //local a c y el siguiente bloque
    {
        int a, d;//locales solo a este bloque, distinto de paso el a del pasado por parametro
    }
}