#include<iostream>
using namespace std;            

int  powerOfTwo(double n){
    if(n==1)
        return true;
    else if(n<1)
        return false;
    else
       return powerOfTwo(n / 2);
}
        int main()
        {
            double n;
            cin>>n;
            cout<<powerOfTwo(n)<<endl;
            return 0;
        }