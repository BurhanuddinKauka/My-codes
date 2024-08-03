// #include<bits/stdc++.h>
// using namespace std;

// void printName(string name) {
//     cout << "hey " << name;
// }

// int main() {
//     string name;
//     cin >> name;
//     printName(name);
//     return 2;
// } 

// #include<bits/stdc++.h>
// using namespace std;

// int sum(int num1, int num2){
//     int num3 = num1 + num2;
//     return num3;
// }

// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2);
//     cout << res;
// }

// Pass by reference:
#include<bits/stdc++.h>
using namespace std;

void change(string &name){
    name[3] = 'k';
    cout << name << endl;
}

int main() {
    string name;
    cin >> name;
    change(name);
    cout << name << endl;
} 
