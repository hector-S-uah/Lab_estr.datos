#include <stdio.h>

using namespace std;

int menor(int x, int y) // declaration y definition juntas
{
    return x < y ? x : y;
}

int menordes(int x, int y, int z); // solo la declaración...

int main(int argc, char** argv)
{
    int a, b, c;
    cout << "Escribe tres datos enteros: " << endl;
    cin >> a >> b >> c;
    cout << "El menor es de los tres numeros " << menordes(a, b, c) << endl;
    return 0;
}

int menordes(int x, int y, int z) // ...y aquí la definición
{
    return menor(menor(x, y), z);
}
