#include "Console.h"

void Console::Start() {
    while(true) {
        Function::welcome();
        char c = Function::input(0, true);
        
        if(c == 't') {                  // tad
            break;  
        }           
        else if(c == 'e') {             // enter
            while (true) {
                Function::menu();
                char menuChoice = Function::input(0, false);
                if (menuChoice == 't') {
                    break;
                }
            }
        }
    }
    Function::end();
}

vector<Student> Console::get_information() {
    vector<Student> tmp;    
    ifstream file("DSSV.csv");
    string line;

    while(getline(file, line)) {
        stringstream ss(line);
        vector<string> storage(5);

        for(int i = 0; i < 4; i++) {
            getline(ss, storage[i], ',');
        }
        getline(ss, storage[4]);
        tmp.push_back({storage[0], storage[2], storage[1], storage[3], stof(storage[4])});
    }
    return tmp; 
}
bool Console::check_information(vector<Student>& other) {
    bool oke = true;
    unordered_map<string, int> mp;
    vector<string> space_id;
    vector<string> space_cl;

    for(Student& x : other) {
        string _id = x.get_id();
        string _cl = x.get_cl();
        mp[_id]++;

        if(!Function::check_space(_id)) {
            space_id.push_back(_id);
        }
        if(!Function::check_space(_cl)) {
            space_cl.push_back(_cl);
        }
    }
    return oke;
}
void Console::print_information(vector<Student>& a) {
    for(Student& x : a) {
        cout << x << endl;
    }
}