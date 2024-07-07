// /*Q1)Input consists of the following space-separated values: int, long, char, float, and double, respectively.
// Output Format
// Print each element on a new line in the same order it was received as input. 
// Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.*/

// /*#include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // Complete the code.
//     int integer;
//     long longInt;
//     char character;
//     float floatNum;
//     double doubleNum;

//     // Reading input
//     cin >> integer >> longInt >> character >> floatNum >> doubleNum;

//     // Printing output
//     cout << integer << endl;
//     cout << longInt << endl;
//     cout << character << endl;
//     cout.precision(3);
//     cout << fixed << floatNum << endl;
//     cout.precision(9);
//     cout << fixed << doubleNum << endl;
    
//     return 0;

// }*/
// /*#include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
// 	int age;
//     cin >> t;
//     for(int i=0; i < t; i++) {
//     	cin >> age;
//         Person p(age);
//         p.amIOld();
//         for(int j=0; j < 3; j++) {
//         	p.yearPasses(); 
//         }
//         p.amIOld();
      
// 		cout << '\n';
//     }

// class Person {
// private:
//     int age; // Instance variable

// public:
//     // Constructor
//     Person(int initialAge) {
//         if (initialAge < 0) {
//             std::cout << "Age is not valid, setting age to 0." << std::endl;
//             age = 0;
//         } else {
//             age = initialAge;
//         }
//     }

//     // Instance method: yearPasses()
//     void yearPasses() {
//         age++;
//     }

//     // Instance method: amIold()
//     void amIOld() {
//         if (age < 13) {
//             std::cout << "You are young." << std::endl;
//         } else if (age >= 13 && age < 18) {
//             std::cout << "You are a teenager." << std::endl;
//         } else {
//             std::cout << "You are old." << std::endl;
//         }
//     }
// }


// return 0;}*/
// // print the tables :-
// /*#include<bits/stdc++.h>
// using namespace std;
// void printMultiples(int a){
//     for(int i=1;i<=10;i++){
//         int result = a*i;
//         cout << a << " X " << i << " = "<< result << endl;
//     }
// }

// int main(){
//     int a;
//     cout <<"enter a number :";
//     cin>>a;
//     printMultiples(a);
//     return 0;
// }*/
// /*#include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int a;
//     cin >>a;
//     string b = "shreyans";
//     string c = "Jaiswal";
//     cout << b[0];
//     cout << b[2];
//     cout << b[4] <<" ";
//     cout << b[1];
//     cout << b[3];
//     cout << b[5] <<endl;
//     cout << c[0];
//     cout << c[2] <<" ";
//     cout << c[1];
//     cout << c[3];
//     return 0;
// }*/

// // print string .
// /*#include <iostream>
// #include <string>

// using namespace std;

// int main() {
//   int T;
//   cin >> T;

//   while (T--) {
//     string str;
//     cin >> str;

//     string even_str = "";
//     string odd_str = "";

//     for (int i = 0; i < str.length(); i++) {
//       if (i % 2 == 0) {
//         even_str += str[i];
//       } else {
//         odd_str += str[i];
//       }
//     }

//     cout << even_str << " " << odd_str << endl;
//   }

//   return 0;
// }*/

// // Question :- find out the leap year :-

// /*#include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout <<"enter the year :";
//     cin>> n;

//     if(n%400 == 0 && n%100 == 0){
//         cout << " it's a LEAP year ";
//     }
//     else if(n%4 == 0 && n%100 != 0){
//         cout << " it's a LEAP year ";
//     }
//     else{
//         cout << " it's not a leap year";
//     }

// return 0;

// }*/

// /* Question :-
// input = 5
// output = five

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout <<"enter the integer :";
//     cin >> n ;

//     if(n>=1 && n<=9){
//         switch(n){
//             case 1:
//             cout << "one";
//             break;
//             case 2:
//             cout << "two";
//             break;
//             case 3:
//             cout << "three";
//             break;
//             case 4:
//             cout << "four";
//             break;
//             case 5:
//             cout << "five";
//             break;
//             case 6:
//             cout << "six";
//             break;
//             case 7:
//             cout << "sevem";
//             break;
//             case 8:
//             cout << "eight";
//             break;
//             case 9:
//             cout << "nine";
//             break;
//         }
//     }
//     else{
//         cout << "Greater than 9";
//     }
    
// return 0;

// }*/


// // Question :- 
// //to print the following array in reverse order :-

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int array_size; // initialize array size
//     cin >> array_size; // input array size
    
//     int Array[array_size]; // initialize the array
    
//     for (int i = 0; i< array_size; i++) // input the array numbers
//     {
//         cin >> Array[i];
//     }
    
//     for (int i = array_size - 1; i > -1; i--) // print it out backwards
//     {
//         cout << Array[i] << " ";
//     }

// return 0;
// }

