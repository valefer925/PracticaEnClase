#include <iostream>

using namespace std;

void imprimirDigitos(int n)
{
    int r = n/10000;
    cout << r << '\t';
    n = n - (10000*r);
    r = n/1000;
    cout << r << '\t';
    n = n - (1000*r);
    r = n/100;
    cout << r << '\t';
    n = n - (100*r);
    r = n/10;
    cout << r << '\t';
    n = n - (10*r);
    cout << n << endl;

}

int contarDigitos(int n)
{
    int c = 0;
    while (n)
    {
        n = n/10;
        c++;
    }
    return c;
}

bool esPalindrome(int n)
{
    int a = n/10000;
    int b = n%10;
    n = (n-(10000*a))/10;
    int c = n/100;
    int d = n%10;

    if (a==b and c==d)
        return true;
    return false;
}

int fib(int n)
{
    int a = 0;
    int b = 1;
    int c;
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;

}

bool esNumero(char c)
{
    if ( c > 47 and c < 58)
        return true;
    return false;
}

bool esLetra(char c)
{
    if ( c > 64 and c < 91 )
        return true;
    if ( c > 96 and c < 122 )
        return true;
    return false;
}

char Minu(int c)
{
    if ( c > 96 and c < 122 )
        c = c - 32;
    return c;
}

char Mayu (int c)
{
    if ( c > 64 and c < 91 )
        c = c + 32;
    return c;
}

int main()
{

    int a, b, c, d;

    cin >> b;
    imprimirDigitos(b);
    cin >> c;
    cout << contarDigitos(c) << endl;
    cin >> a;
    cout << esPalindrome(a) << endl;
    cin >> d;
    cout << fib(d) << endl;
    char e, f, g, h;
    cin >> e;
    cout << esNumero(e) << endl;
    cin >> f;
    cout << esLetra(f) << endl;
    cin >> g;
    cout << Minu(g) << endl;
    cin >> h;
    cout << Mayu(h) << endl;



}

