#include <iostream> 
using namespace std ;
int main(){
int n;
cout<<"Enter the number of rows";
cin>>n;
int i=1;
while(i<=n){
int j=n;
while(j>=i){
    cout<<"*";
    j--;
}
cout<<"\n";
i++;
}





    return 0;
}