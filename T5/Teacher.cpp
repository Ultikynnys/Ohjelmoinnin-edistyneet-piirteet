#include "teacher.h"


Teacher::Teacher(const std::string& name, int age,const Address& address , const std::string& Degree)
    : Person(name, age, address), Degree(Degree), teachingHours(0) {}

// Getters and setters
std::string Teacher::getDegree() const {
    return Degree;
}

void Teacher::SetDegree(const std::string& Degree) {
    this->Degree = Degree;
}

void Teacher::AddCourse(const std::string& Course)
{
    courseList.push_back(Course);
}

void Teacher::SetTeachingHours(const int hours) {
    teachingHours = hours;
}

void Teacher::RemoveCourse(const std::string& course) {
    // Use std::remove to remove the course from the vector
    auto it = std::remove(courseList.begin(), courseList.end(), course);
    if (it != courseList.end()) {
        courseList.erase(it, courseList.end());
    }
}
void Teacher::printCourses() const {
    std::cout << "Courses taught by " << getName() << ":" << std::endl;
    for (const auto& course : courseList) {
        std::cout << "- " << course << std::endl;
    }
}

// Other methods
void Teacher::hireTeacher(const Teacher& otherTeacher) {
    // Implement hiring logic
    std::cout << "Hired teacher with Degree: " << otherTeacher.getDegree() << std::endl;
}

void Teacher::printInfo() const {
    // Call the base class printInfo method
    Person::printInfo();

    printCourses();

    // Print student-specific information
    std::cout << "Degree: " << Degree << std::endl;
    std::cout << "Teaching Hours: " << teachingHours << std::endl;
 
}
