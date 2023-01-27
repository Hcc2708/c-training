#include <iostream>
#include <limits>
using namespace std;

int main() {

    std::cout << "Int Min " << numeric_limits<int>::min() << endl;
    std::cout << "Int Max " << numeric_limits<int>::max() << endl;
    std::cout << "Unsigned Int  Min " << numeric_limits<unsigned int>::min() << endl;
    std::cout << "Unsigned Int Max " << numeric_limits<unsigned int>::max() << endl;
    std::cout << "Long Int Min " << numeric_limits<long int>::min() << endl;
    std::cout << "Long Int Max " << numeric_limits<long int>::max() << endl;

    std::cout << "Unsigned Long Int Min " << numeric_limits<unsigned  long int>::min() <<endl;
    std::cout << "Unsigned Long Int Max " << numeric_limits<unsigned  long int>::max() << endl;
    std::cout << "Unsigned Long Int Max " << numeric_limits<unsigned  long long int>::max() << endl;

}