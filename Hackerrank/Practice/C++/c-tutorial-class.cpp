#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
private:
    int _age, _standard;
    string _first_name, _last_name;
public:
    void set_age (int age) {
        this->_age = age;
    }
    void set_standard(int standard) {
        this->_standard = standard;
    }
    void set_first_name(string first_name) {
        this->_first_name = first_name;
    }
    void set_last_name(string last_name) {
        this->_last_name = last_name;
    }
    int get_age () {
        return this->_age;
    }
    string get_last_name () {
        return this->_last_name;
    }
    string get_first_name () {
        return this->_first_name;
    }
    int get_standard () {
        return this->_standard;
    }
    string to_string () {
        stringstream ss;
        ss << this->_age << "," << this->_first_name << "," << this->_last_name << "," <<this->_standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

