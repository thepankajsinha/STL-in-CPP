#include <iostream>
#include <map>
using namespace std;

int main(){

    //create a map
    map<string, int> studentMarks;

    //insert key-value pairs
    studentMarks["John"] = 85;
    studentMarks["Jane"] = 92;
    studentMarks["Alice"] = 78;

    //display key-value pairs
    for(auto i: studentMarks){
        cout << i.first << ": " << i.second << endl;
    }
    // Alice: 78
    // Jane: 92
    // John: 85

    //insert key-value pairs
    studentMarks["Bob"] = 95;

    //display key-value pairs
    for(auto i: studentMarks){
        cout << i.first << ": " << i.second << endl;
    }
    // Alice: 78
    // Bob: 95
    // Jane: 92
    // John: 85

    //print count of students
    cout<<"Number of students: "<<studentMarks.size()<<endl; // 4

    //find and print Bob's marks
    if(studentMarks.find("Bob")!=studentMarks.end()){
        cout<<"Bob's marks: "<<studentMarks["Bob"]<<endl; // Bob's marks: 95
    }else{
        cout<<"Bob not found"<<endl;
    }

    
}