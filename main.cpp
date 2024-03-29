#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <algorithm>
#include <valarray>
#include <memory>


int main() {

//Ejercicio 1:
std::cout << "Ejercicio 1: " << std::endl;

    std::vector<int> Vector;

        Vector.push_back(5);
        Vector.push_back(10);
        Vector.push_back(15);
        Vector.push_back(20);
        Vector.push_back(25);
        Vector.push_back(30);

            std::cout << "Elementos del vector: " << std::endl;
            for (std::vector<int>::iterator it = Vector.begin(); it != Vector.end(); ++it) {
                std::cout << *it << " ";
            }
            std::cout << std::endl;

//Ejercicio 2

std::cout << "------------------------------------------------------------------------------------ " << std::endl;
std::cout << "Ejercicio 2: " << std::endl;

    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);

    while(!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }

//Ejercicio 3

std::cout << "------------------------------------------------------------------------------------ " << std::endl;
std::cout << "Ejercicio 3: " << std::endl;

    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());

    for(int num : numeros) {
        std::cout << num << std::endl;
    }

        int maxNum = *std::max_element(numeros.begin(), numeros.end());
        std::cout << "Numero maximo: " << maxNum << std::endl;

//Ejercicio 4

std::cout << "------------------------------------------------------------------------------------ " << std::endl;
std::cout << "Ejercicio 4: " << std::endl;

    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

        std::cout << "Suma: " << valores.sum() << std::endl;
        std::cout << "Media: " << valores.sum() / valores.size() << std::endl;

        valores += 5.0;

            std::cout << "Valores + 5.0 = ";
            for(double valor : valores) {
                std::cout << valor << " ";
            }
            std::cout << std::endl;

//Ejercicio 5

    std::cout << "------------------------------------------------------------------------------------ " << std::endl;
    std::cout << "Ejercicio 5: " << std::endl;

    auto cuadrado = [](int num) { return num * num; };

    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    std::vector<int> numeros2 = {1, 2, 3, 4, 5};

    std::for_each(numeros2.begin(), numeros2.end(), [](int num) {
        std::cout << num << std::endl;
    });

        std::shared_ptr<int> ptr(new int(10));
        std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;

//Ejercicio 6

std::cout << "------------------------------------------------------------------------------------ " << std::endl;
std::cout << "Ejercicio 6: " << std::endl;



    return 0;
}



