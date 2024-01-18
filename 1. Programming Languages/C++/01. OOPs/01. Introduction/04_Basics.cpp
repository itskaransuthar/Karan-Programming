/*
OBJECT:
-> It is a real world entity that has a state and behavior
-> Anything that exist in physical world 
-> It is an instance of a class

Class vs Object:
-> Class does not exist in real world, it is just a blueprint of object like how object will look like
whereas object exists in real world which has some state and behavior
-> No memory is allocated for class because class is just a blueprint of object whereas memory of object is allocated once it is created
*/

//? Resource: https://www.javatpoint.com/structure-padding-in-c

#include <iostream>
using namespace std;

class A1 {     //* 1
    
};

struct A2 {    //* 1

};

class B1 {     //* 4
    int a;
};

struct B2 {    //* 4
    int a;
};

class C1 {     //* 8
    int a;
    int b;
};

struct C2 {    //* 8
    int a;
    int b;
};


class D1 {     //* 8
    int a;
    char c;
};

struct D2 {    //* 8
    int a;
    char c;
};

class E1 {     //* 8
    int a;
    char b;
    char c;
};

struct E2 {    //* 8
    int a;
    char b;
    char c;
};

class F1 {     //* 8
    int a;
    char b;
    char c;
    char d;
};

struct F2 {    //* 8
    int a;
    char b;
    char c;
    char d;
};

class G1 {     //* 8
    int a;
    char b;
    char c;
    char d;
    char e;
};

struct G2 {    //* 8
    int a;
    char b;
    char c;
    char d;
    char e;
};

class H1 {     //* 12
    int a;
    char b;
    char c;
    char d;
    char e;
    char f;
};

struct H2 {    //* 12
    int a;
    char b;
    char c;
    char d;
    char e;
    char f;
};

class I1 {     //* 1
    char a;
};

struct I2 {    //* 1
    char a;
};

class J1 {     //* 2
    char a;
    char b;
};

struct J2 {    //* 2
    char a;
    char b;
};

class K1 {     //* 5
    char a;
    char b;
    char c;
    char d;
    char e;
};

struct K2 {    //* 5
    char a;
    char b;
    char c;
    char d;
    char e;
};

class L1 {     //* 8
    double a;
};

struct L2 {    //* 8
    double a;
};

class M1 {     //* 16
    double a;
    char c;
};

struct M2 {    //* 16
    double a;
    char c;
};

class N1 {     //* 16
    double a;
    int b;
    char c;
};

struct N2 {    //* 16
    double a;
    int b;
    char c;
};

class O1 {     //* 16
    char c;
    int b;
    double a;
};

struct O2 {    //* 16
    char c;
    int b;
    double d;
};

class P1 {     //* 24
    char c;
    int b;
    double d;
    char e;
};

struct P2 {    //* 24
    char c;
    int b;
    double d;
    char e;
};

class Q1 {     //* 12
    char c;
    int a;
    char b;
};

struct Q2 {    //* 12
    char c;
    int a;
    char b;
};

class R1 {     //* 24
    char c;
    int b;
    char d;
    double e;
};

struct R2 {    //* 24
    char c;
    int b;
    char d;
    double e;
};

int main()
{
    class A1 a1;     // A1 a1;
    struct A2 a2;    // A2 a2;
    cout << "Size of class A1:  " << sizeof(a1) << endl;
    cout << "Size of struct A2: " << sizeof(a2) << endl;
    cout << endl;

    class B1 b1;
    struct B2 b2;
    cout << "Size of class B1:  " << sizeof(b1) << endl;
    cout << "Size of struct B2: " << sizeof(b2) << endl;
    cout << endl;

    C1 c1;
    C2 c2;
    cout << "Size of class C1:  " << sizeof(c1) << endl;
    cout << "Size of struct C2: " << sizeof(c2) << endl;
    cout << endl;

    class D1 d1;
    struct D2 d2;
    cout << "Size of class D1:  " << sizeof(d1) << endl;
    cout << "Size of struct D2: " << sizeof(d2) << endl;
    cout << endl;

    class E1 e1;
    struct E2 e2;
    cout << "Size of class E1:  " << sizeof(e1) << endl;
    cout << "Size of struct E2: " << sizeof(e2) << endl;
    cout << endl;

    class F1 f1;
    struct F2 f2;
    cout << "Size of class F1:  " << sizeof(f1) << endl;
    cout << "Size of struct F2: " << sizeof(f2) << endl;
    cout << endl;

    class G1 g1;
    struct G2 g2;
    cout << "Size of class G1:  " << sizeof(g1) << endl;
    cout << "Size of struct G2: " << sizeof(g2) << endl;
    cout << endl;

    class H1 h1;
    struct H2 h2;
    cout << "Size of class H1:  " << sizeof(h1) << endl;
    cout << "Size of struct H2: " << sizeof(h2) << endl;
    cout << endl;

    class I1 i1;
    struct I2 i2;
    cout << "Size of class I1:  " << sizeof(i1) << endl; 
    cout << "Size of struct I2: " << sizeof(i2) << endl;
    cout << endl;

    class J1 j1;
    struct J2 j2;
    cout << "Size of class J1:  " << sizeof(j1) << endl;
    cout << "Size of struct J2: " << sizeof(j2) << endl;
    cout << endl;

    class K1 k1;
    struct K2 k2;
    cout << "Size of class K1:  " << sizeof(k1) << endl;
    cout << "Size of struct K2: " << sizeof(k2) << endl;
    cout << endl;

    L1 l1;
    L2 l2;
    cout << "Size of class L1:  " << sizeof(l1) << endl;
    cout << "Size of struct L2: " << sizeof(l2) << endl;
    cout << endl;

    M1 m1;
    M2 m2;
    cout << "Size of class M1:  " << sizeof(m1) << endl;
    cout << "Size of struct M2: " << sizeof(m2) << endl;
    cout << endl;

    N1 n1;
    N2 n2;
    cout << "Size of class N1:  " << sizeof(n1) << endl;
    cout << "Size of struct N2: " << sizeof(n2) << endl;
    cout << endl;

    O1 o1;
    O2 o2;
    cout << "Size of class O1:  " << sizeof(o1) << endl;
    cout << "Size of struct O2: " << sizeof(o2) << endl;
    cout << endl;

    P1 p1;
    P2 p2;
    cout << "Size of class P1:  " << sizeof(p1) << endl;
    cout << "Size of struct P2: " << sizeof(p2) << endl;
    cout << endl;

    Q1 q1;
    Q2 q2;
    cout << "Size of class Q1:  " << sizeof(q1) << endl;
    cout << "Size of struct Q2: " << sizeof(q2) << endl;
    cout << endl;

    R1 r1;
    R2 r2;
    cout << "Size of class R1:  " << sizeof(r1) << endl;
    cout << "Size of struct R2: " << sizeof(r2) << endl;
}