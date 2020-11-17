#include "std_lib_facilities.h"



int main()
try {
    
    int birth_year = 2001;
    cout << showbase << endl;
    cout << birth_year << '\t' << ("decimal") << endl;
    cout << hex << birth_year << '\t' << ("hexadecimal") << endl;
    cout << oct << birth_year << '\t' << ("octal") << endl;
    cout << noshowbase << dec;
    
    
    int a, b, c, d;
    cin >> a >> oct >> b >> hex >> c >> d;
    cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;
    
    double num = 1234567.89;
    cout << defaultfloat << num << endl;
    cout << fixed << num << endl;
    cout << scientific << num << endl;
    
    cout << "L.name:" << setw(8) << "F.name:" << setw(13) << "Telephone:" << setw(18) << "e-mail_address:" << endl;
    
    cout << "Juhász" << setw(8) << "Ferenc" << setw(15) << "06309993076" << setw(21) << "jferi9970@gmail.com" << endl;
    
    cout << "Gyulai" << setw(7) << "Bence" << setw(16) << "06201234355" << setw(21) << "almassuti@gmail.com" << endl;
    
    cout << "Garasi" << setw(9) << "Zoltán" << setw(15) << "06308571562" << setw(21) << "nemtudom1@gmail.com" << endl;
    
    cout << "Németh" << setw(9) << "Zsófia" << setw(15) << "06701239236" << setw(21) << "nemeth999@gmail.com" << endl;
    
    cout << "Balogh" << setw(9) << "Márton" << setw(15) << "06207463892" << setw(21) << "baloggh11@gmail.com" << endl;
    
    
    
} catch (runtime_error& e) {
    cerr << "Oops: " << e.what() << endl;
} catch (...) {
    cerr << "Something went wrong" << endl;
}
