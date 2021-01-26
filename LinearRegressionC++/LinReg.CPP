#include<bits/stdc++.h> 
using namespace std;    
bool custom_sort(double a, double b);
int main()
{
/*Intialization Phase*/
double x[] = {1, 2, 4, 3, 5};   
double y[] = {1, 3, 3, 2, 5};   
vector<double>error;            
double err;
double b0 = 0;                  
double b1 = 0;                  
double alpha = 0.01;            
for (int i = 0; i < 20; i ++)
{    
    int idx = i % 5;               
    double p = b0 + b1 * x[idx];   
    err = p - y[idx];               
    b0 = b0 - alpha * err;        
    b1 = b1 - alpha * err * x[idx];
    cout<<"B0="<<b0<<" "<<"B1="<<b1<<" "<<"error="<<err<<endl;
    error.push_back(err);
}
sort(error.begin(),error.end(),custom_sort);
cout<<"Final Values are: "<<"B0="<<b0<<" "<<"B1="<<b1<<" "<<"error="<<error[0]<<endl;
cout<<"Enter a test x value";
double test;
cin>>test;
double pred=b0+b1*test;
cout<<endl;
cout<<"The value predicted by the model= "<<pred;
}
