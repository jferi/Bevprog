#include "std_lib_facilities.h"

void feladat(int n)
{
    cout << endl << n << ". feladat------------" << endl << endl;;
}


int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int a[], int sz)
{
    int la[10];
    
    for(int i = 0; i < sz; ++i)
    {
        la[i] = ga[i];
    }
    
    for(int i = 0; i < sz; ++i)
    {
        cout << la[i] << endl;
    }
    
    cout << endl;
    
    int* p = new int[sz];
    
    for(int i = 0; i < sz; ++i)
    {
        p[i] = a[i];
    }

    for(int i = 0; i < sz; ++i)
    {
        cout << p[i] << endl;
    }
    
    delete[] p;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n-1);
    }
    else return 1;
}

int main()
try {
    
    feladat(1);
    
    f(ga, 10);
    
    
    int aa[10] = {1, factorial(2), factorial(3), factorial(4), factorial(5), factorial(6), factorial(7), factorial(8), factorial(9), factorial(10)};
    
    feladat(2);
    
    f(aa, 10);
    
    
    return 0;
    
} catch(runtime_error& e) {
    cerr << e.what() << endl;
} catch(...) {
    cerr << "Something unexpected happened!" << endl;
}