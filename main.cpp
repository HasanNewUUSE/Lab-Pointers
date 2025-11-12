#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

//                                   Problem 1

// int findMax(int *arr, int size) {
//     int max = *arr;
//     for (int *p = arr; p < arr + size; p++) {
//         if (max < *p) {
//             max = *p;
//         }
//     }
//     return max;
// }
//
// int main() {
//     int heights [] = {150, 165, 172, 160, 180};
//     int size = sizeof(heights) / sizeof(heights[0]);
//     cout << "Maximum height: " << findMax(heights, size) << endl;
// }

//                      Problem 2

// int main() {
//     int a, b;
//     cin >> a >> b;
//     int *ptrA = &a;
//     int *ptrB = &b;
//     cout << *ptrA << endl;
//     cout << *ptrB << endl;
// }

//                          Problem 3

// int main() {
//     int n;
//     int max;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for (auto x: arr) {
//         max = arr[0];
//         if (x > max) {
//             max = x;
//         }
//     }
//     int *ptr = &max;
//     cout << ptr << endl;
// }

//                         Problem 4

// #define val 33.3
// #define number 50
//
// int a;
//
// int& fun() { return a; }
// int foo() { return a; }
//
// int main() {
//     int n1=9,n2=11, *ptr_1=nullptr, *ptr_2=nullptr, k=0;
//     double t;
//
//     ptr_1=&n1;
//     ptr_2=&n2;
//     t=val;
//     k=val;
//     // foo()=number;
//     fun()=number;
//
//     cout<<number<<" "<<n1+3<<" "<<t-1<<" "<<(n1-1)<<endl;
//     return 0;
// }

//                           Problem 5
// int main() {
//     int arr[10];
//     for (int i = 0; i < 10; i++) {
//         arr[i] = (i+i*10)*(i+i*10);
//     }
//     for (auto i : arr) {
//         int *ptr = &i;
//         cout << ptr << endl;
//     }
// }

//                             Problem 6

// int main() {
//     int Secret;
//     cout << "Please enter the secret number: ";
//     cin >> Secret;
//     int *ptr = &Secret;
//     cout << "The secret number is" << " " << *ptr << endl;
// }



























