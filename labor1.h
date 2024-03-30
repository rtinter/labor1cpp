double squared(double b);

void passByReference(int &a);

void passByPointer (int *ptr);

std::string getFileName(const std::vector<std::string> &vi);

std::string checkTxtExtension(const std::string &fileName);

using Person = struct{
    std::string firstName;
    std::string lastName;
    std::string birthday;
    int ageInYears;
    int ageInDays;
    int ageInHours;
};

std::vector<Person> createPersonsVectorFromFile(const std::string& filePath);
