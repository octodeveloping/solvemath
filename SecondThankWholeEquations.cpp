#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
int a;
int b;
int c;
int delta;
int x1;
int x2;
cout<<“insert the valor of a , b and c in order ”;
cin>>a;
cin>>b;
cin>>c;
delta = b*b - 4*a*c;
if(delta <= 0){
cout<<“The operation is impossible , restart the program with new or fixed numbers”;

}

else{
x1 = (-b - sqrt(delta)) / 2*a;
x2 = (-b + sqrt(delta)) / 2*a;
cout<<“The risults of equation are ”<< x1 << “ and ”<<x2;

}
return 0;
}
