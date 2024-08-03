// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[10];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

//     arr[0] += 10;
//     cout << arr[0];
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[10];
//     for (int i = 0; i <= 9; i++){
//         cin >> arr[i];
//     }

//     for (int i = 0; i <= 9; i++){
//         cout << arr[i] * 10 << " ";
//     }
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string name;
//     cin >> name;
//     int n = 0;
//     while (name[n] != '\0')
//     {
//         n++;
//     }
//     cout << "The number of character in you name: " << n << endl;
    
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string name;
//     cin >> name;
//     int n = name.size();
//     cout << n;

//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main() {
    cout << "Before: ";
    string name;
    cin >> name;
    cout << "After: ";

    for (int i=0; i < name.size(); i++) {
        if(name[i] >= 'a' && name[i] <= 'z'){
            cout << char(name[i] - 32);
        }
        else
        {
            cout << name[i];
        }
    }

    return 0;
}