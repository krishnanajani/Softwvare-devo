// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    cout<<"Enter the money";
    int num;
    cin>>num;
    if (200<=num) cout<<"1st class in movie theater";
    else if (150<=num) cout<<"2nd class in movie theaters";
    else if (100<=num) cout<<"3nd class in movie theaters";
    else cout<<"low class";
    return 0;
}