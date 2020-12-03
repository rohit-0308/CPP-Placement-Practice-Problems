#include <iostream>
#include <cmath>

using namespace std;

int armstrong(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n/=10;
    }

    return sum;
}

int main(){
    int n;
    cin>>n;
    int m = armstrong(n);
    string s = m==n ? "Armstrong Number" : "Not a Armstrong Number"; //Ternary Operator
    cout<<s;
    return 0;
}