// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
 int age;
 bool id;
 cout<<"plese enter your age";
 cin>>age;
 cout<<"student ID...?";
 cin>>id;
 if (age >= 18 && id){
 cout<<"allow";
     
 }
 else if (age>=18){
     cout<<"ID is not there";
     
 }else if (id){
     cout<<"age is below 18";
 }else {
     cout<<"not allowed";
 }
    return 0;
}