/* Write a program that prompts the user to input an integer and then outputs both the individual digits of the number and the sum of the digits. For example, it should output the individual digits of 3456 as 3 4 5 6, output the individual digits of 8030 as 8 0 3 0, output the individual digits of 2345526 as 2 3 4 5 5 2 6, output the individual digits of 4000 as 4 0 0 0, and output the individual digits of -2345 as 2 3 4 5. */ 

#include<iostream>
using namespace std;

int main(){
  int n, sum = 0;
  char ch;
  string s = "";
  
  cout<<"Enter number: ";
  cin>>n;
  
  if(n<0){
   n = -1*n;
  }
  
  while(n>0){
    ch = '0'+(n%10);
   s = ch+s;
   sum += (n%10);
   n = n / 10;
  }
  
  for(int i = 0;i<s.length();i++){
    cout<<s[i]<<" ";
  }
  cout<<"\nSum = "<<sum<<endl;
  
  return 0;
}