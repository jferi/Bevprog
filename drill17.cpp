#include "std_lib_facilities.h"
void feladat(double i)
{
    cout << endl << i << ". feladat----------" << endl << endl;
}



void print_array10(ostream& os, int* a)
{
    for(int i = 1; i < 10; ++i)
    cout << a[i] << endl;
}

void print_array(ostream& os, int* a, int n)
{
    for(int i = 0; i < n; ++i)
    cout << a[i] << endl;
}

void print_vector(ostream& os, vector <int*> v, int n)
{
    for( int i = 0; i < n; ++i)
    cout << *v[i] << endl;
}


int main()
try {
    
//    ---------------------------------1-2-3-4-feladat------------------------------------
    int* nums1 = new int[10];
    
    feladat(2);
    
    for (int i = 0; i < 10; ++i)
    cout << nums1[i] << endl;
    
    feladat(4);
    
    print_array10(cout, nums1);
    
    delete[] nums1;
    
//    ---------------------------------5-6-7-feladat--------------------------------------
    feladat(5);
    
    int* nums2 = new int[10];
    
    for(int i = 0; i < 10; ++i)
    {
        nums2[i] = 100 + i;
        cout << nums2[i] << endl;
    }
    
    feladat(6);
    
    int* nums3 = new int[11];
    
    for(int i = 0; i < 11; ++i)
    {
        nums3[i] = 100 + i;
        cout << nums3[i] << endl;
    }
    
    feladat(8);
    
    int* nums4 = new int[20];
    
    for(int i = 0; i < 20; ++i)
    {
        nums4[i] = 100 + i;
        cout << nums4[i] << endl;
    }
    
    delete[] nums2;
    delete[] nums3;
    delete[] nums4;
    
    
    vector <int*> vectornums1;
    
    for(int i = 0; i < 10; ++i)
    {
        int* p = new int{100 + i};
        vectornums1.push_back(p);
        delete p;
    }
    
    feladat(10.1);
    
    
    print_vector(cout, vectornums1, 10);
    
    
    
    vector <int*> vectornums2;
    
    for(int i = 0; i < 11; ++i)
    {
        int* p = new int{100 + i};
        vectornums2.push_back(p);
        delete p;
    }
    
    feladat(10.2);

    print_vector(cout, vectornums2, 11);
    
    
    vector <int*> vectornums3;
    
    for(int i = 0; i < 20; ++i)
    {
        int* p = new int{100 + i};
        vectornums3.push_back(p);
        delete p;
    }
    
    feladat(10.3);
    
    
    print_vector(cout, vectornums3, 20);
    
    
    
    
    
    
    
    return 0;
    
} catch(runtime_error& e) {
    cerr << e.what() << endl;
} catch(...) {
    cerr << "Something unexpected happened" << endl;
}
