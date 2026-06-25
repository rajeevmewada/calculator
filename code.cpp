#include <iostream>
using namespace std;

int main() {
   int a,b,choice;
   cout<<"enter two numbers";
   cin>>a>>b;


   cout<<"choice 1 for sum\n choice 2 for mul\n choice 3 for sub\n choice 4 for div\n";
   cin>>choice;

   if(choice==1){
 cout<<"sum of a and b is:"<<a+b<<"\n";
   }

   else if(choice==2){
 cout<<"prod of a and b is:"<<a*b<<"\n";     
}
  else if (3){
     cout<<"diff of a and b is:"<<a-b<<"\n";
  }
  else if(choice==4){
   cout<<"div of a and b is:"<<a/b<<"\n";
  }
  else{
    cout<<"thank you";
  }
    return 0;
}
