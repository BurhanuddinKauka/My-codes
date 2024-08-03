// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int age;
//     cin >> age;
//     if( age >= 18 ) {
//         cout << "You are an adult";
//     }
//     else if(age < 18) {
//         cout << "You are not an adult";
//     }
//     return 0;
// }

/*
 A school has following rules for grading system:
    a. below 25 - F
    a. 25 to 44 - E
    a. 45 to 49 - D
    a. 50 to 59 - C
    a. 60 to 79 - B
    a. 80 to 100 - A
 Ask user to enter marks and print the corresponding grade.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if(marks < 25){
        cout << "Your grade is F";
    }

    else if(marks >= 25 && marks <= 44){
        cout << "Your grade is E";
    }

    else if(marks >= 45 && marks <= 49){
        cout << "Your grade is D";
    }

    else if(marks >= 50 && marks <= 59){
        cout << "Your grade is C";
    }

    else if(marks > 60 && marks <= 79){
        cout << "Your grade is B";
    }

     else if(marks >= 80 && marks <= 100){
        cout << "Your grade is A";
    }

    else {
        cout << "Please enter marks from 1-100, Thus wrong input!" ;
    }

    return 0;
}