#include <iostream>
#include <string> // make string class available
#include <cstdlib>
#include <ctime>
struct datas {
    std::string name;
    std::string lastname;
    std::string grade;
    int age;
    enum Grade {F, D, C, B, A};


    std::string nameAndLastname;
    Grade randomGrade;
    Grade deservedGrade[5] = {Grade::F, Grade::D, Grade::C, Grade::B, Grade::A};

    bool isGrade(Grade grade) {
        for (int i = 0; i < 5; i++) {
            if (deservedGrade[i] == grade) {
                return true;
            }
        }
        return false;
    }

    static Grade gradeFromInputConvert(const std::string& input) {
        if (input == "F") return Grade::F;
        if (input == "D") return Grade::D;
        if (input == "C") return Grade::C;
        if (input == "B") return Grade::B;
        if (input == "A") return Grade::A;
        throw std::invalid_argument("Invalid grade input");
    }

    static std::string gradeToString(Grade grade) {
        switch (grade) {
            case Grade::F: return "F";
            case Grade::D: return "D";
            case Grade::C: return "C";
            case Grade::B: return "B";
            case Grade::A: return "A";
            default: throw std::invalid_argument("Invalid grade value");
        }
    }
};



int main() {
    srand(time(0));
    datas student;

    std::cout << "What is your first name? ";
    std::cin >> student.name;
    std::cout << "What is your last name? ";
    std::cin >> student.lastname;
    std::cout << "Age? ";
    std::cin >> student.age;



    while (true) {
        std::cout << "What letter grade do you deserve? ";
        std::cin >> student.grade;

        try {
            datas::Grade predictedGrade = datas::gradeFromInputConvert(student.grade);
            if (student.isGrade(predictedGrade)) {
                std::cout << "Valid grade entered." << std::endl;
                break;
            }
        } catch (const std::invalid_argument& e) {
            std::cerr << e.what() << std::endl;
            std::cout << "Please enter a valid grade (F, D, C, B, A)." << std::endl;
        }
    }




    std::cout << "Name and last name: " << student.name + " " + student.lastname << std::endl;
    std::cout << "Your age: " << student.age << std::endl;
    student.randomGrade = static_cast<datas::Grade>(rand() % 5);
    std::cout << "Your Grade: " << student.randomGrade;
    return 0;
}
