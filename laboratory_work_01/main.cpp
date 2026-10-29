#include <cmath>
#include <iostream>
using namespace std;

int main(){
    float x, alpha;
    double y;

    std::cout << "Введите значение x: ";
    std::cin >> x;
    std::cout << "Введите значение alpha: ";
    std::cin >> alpha;
    y = std::pow(std::tan((x*x)/2-1),2) + 2 * std::cos(x-M_PI/6)/(0.5+std::pow(std::sin(alpha),2));
    std::cout << "Результат вычисления: y= " <<y
        <<" x= " << x
        <<" alpha= "<<alpha;

    return 0;
}
