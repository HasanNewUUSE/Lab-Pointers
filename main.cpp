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
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     int *maxPtr = &arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > *maxPtr) {
//             maxPtr = &arr[i];
//         }
//     }
//
//     cout << "Max value: " << *maxPtr << endl;
//     cout << "Pointer to max: " << maxPtr << endl;
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
//     int arr[10] = {12, 45, 67, 23, 89, 90, 33, 56, 77, 88};
//     int *ptrA = arr;
//     for (int i = 0; i < 10; i++) {
//         cout << "Address: " << (ptrA + i) << endl;
//         cout << "Value: " << *(ptrA + i) << endl;
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

//                              Problem 7

// float calculateAverage(int *arr, int size) {
//     float sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += *(arr + i);
//     }
//     return sum / size;
// }
//
// int main() {
//     int socres[] = {88, 76, 90, 85, 92};
//     int size = 5;
//     cout << "Average score: " << calculateAverage(socres, size) << endl;
// }

//                        Problem 8

// int main() {
//     int treasures[] = {10, 20, 30, 40, 50};
//     int *ptr = treasures;
//     ptr += 4;
//     cout << "The key to the treasure is " << *ptr << "!" << endl;
// }

//                         Problem 9

// int main() {
//     int score = 75;
//     int *ptr = &score;
//     cout << "Original score: " << *ptr << endl;
//     *ptr += 10;
//     cout << "Updated score: " << *ptr << endl;
// }

//                           Problem 10

// int main() {
//
// }



























