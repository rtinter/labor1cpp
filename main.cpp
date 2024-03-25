#include <iostream>
#include <vector>
#include <string>
#include "labor1.h"
#include <fstream>


int main(int argc, char *argv[]) {

    // Anforderung 1
    std::vector<std::string> vi;

    for(int i {0}; i < argc; ++i){
        vi.emplace_back(argv[i]);
    }

  /*  for(const auto &element : vi){ // Referenztyp
        std::cout << "argv[" << element << "] = " << argv[i] << std::endl;
    }*/

    for(int i {0}; i < argc; ++i){
        std::cout << "argv[" << i << "] = " << argv[i] << std::endl;
    }

    // Anforderung 2
    double stringToDouble = stod(vi[2]);
    std::cout << "converted string = " << vi[2] << " -> double = " << stringToDouble << std::endl;

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
    std::cout << doubleToInt << " depict in hexadezical " << std::hex << doubleToInt << std::endl; // Ausgabeformat hexa
    std::cout << std::dec << std::endl; // Ausgabeformat Dez

    //Anforderung 8
    // siehe Person struct in labor1.h

    //Anforderung 9
    std::vector<Person> persons;

    //Anforderung 10
    std::fstream file("./Text.txt");
    std::string line;

    if(file.is_open()){
        while(std::getline(file, line)) { // Liest jede Zeile aus der Datei
            std::cout << line << std::endl; // Gibt die gelesene Zeile aus
        }
        file.close(); // Schließt die Datei
    }
    std::cout << line << std::endl;

    return 0;
}
