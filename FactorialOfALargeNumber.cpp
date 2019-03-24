#include<iostream>
using namespace std;

#define MAX 500 //Es el número de dígitos máximos en la salida.

int multiply(int x, int res[], int res_size);

// Esta función encuentra factorial de grandes números.
// y los imprime
void factorial(int n)
{
    int res[MAX];

    // Initialize result
    res[0] = 1;
    int res_size = 1;

    // Aplicar la fórmula factorial simple n! = 1 * 2 * 3 * 4 ... * n
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);

    cout << "Factorial of given number is \n";
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}

// Esta función multiplica x con el número.
// representado por res [].
// res_size es el tamaño de res [] o el número de dígitos en el
// número representado por res []. Esta función usa simple
// Matemáticas escolares para la multiplicación.
// Esta función puede ser valor de res_size y devuelve el
// nuevo valor de res_size
int multiply(int x, int res[], int res_size)
{
    int carry = 0;  // Initialize carry

    // Uno por uno multiplica n con dígitos individuales de res []
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;

        // Almacenar el último dígito de 'prod' en res []
        res[i] = prod % 10;

        // Put rest in carry
        carry  = prod/10;
    }

    // Poner en acarreo y aumentar el tamaño del resultado.
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

// Driver program
int main()
{
    int n;
    cin>>n;
    factorial(n);
    return 0;
}
