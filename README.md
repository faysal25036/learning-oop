# Faysal36 - Learning OOP

**Object-Oriented Programming (OOP) Lab Repository**  
Owner: **Faysal36**

This repository contains basic OOP notes and C++ examples covering classes, objects, data members, member functions, access modifiers, constructors, destructors, encapsulation, and basic banking operations.

## Repository Structure

```text
Faysal36-Learning-OOP/
├── README.md
├── concepts_demo.cpp
├── exercise01_student.cpp
└── exercise02_bank.cpp
```

## 1. Basic Concepts of OOP

Object-Oriented Programming (OOP) is a programming paradigm based on objects and classes. It helps developers write reusable, organized, secure, and maintainable code.

### Class
A class is a blueprint or template for creating objects. It defines the data members and member functions of an object.

Example: `Student` is a class that defines student information and activities.

### Object
An object is an instance of a class. It represents a real-world entity and has its own data and behavior.

Example: `student1` and `student2` are objects of the `Student` class.

### Data Members
Data members are variables declared inside a class to store an object's information.

Examples: `name`, `age`, and `id`.

### Member Functions
Member functions are functions declared inside a class that define the behavior of objects.

Examples: `displayInfo()` and `study()`.

### Access Modifiers

Access modifiers control the visibility and accessibility of class members.

| Modifier | Accessibility |
|---|---|
| `public` | Accessible from outside the class through an object |
| `private` | Accessible only inside the same class (and its friends) |
| `protected` | Accessible inside the class and its derived classes |

### Constructor
A constructor is a special member function that is automatically called when an object is created. It is mainly used to initialize objects.

Example: `Student()`.

### Destructor
A destructor is a special member function that is automatically called when an object is destroyed. It is used to perform cleanup.

Example: `~Student()`.

## 2. Four Main Pillars of OOP

1. **Encapsulation:** Wrapping data and functions together into a single unit (class) and controlling access to data.
2. **Abstraction:** Hiding unnecessary implementation details and showing only essential features.
3. **Inheritance:** One class acquires the properties and functions of another class. It promotes code reusability.
4. **Polymorphism:** One function or interface can behave in different ways depending on the situation.

## 3. Simple C++ Example

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1("Faysal", 22);
    s1.display();
    return 0;
}
```

**Output**
```text
Faysal 22
```

## 4. Concepts and Exercises

### Concept 01: Classes and Objects
- Class name: `Student`
- Object: `s1`
- Data members: `name` and `studentID`
- Member function: `displayInfo()`
- An object accesses public class members using the dot (`.`) operator.

Example:
```cpp
Student s1;
s1.name = "Rahim";
s1.studentID = 210601;
s1.displayInfo();
```

### Concept 02: Access Modifiers
- Private member: `balance`
- Public member functions: `setBalance()` and `getBalance()`
- Directly accessing `balance` from `main()` causes a compilation error because it is private.
- A setter changes the value and a getter reads it. Validation can be added to the setter to reject invalid values. This is an example of encapsulation.

### Concept 03: Constructors
- `Student()` is a default constructor. It initializes `name` as `"Unknown"` and `id` as `0`.
- `Student(string n, int i)` is a parameterized constructor.
- `Student s1;` calls the default constructor.
- `Student s2("Rahim", 210601);` calls the parameterized constructor.

Example:
```cpp
Student a("Rahim", 210601);
Student b("Karim", 210602);
Student c("Fatema", 210603);

a.display();
b.display();
c.display();
```

Each object maintains its own separate data.

## 5. How to Compile and Run

Using g++:

```bash
g++ concepts_demo.cpp -o concepts_demo
./concepts_demo

g++ exercise01_student.cpp -o student
./student

g++ exercise02_bank.cpp -o bank
./bank
```

On Windows, run the generated `.exe` files instead of `./filename`.

## 6. Advantages of OOP

1. **Code Reusability:** Reuse existing code through inheritance.
2. **Data Security:** Protect data using encapsulation and access modifiers.
3. **Modularity:** Divide programs into separate classes and objects.
4. **Maintainability:** Make code easier to modify and maintain.
5. **Flexibility:** Support polymorphism for different behaviors.

## Important for Exams

- Class = Blueprint
- Object = Instance of a class
- Constructor = Initializes an object
- Destructor = Cleans up when an object is destroyed
- Encapsulation = Wrapping data and methods together
- Abstraction = Hiding implementation details
- Inheritance = Reusing properties of another class
- Polymorphism = One interface, many forms
