/*#include <bits/stdc++.h>
using namespace std;
//normal function :-
void PrintName(){
    cout<<"Shreyans !";
}

int main(){
    // void function - does not return anything :-
    PrintName();
    return 0;
}*/

//using input names to print through functions:-
/*void Name(string name){
    cout<<"Hey "<< name <<endl;
}
int main(){
    string name;
    cin >> name;
    Name(name);

    string name2;
    cin >> name2;
    Name(name2);
    return 0;
}*/

//return value functions :-
/*int sum (int num1 , int num2){
    int num3 = num1 + num2; // 5+6 = 11
    return num3;
}
int main(){
    int num1,num2 ;
    cin >> num1 >> num2 ;
    int res = sum(num1, num2); // num1 = 5 , num2 = 6
    cout << "the sum is : " << res ; //11
    return 0;
    }*/
/*int main(){
    int num1, num2 ;
    cin >> num1 >> num2 ;
    int minimum = min(num1 , num2);
    int maximum = max(num1 , num2);
    cout << "minimum is : " << minimum << endl;
    cout << "maximum is : " << maximum;
    return 0;
}*/

/*int maxx(int num1 , int num2){
    if(num1 >= num2){
        return num1;
    }
        return num2;
}
int main (){
    int num1 , num2;
    cin >> num1 >> num2 ;
    int t = maxx(num1 , num2);
    cout << t;
    return 0 ;
}*/

// function pass by value (using integers):-

/*#include <bits/stdc++.h>
using namespace std ;

void loopr(int num){
    cout << num << endl;
    num +=5;
    cout << num << endl;
    num +=10;
    cout << num << endl;
}
int main(){
    int num = 10;
    loopr(num);
    cout << num << endl;
    return 0 ;
}*/

// function pass by value (using strings):-

/*#include <bits/stdc++.h>
using namespace std ;
void change(string s){
    s[0]='t';
    cout<<"after change : " << s <<endl;
    s[2]='n';
    cout<<"after change : " << s <<endl;
}
int main() {
    string s ="raj";
    change(s);
    cout <<"before change : " <<  s << endl;
    return 0;
}*/

// function pass by reference (using strings):-
// only changed due to "&" ,as it takes from the main address (raj) and continues to print the same again .

/*#include <bits/stdc++.h>
using namespace std ;
void change(string &s){
    s[0]='t';
    cout<<"after change : " << s <<endl;
    
}
int main() {
    string s ="raj";
    change(s);
    cout <<"before change : " <<  s << endl;
    return 0;
}*/

// function pass by reference (using integers):-

/*#include <bits/stdc++.h>
using namespace std ;

void loopr(int &num){
    cout << num << endl;
    num +=5;
    cout << num << endl;
    num +=10;
    cout << num << endl;
}
int main(){
    int num = 10;
    loopr(num);
    cout << num << endl;
    return 0 ;
}*/

// function pass by value (using arrays):-

#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[5];
    for(int i=0;i<=4;i = i+1) {
        cin >> arr[i];
    }

    for(int i=0;i<=4;i = i+1) {
        cout << arr[i] << " "<<"\n";
    }

return 0;
}









