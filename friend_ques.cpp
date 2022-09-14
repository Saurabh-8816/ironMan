#include<iostream>
using namespace std;

class A;

class B{
       public:
         int addData(A o1);
           
};

class A {
        int a;
        int b;

        friend int B :: addData(A );
        friend int add (A o1);
        public :
        void getdata(int x, int y){
             a = x;
             b = y;
        }
};


int B :: addData(A o1){
    return o1.a + o1.b;
}

int add(A o1){
         return o1.a + o1.b;
}

int main(){
          
         A o1;
         o1.getdata(10, 25);

         /*
         This :-
         int result = add(o1); 

         -Or- 
         B o2;
         int result = o2.addData(o1);
         */

        B o2;
        int result = o2.addData(o1);
         cout<<result;
    return 0;
}