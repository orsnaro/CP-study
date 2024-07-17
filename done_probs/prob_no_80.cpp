//problem: https://www.hackerrank.com/challenges/virtual-functions/problem





#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    protected:
        string name;
        int age;
    public :
        virtual void getdata() = 0;
        virtual void putdata() = 0;
    
};

class Professor : public Person {
    private:
        int  publications; 
        static int cur_id;
    public:
        
        void getdata() override {
            cin >> name >> age >> publications;
        }
        void putdata() override {
            cur_id ++;
            cout << name << ' ' << age << ' ' << publications << ' ' << cur_id << endl;
        };
        
};

class Student : public Person {
    private:
        int marks[6];
        static int cur_id;
    public:
        Student(){
        }
    
        void getdata() override {
            cin >> name >> age;
            auto sz = sizeof(marks) / sizeof(marks[0]);
            for(size_t i = 0; i < sz; i++){ cin >> marks[i]; }
        }; 
        void putdata() override {
            cur_id ++;
            cout << name << ' ' << age << ' ';
            int tmpSum = 0;
            for( auto x : marks ){tmpSum += x;}
            cout << tmpSum << ' ' << cur_id << endl;
        };
    
};
int Professor:: cur_id = 0;
int Student:: cur_id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
