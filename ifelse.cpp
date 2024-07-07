/* #include <iostream>
using namespace std;

int main(){
// write a program that takes input of adult:-

    int age ;
    cin >> age;

    if(age >=18){
        cout <<"You are an adult !";
    }
    else{
        cout <<"You are not an adult !";
    }
}*/

// if else problems :-

/*A school has following rules for grading system:
a.Below 25 -F
b. 25 to 44-E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 -B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade

#include <bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if(marks <25){
        cout<<"grade = F "<< endl;
    }
    if(marks >=25 && marks <=44){
        cout<<"grade = E" << endl;
    }
    if(marks >=45 && marks <=49){
        cout<<"grade = D" << endl;
    }
    if(marks >=50 && marks <=59){
        cout<<"grade = C" << endl;
    }
    if(marks >=60 && marks <=79){
        cout<<"grade = B" << endl;
    }
    if(marks >=80 && marks <=100){
        cout<<"grade = A" << endl;
    }

return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    cout <<"enter age :";
    int age;
    cin>>age;
    if(age>=18 && age<=34){
        cout<<"you are eligible for JOB" << endl;
    }
    else if (age>=35 && age<=55){
        cout << "you are eligible for JOB , but you are very soon for retirement" << endl;
    }
    else if (age>=55 && age<=97){
        cout<< "you are in retirement" << endl;
        }
return 0;
}
//Problem :-

#include <iostream>

int main() {
    char ch;
    
    std::cout << "Enter a character: ";
    std::cin >> ch;
    
    if (ch >= 'A' && ch <= 'Z') {
        std::cout << "1\n";
    } else if (ch >= 'a' && ch <= 'z') {
        std::cout << "0\n";
    } else {
        std::cout << "-1\n";
    }
    
    return 0;
}

