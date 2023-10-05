#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string palabra, palabra_invertida;
    cout << "Ingrese la palabra: " << endl;
    getline(cin, palabra);

    int last = 0;
    for (int i = 0; i < palabra.length() + 1; i++)
    {
        if (palabra[i] == ' ' || i == palabra.length())
        {
            string aux = palabra.substr(last, i - last);
            palabra_invertida += aux.assign(aux.rbegin(), aux.rend()) + " ";
            last = i + 1;
        }
    }

    cout << palabra_invertida << endl;
}