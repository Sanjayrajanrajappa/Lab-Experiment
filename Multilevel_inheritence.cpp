#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
class Student {
protected:
    string name;
    int rollNumber;
public:
    void Name(string studentName) {
        name = studentName;
    }
    void RollNumber(int number) {
        rollNumber = number;
    }
    void displayInfo() {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
    }
};
class Exam : public Student {
protected:
    float marks;
public:
    void Marks(float studentMarks) {
        marks = studentMarks;
    }
    float getMarks() {
        return marks;
    }
};
class Result : public Exam {
public:
    void displayResult() {
        if (marks >= 90) {
            cout<<"Grade scored is A"<<endl;
        } else if (marks >= 80) {
            cout<<"Grade scored is B"<<endl;
        } else if (marks >= 70) {
            cout<<"Grade scored is C"<<endl;
        } else if (marks >= 60) {
            cout<<"Grade scored is D"<<endl;
        } else {
            cout<<"Grade scored is F"<<endl;
        }
    }
};
int main() {
    Result student;
    string name,display_result;
    int roll_no,mark,marks[10],n,sum=0;
    cout<<"Enter a student name: ";
    getline(cin,name);
    student.Name(name);
    cout<<"Enter roll number: ";
    cin>>roll_no;
    student.RollNumber(roll_no);
    cout<<"Enter the number of subjects: ";
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"Enter mark of subject "<<i+1<<" : ";
        cin>>marks[i];
        sum+=marks[i];
    }
    mark = sum/n;
    cout<<"Average mark is: "<<mark;
    student.Marks(mark);
    cout<<"\n";
    student.displayResult();
    return 0;
}
