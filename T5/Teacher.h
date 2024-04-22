#pragma once

#include "person.h"

class Teacher : public Person {
private:
    std::string Degree;
    int teachingHours;
    std::vector<std::string> courseList;

public:
    // Constructors
    Teacher(const std::string& name, int age,const Address& address , const std::string& Degree);

    // Getters and setters
    std::string getDegree() const;
    void SetDegree(const std::string& Degree);
    void AddCourse(const std::string& Course);
    void SetTeachingHours(const int hours);
    void RemoveCourse(const std::string& Course);

    void printCourses() const;

    // Other methods
    void hireTeacher(const Teacher& otherTeacher);
    void printInfo() const override;
};
