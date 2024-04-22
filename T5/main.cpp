#include <iostream>
#include "person.h"
#include "student.h"
#include "teacher.h"

int main() {

    //PERSON VECTOR
    std::vector<Person> people;

    // Create an address
    Address studentAddress("123 Main St", "12345", "Cityville");
    Address teacherAddress("456 Elm St", "67890", "Townsville");

    Student S1 = Student("Bob", 19, studentAddress, "S67890");

    // Add students and teachers directly in the push_back parameter
    people.push_back(Student()); //DEFAULT CONSTRUCT
    people.push_back(Student("Bob", 19, studentAddress, "S67890")); //PARAM CONSTRUCT
    people.push_back(Student(S1)); //COPY CONSTRUCT
    people.push_back(Teacher("Ms. Smith", 45, teacherAddress, "IT Specialist"));
    people.push_back(Teacher("Ms. Smith",35, teacherAddress,"IT Specialist"));

    //Person& teacher = people.at(2);
    //Teacher* teacher2 = dynamic_cast<Teacher*>(^teacher);
    //teacher->SetTeachingHours(10000);
    //Teacher* teacher3 = dynamic_cast<Teacher*>(teacher2);

    //Teacher* teacher = dynamic_cast<Teacher*>(&person);
    //teacher->SetTeachingHours(1300); // Example course

    // Print information for all people
    for (Person person : people) {
        person.printInfo();
        std::cout << std::endl;
    }

    return 0;
}
