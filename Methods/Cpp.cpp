#include "Cpp.h"

template<typename T>
class Printer {
public:
    void print(const T& value) {
        std::cout << value << std::endl;
    }
};

void exampleInCpp()
{
    Printer<int> printer;
    printer.print(42);

    Printer<std::string> stringPrinter;
    stringPrinter.print("Hello");
}

