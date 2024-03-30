#include <vector>
#include <fstream>
#include <iostream>
#include "labor1.h"

double squared(double b){
    return pow(b,2);
}

void passByReference( int &a){ // Es wird keine Kopie erzeugt
    a+=233;
}

void passByPointer (int *ptr){
    (*ptr)+=20;
}

std::string checkTxtExtension(const std::string &fileName) {
    if (fileName.size() >= 4 && fileName.substr(fileName.size() - 4) != ".txt") {
        return fileName + ".txt";
    }
    return fileName;
}


std::string getFileName(const std::vector<std::string> &vi) {
    std::string fileName;
    if (vi.size() > 1) {
        fileName = vi[1];
        std::cout << "Eingegebener Dateiname: " << fileName << std::endl;
    } else {
        std::cout << "Name your file: ";
        std::cin >> fileName;
    }
    return checkTxtExtension(fileName);
}

Person readPerson(std::ifstream &file) {
    Person person;
    std::getline(file, person.firstName);
    std::getline(file, person.lastName);
    std::getline(file, person.birthday);
    return person;
}

std::vector<Person> createPersonsVectorFromFile(std::string const &filePath) {
    std::vector<Person> persons;
    try {
        std::ifstream file(filePath);
        file.exceptions(std::ifstream::failbit | std::ifstream::badbit);

        while (!file.eof()) {
            persons.push_back(readPerson(file));
        }
    } catch (const std::ifstream::failure& e) {
        // Catch und handle spezifisch std::ifstream::failure
        std::cerr << "Fehler beim Lesen der Datei: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        // Catch andere std::exception
        std::cerr << "Allgemeiner Fehler: " << e.what() << std::endl;
    }
    return persons;
}


