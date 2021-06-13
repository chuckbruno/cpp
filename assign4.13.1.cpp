#include <iostream>
#include <string>

int main()
{
    char first_name[30];
    char last_name[30];
    char grade;
    int age;
    std::cout << "What is your first name? ";

    std::cin.getline(first_name, 30);
    std::cout << "What is your last name? ";

    std::cin.getline(last_name, 30);

    std::cout << "What letter grade do you deserve? ";
    std::cin >> grade;
    std::cout << "What is your age? ";
    std::cin >> age;

    grade = grade + 1;

    std::cout << "Name: " << last_name << ", " << first_name << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Age: " << age;
}
