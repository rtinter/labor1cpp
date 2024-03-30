#include <iostream>
#include <vector>
#include <string>
#include "labor1.h"
#include <fstream>
#include <exception>


int main(int argc, char *argv[]) {

    // Anforderung 1
    std::vector<std::string> vi;
    for (int i{0}; i < argc; ++i) {
        vi.emplace_back(argv[i]);
    }

    {
        int i{0};
        for (const auto &element: vi) { // Referenztyp
            std::cout << "argv[" << i << "] = " << element << std::endl;
            i++;
        }
    }

    // Anforderung 2
    double stringToDouble = stod(vi[1]);
    std::cout << "converted string = " << vi[1] << " -> double = " << stringToDouble << std::endl;

    //Anforderung 4
    double squaredArgument = squared(stringToDouble);
    std::cout << "squared " << stringToDouble << " -> " << squaredArgument << std::endl;

    //Anforderung 5
    int doubleToInt = static_cast<int>(squaredArgument);
    std::cout << "converted double variable = " << squaredArgument << " -> to int = " << doubleToInt << std::endl;

    //Anforderung 6
    passByReference(doubleToInt);
    std::cout << "Passed by Reference and added 253 = " << doubleToInt << std::endl;
    int *pass_ptr = &doubleToInt;
    passByPointer(pass_ptr);
    std::cout << "Passed by Pointer and added 20 = " << doubleToInt << std::endl;

    //Anforderung 7
    std::cout << doubleToInt << " depicted in hexadezical " << std::hex << doubleToInt
              << std::endl; // Ausgabeformat hexa
    std::cout << std::dec << std::endl; // Ausgabeformat Dez

    //Anforderung 8
    // lookup Person struct in labor1.h

    std::string file = "../data.txt"; // Pfad zur Datei

    //Anforderung 9
    std::vector<Person> persons = createPersonsVectorFromFile(file);

    // Ausgabe der gelesenen Personen
    for (const auto& person : persons) {
        std::cout << "Name: " << person.firstName << " " << person.lastName
                  << ", Geburtstag: " << person.birthday << std::endl;
    }


    return 0;
}