#include <iostream>
using namespace std;

class Calculator {
public:
    double Addition(double x, double y){
        return x+y;
    }

    double Subtraction(double x, double y){
        return x-y;
    }

    double Multiplication(double x, double y){
        return x*y;
    }
    
    double Division(double x, double y){
        if(y != 0){
            return x/y;
        }
        else{
            cout<<"Error: Cannot divide by zero."<<endl;
            return 0;
        }
    }
};

int main() {
    Calculator calculator;

    cout<<"Simple Calculator"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;

    char choice;
    cout<<"Enter Choice (1/2/3/4): ";
    cin>>choice;

    double nums1, nums2;

    cout<<"Enter first Number. ";
    cin>>nums1;

    cout<<"Enter second Number. ";
    cin>>nums2;

    switch (choice)
    {
    case '1':
        cout<<nums1<<" + "<<nums2<<" = "<<calculator.Addition(nums1, nums2)<<endl;
        break;
    case '2':
        cout<<nums1<<" - "<<nums2<<" = "<<calculator.Subtraction(nums1, nums2)<<endl;
        break;
    case '3':
        cout<<nums1<<" * "<<nums2<<" = "<<calculator.Multiplication(nums1, nums2)<<endl;
        break;
    case '4':
        cout<<nums1<<" / "<<nums2<<" = "<<calculator.Division(nums1, nums2)<<endl;
        break;

    default:
        break;
    }

    return 0;
}
