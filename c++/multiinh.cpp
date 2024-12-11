#include<iostream>
using namespace std;
// examlpe of multiple inheritance
// base class - class A
class A{
    private:
    int a;
    public:
    void get_a(int val_a){
        a=val_a;
    }
    void put_a(){
        cout<<" value of a: "<< a <<endl;
    }
};
// base class - class B
class B{
    private:
    int b;
    public:
    void get_b(int val_b){
        b=val_b;
    }
    void put_b(){
        cout<<" value of b: "<< b <<endl;
    }
};
// base class - class C
class C{
    private:
    int c;
    public:
    void get_c(int val_c){
        c=val_c;
    }
    void put_c(){
        cout<<" value of c: "<< c <<endl;
    }
};
// class final: public A, public B, public C
class final: public A, public B, public C{
    public:
    void printvalues(void){
        // now. we can call the functions of class A, B, C
        put_a();
        put_b();
        put_c();
    }
};
int main(){
    // create object of final (derived class)
    final objFinal;
    objFinal.get_a(100);
    objFinal.get_b(200);
    objFinal.get_c(300);

    // print all values using final:printValues
    objFinal.printvalues();
    return 0;
}








