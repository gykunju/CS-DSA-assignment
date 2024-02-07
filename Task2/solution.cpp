#include <iostream>
#include <string>

using namespace std;

class Course{
public:
    string course_code;
    string course_name;

    Course(string code, string name) : course_code(code), course_name(name){}
};

class Grade{
public:
    int mark;
    char the_grade;

    Grade(int m) : mark(m) {
        if (mark > 69) the_grade = 'A';
        else if (mark > 59) the_grade = 'B';
        else if (mark > 49) the_grade = 'C';
        else if (mark > 39) the_grade = 'D';
        else the_grade = 'E';
    }
    /*Grade(int m) : mark(m) {
        if (mark > 69){
            the_grade = "A";
    }else if(mark > 59){
        the_grade = "B";
    }else if ( mark > 49){
        the_grade = "C";
    }else if (mark > 39) {
        the_grade = "D";
    }else {
        the_grade = "E";
    }
    }*/
};

class Student{
public:
    string reg_no;
    string name;
    int age;
    Course course;
    Grade grades;

    Student() : reg_no(""), name(""), age(0), course(Course("", "")), grades(0) {}
    Student(string regestration, string std_name, int std_age, Course std_course, int mark) : reg_no(regestration), name(std_name), age(std_age), course(std_course), grades(mark){}

};


bool addStudent(Student students[], int std_count){
    if(std_count >= 40){
        cout << "Maximum students in the data. Cannot add more.";
        return false;
    }

    string regestration, std_name, courseCode, courseName;
    int std_age, mark;

    cout << "Enter registration number: ";
    cin >> regestration;
    cout << "Enter name: ";
    cin >> std_name;
    cout << "Enter age: ";
    cin >> std_age;
    cout << "Enter course code: ";
    cin >> courseCode;
    cout << "Enter course name: ";
    cin >> courseName;
    cout << "Enter mark: ";
    cin >> mark;

    Course studentCourse(courseCode, courseName);
    students[std_count] = Student(regestration, std_name, std_age, studentCourse, mark);

    cout << "/STUDENT/" << endl;
    cout << "name: " << std_name << endl;
    cout << "regestration: " << regestration << endl;
    cout << "Age: " << std_age << endl;


    return true;
}

void editStudent(Student students[], int std_count){
    string regestration;
    cout << "Enter regestration number of the student: ";
    cin >> regestration;

    for(int i = 0; 1 < std_count; i++){
        if(students[i].reg_no == regestration){
            cout << "Enter new registration number: ";
            cin >> students[i].reg_no;
            cout << "Enter new name: ";
            cin >> students[i].name;
            cout << "Enter new age: ";
            cin >> students[i].age;
            cout << "Enter new course code: ";
            cin >> students[i].course.course_code;
            cout << "Enter new course name: ";
            cin >> students[i].course.course_name;
            return;
        }
    }
    cout << "Regestration number does not exist";
}
void nameSearch(Student students[], int std_count){
    string search_name;
    cout << "\nEnter name: ";
    cin >> search_name;

    for(int i = 0; i < (std_count - 1); i++){
        if (students[i].name == search_name){
            cout << "/Student Details" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Regestration number: " << students[i].reg_no << endl;
            cout << "Age: " << students[i].age << endl;
            return;
        }
    }
    cout << "Student does not exist" << endl;
}

Student regSearch(Student students[], int std_count){
    string search_reg;
    cout << "\nEnter regestration number: ";
    cin >> search_reg;

    for(int i = 0; i < (std_count - 1); i++){
        if (students[i].reg_no == search_reg){
            cout << "/Student Details" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Regestration number: " << students[i].reg_no << endl;
            cout << "Age: " << students[i].age << endl;
            return students[i];
        }
    }
}

void findStudent(Student students[], int std_count){
    int choice;
    cout << "\nChoose method" << endl;
    cout << "1. Enter name" << endl;
    cout << "2. Enter regestration number" << endl;
    cout << "3. Go back" << endl;
    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            nameSearch(students, std_count);
            break;
        case 2:
            regSearch(students, std_count);
            break;
        case 3:
            break;
    }

}

int main(){
    Student students[40];
    int std_count = 0;

    int choice;
    do{
        cout << "\nManagement System" << endl;
        cout << "1.Add new student" << endl;
        cout << "2.Edit existing student" << endl;
        cout << "3.Find existing student" << endl;
        cout << "4.Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
               addStudent(students, std_count);
               break;
            case 2:
                editStudent(students, std_count);
                break;
            case 3:
                findStudent(students, std_count);
                break;
            case 4:
                cout << "Exiting" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}


