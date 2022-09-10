#include<iostream>
using namespace std;

class Y;

class X {
        int data;
        public :
        void Indata(int value){
            data = value;
        }
        friend void exchange(X &, Y &);
        friend void display(X );         
};

class Y {
        int num;
        public :
        void Indata(int value){
            num = value;
        }
        friend void exchange(X &, Y &);  
        friend void display2(Y);         

};

void exchange(X& o1, Y & o2){                 // giving reference to the class objects

       int temp = o2.num;
       o2.num = o1.data;
       o1.data = temp;
}

void display(X a1){
    cout<<a1.data;
}

void display2(Y a1){
    cout<<a1.num;
}


int main (){
     X a1;
     a1.Indata(17);

     Y b1;
     b1.Indata(85);

     exchange(a1, b1);
     cout<<"Value of a1 = ";
     display(a1);
     cout<<" and b1 = \n";
     display2(b1);;
    return 0;
}