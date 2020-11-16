#include "std_lib_facilities.h"

struct Point
{
    int x;
    int y;
};

bool operator==(const Point& r1, const Point& r2)
{
    return (r1.x==r2.x && r1.y==r2.y);
}

ostream& operator<< (ostream& os, Point p)
{
    return os << p;
}

int main()
try {
    
       
vector<Point> original_points;
    int x, y;
    for (int i = 0; i < 7; i++)
    {
    cout << "Please enter two numbers (in this formation: x and y)\n";
    cin >> x;
    cin >> y;
    original_points.push_back(Point{x,y});
    }
    
    for (const auto& r : original_points)
        cout << r.x << '\t' << r.y << endl;
    
    string oname;
    oname = "mydata.txt";
    ofstream ost {oname};
    
    for (const auto& r : original_points)
        ost << r.x << '\t' << r.y << endl;
    oname.end();
    
    vector<Point> processed_points;
    
    ifstream ist {oname};
    while (ist >> x >> y)
    {
    processed_points.push_back(Point{x, y});
    }
    
    cout << "Original_points vector's elements: " << endl;
    for (const auto& r : original_points)
        cout << r.x << '\t' << r.y << endl;

    
    cout << "Processed_points vector's elements: " << endl;
    for (const auto& r : processed_points)
        cout << r.x << '\t' << r.y << endl;

    
    vector<Point> different;
    if (original_points.size() != processed_points.size())
        error("Something is wrong! The two vectors differ in size.");
    if (original_points != processed_points)
        error("Something is wrong! One (or more) of the elements differ.");
    cout << "Success, the vectors are equal" << endl;
    
    
    
    
    return 0;
} catch(runtime_error& e) {
    cerr << "Error: " << e.what() << endl;
} catch(...) {
    cerr << "Something went wrong. :(" << endl;
}
