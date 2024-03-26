#include <iostream>
#include <vector>
#include <string>
#include "labor1.h"
#include <fstream>
#include <sstream>
#include <exception>

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

   /* Anforderung 10
    std::fstream file("/Users/renetinter/CLionProjects/labor1/data.txt");
    std::string line;
    Person person; // Erstelle eine Instanz von Person

    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::istringstream lines(line);
            std::string key, value;
            if (std::getline(lines, key, ':')) {
                lines >> std::ws; // Ignoriere Leerzeichen nach dem Doppelpunkt
                std::getline(lines, value); // Lies den Rest der Zeile als Wert

                if (key == "Firstname") {
                    person.firstName = value;
                } else if (key == "Lastname") {
                    person.lastName = value;
                } else if (key == "Birthday") {
                    person.birthday = value;
                    persons.emplace_back(person);
                    person = Person(); // Zurücksetzen für das nächste Objekt
                }
            }
        }
        file.close();
    }

    for (const auto& p : persons) {
        std::cout << "Vorname: " << p.firstName << ", Nachname: " << p.lastName << ", Geburtstag: " << p.birthday << std::endl;
    }


*/

    std::string lines;
    std::ifstream file;
    Person person_ptr;

    try {
        //exception anmelden
        file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
        file.open("/Users/renetinter/CLionProjects/labor1/data.txt");

        if (!file.is_open()) {
            throw std::runtime_error("Datei konnte nicht geöffnet werden");
        }

        // Zeilen aus der Datei lesen und an 'lines' anhängen
        std::string line;
        while (std::getline(file, line)) {

           // lines += line + "\n"; // Neue Zeile hinzufügen
        }

        file.close();
        } catch(std::exception &e){
            std::cerr << e.what() << std::endl;
            std::cout << "Datei nicht gefunden" << std::endl;
        }

    // Ausgeben des Inhalts der Datei
    std::cout << "Inhalt der Datei:" << std::endl;
    std::cout << lines << std::endl;

    return 0;
}
