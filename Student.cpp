#include <iostream>
using namespace std;

class Student {
private:
    string id;
    string fname;
    string lname;
    string classs;
    float mark;

public:
    Student(string _id, string _fname, string _lname, string _class, float _mark) : id(_id), fname(_fname), lname(_lname), classs(_class), mark(_mark) {}
    
    friend ostream& operator << (ostream& cout, Student& other) {
        cout << other.id << " ";
        cout << other.lname << " ";
        cout << other.fname << " ";
        cout << other.classs << " ";
        cout << other.mark << " ";
        return cout;
    } 

    string get_id() { return id; }
    string get_cl() { return classs; }
};
