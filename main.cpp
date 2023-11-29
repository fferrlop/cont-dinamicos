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

    return 0;
}
