#include <string>
#include <iostream>

class Student{
    public:

    Student(int age, std::string name)
    :m_age(age), m_name(name){}

    int GetAge() const { return m_age; }
    std::string GetName() const { return m_name; }

    ~Student(){}

    private:
    int m_age;
    std::string m_name;

};


std::ostream& operator<<(std::ostream& os, const Student& student){

    os << student.GetName() << student.GetAge();
    return os;
}


int main(){

    Student lily(13, "Lily");
    std::cout << "Student : ( " << lily.GetName() << ", " << lily.GetAge() << " )" << std::endl;

    std::cout << "joa" << std::endl;

}
