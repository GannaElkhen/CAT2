#include <iostream> 
using namespace std ;
int main(){
int n;
cout<<"Enter the number ";
cin>>n;
int i=1;
int sum_odd=0;
int sum_even=0;
while(i<=n){
int x;
cout<<"Enter the number"<<i;
cin>>x;
if(i%2==0)
sum_even+=x;
else
sum_odd+=x;


i++;
}
cout<<"The sum of numbers on even position is: "<<sum_even<<"\n";
cout<<"The sum of numbers on odd position is: "<<sum_odd;






    return 0;
}