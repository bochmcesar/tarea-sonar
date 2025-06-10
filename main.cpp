#include <iostream>
using namespace std;

// 1. Método para multiplicar dos números
int multiplicar(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;

    cout << "Ingresa el primer número: ";
    cin  >> num1;
    cout << "Ingresa el segundo número: ";
    cin  >> num2;

    int producto = multiplicar(num1, num2);

    cout << "El producto de " << num1 
         << " por " << num2 
         << " es: " << producto << endl;

    return 0;
}
