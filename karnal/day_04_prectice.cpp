#include<iostream>

using namespace std;
int main(){

    bool aadhar = true;
    bool pancard = true;

    // && opreator - check both condition
    // || or opreator - check any one condition

    if( aadhar == true && pancard == true){
       cout<<"you can open account in our bank";
    }else{
      cout<<"you can't";

    }
     return 0;

}