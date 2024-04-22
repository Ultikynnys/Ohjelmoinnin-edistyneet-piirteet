#pragma once

#include "person.h" 

class Student : public Person {
private:
    std::string studentNumber;
    std::vector<std::string> enrolledCourses;
    int studyCredits;

public:
    // Constructors
    Student();
    Student(const std::string& name, int age, const Address& address, const std::string& studentNumber);
    Student(const Student& Template);

    // Getters and setters
    std::string getStudentNumber() const;
    void setStudentNumber(const std::string& studentNumber);
    int getStudyCredits() const;
    void setStudyCredits(int credits);

    // Additional methods
    void addCourse(const std::string& course);
    void printInfo() const override; // Override the base class method
};
