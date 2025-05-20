// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
// int p, n,r;
// cin >> p >> n >> r;
// cout << p*pow((1+ r/100.0),n)-p;
// }

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float principal, rate, time, compoundInterest;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest: ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    cout << "Compound Interest: " << compoundInterest << endl;

 return 0;
}