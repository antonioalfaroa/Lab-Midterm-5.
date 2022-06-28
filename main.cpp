#include <iostream>
using namespace std;

int main(void){
    int a=123, b=456;
    const int* p = &a; //this is a constant pointer pointig to a constant integer so the integer can not be changed
    int const* q = &a; //this is a pointer pointing to a constant integer
  cout<<"const int* : "<<*p<<endl;
  cout<<"int const* : "<<*q<<endl;
  cout<<"No difference"<<endl;
  //There is no difference in the address too

  cout<<"const int* : "<<p<<endl;
  cout<<"int const* : "<<q<<endl;
  cout<<"No difference"<<endl;
    return 0;
}
