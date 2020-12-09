#include "std_lib_facilities.h"

void feladat(int n)
{
    cout << endl << n << ". feladat-------" << endl << endl;
}


vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> vec)
{
    vector<int> lv(10);
    
    lv = gv;
    
    for(int i = 0; i < gv.size(); ++i)
    {
        cout << lv[i] << endl;
    }
    
    vector<int> lv2;
    
    lv2 = vec;
    
    cout << endl;
    
    for(int i = 0; i < vec.size(); ++i)
    {
        cout << lv2[i] << endl;
    }
    
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
    
    f(gv);
    
    vector<int> vv;
    
    for(int i = 0; i < 10; ++i)
    {
        int n = 0;
        n = factorial(i);
        vv.push_back(n);
    }
    
    feladat(2);
    
    f(vv);
    
    
    return 0;
    
} catch(runtime_error& e) {
    cerr << e.what() << endl;
} catch(...) {
    cerr << "Something unexpected happened" << endl;
}
