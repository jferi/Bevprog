#include "std_lib_facilities.h"



void print_array(ostream& os, int* a, int n)
{
    for(int i = 0; i < n; ++i)
    cout << "The " << i << ". unit points to: " << &a[i] << " \t the value is: " << a[i] << endl;
}



int main()
try {

    int n = 7;
    int* p1 = &n;
    
    cout << "The value of p1 is: " << *p1 << "\nThe memory it points to is: " << &n << endl << endl;
    
    int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};
    print_array(cout, p2, 7);
    
    int* p3 = p2;
    p1 = p2;
    p3 = p2;
    
    cout << "p1 points to: " << &p1 << endl;
    cout << "p2 points to: " << p2 << endl;
    
    delete[] p2;
    
    int array1[10] {1, 2, 8, 16, 32, 64, 128, 256, 512, 1024};
    int array2[10];
    
    p1 = array1;
    p2 = array2;
    
    for (int i = 0; i < 10; ++i)
    {
        p2[i] = p1[i];
    }
    
    vector<int> vector1;
    for (int i = 0; i < 10; ++i)
    {
        n = 2^i;
        vector1.push_back(n);
    }
    
    vector<int> vector2;
    
    
    p1 = &vector1[0];
    p2 = &vector2[0];
    
    
    for(int i = 0; i < 10; ++i)
    {
        vector2[i] = vector1[1];
    }
    
    
    
    return 0;
    
} catch(runtime_error& e) {
    cerr << e.what() << endl;
} catch(...) {
    cerr << "Something unexpected happened" << endl;
}
