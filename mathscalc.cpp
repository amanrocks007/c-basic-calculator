#include<iostream>

using namespace std;

class Maths//with class
{    public://public
    int plus1;
    int plus2;

        void A(){
                        cout<<"ADDITION:"<<endl ;
                       cout << "Enter first number: ";
                        cin >> plus1;
                        cout << "Enter second number: ";
                        cin >> plus2;
        }

    void add(){
                cout<<"Result for add: "<< plus1 + plus2 <<endl;
                    cout<<"||"<<endl;
                    cout<<"||"<<endl;

    };

    int sub1;
    int sub2;

    void B (){          cout<<"SUBTRACT:"<<endl;
                        cout << "Enter first number: ";
                        cin >> sub1;
                        cout << "Enter second number: ";
                        cin >> sub2;
        }

    void subtract(){
                cout<<"Result for sub: "<< sub1 - sub2 <<endl;
                cout<<"||"<<endl;
                    cout<<"||"<<endl;

    };

    int mul1;
    int mul2;

    void C(){            cout<<"MULTICTION:"<<endl ;
                        cout << "Enter first number: ";
                        cin >> mul1;
                        cout << "Enter second number: ";
                        cin >> mul2;
        }

    void mul(){
                cout<<"Result for Mul: "<< mul1 * mul2 <<endl;
                cout<<"||"<<endl;
                    cout<<"||"<<endl;

    };

    int divide1;
    int divide2;

    void D(){            cout<<"DIVIDE:"<<endl ;
                        cout << "Enter first number: ";
                        cin >> divide1;
                        cout << "Enter second number: ";
                        cin >> divide2;
        }

    void divide(){
                cout<<"Result for Divide: "<< divide1 / divide2 <<endl;
                cout<<"||"<<endl;
                    cout<<"||"<<endl;

    };

    int mod1;
    int mod2;

    void E(){            cout<<"MODULUS:"<<endl ;
                        cout << "Enter first number: ";
                        cin >> mod1;
                        cout << "Enter second number: ";
                        cin >> mod2;
        }

    void mod(){
                cout<<"Result for Mod "<< mod1 % mod2 <<endl;

    };



};

int main(){

    Maths a;
    a.A();
    a.add();
    a.B();
    a.subtract();
    a.C();
    a.mul();
    a.D();
    a.divide();
    a.E();
    a.mod();
    return 0;

}

