#include "student.h"

Student::Student():Person("Placeholder",25,Address()),studentNumber("10TEST"),studyCredits(-1){}

// Constructors
Student::Student(const std::string& name, int age,const Address& address , const std::string& studentNumber)
    : Person(name, age, address), studentNumber(studentNumber), studyCredits(0) {}

Student::Student(const Student& Template):Person(Template), studentNumber(Template.studentNumber), studyCredits(Template.studyCredits) {}

// Getters and setters
std::string Student::getStudentNumber() const {
    return studentNumber;
}

void Student::setStudentNumber(const std::string& studentNumber) {
    this->studentNumber = studentNumber;
}

int Student::getStudyCredits() const {
    return studyCredits;
}

void Student::setStudyCredits(int credits) {
    studyCredits = credits;
}

// Additional methods
void Student::addCourse(const std::string& course) {
    enrolledCourses.push_back(course);
}

void Student::printInfo() const {
    // Call the base class printInfo method
    Person::printInfo();

    // Print student-specific information
    std::cout << "Student Number: " << studentNumber << std::endl;
    std::cout << "Enrolled Courses: ";
    for (const auto& course : enrolledCourses) {
        std::cout << course << ", ";
    }
    std::cout << std::endl;
    std::cout << "Study Credits: " << studyCredits << std::endl;
}
