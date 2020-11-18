#include "std_lib_facilities.h"

class Year
{
    static const int min = 1800;
    static const int max = 2200;
public:
    class Invalid {};
    Year(int x) : y{x} { if (x<min || max<=x) throw Invalid{}; }
    int year() { return y; }
    void add_year() { y++; }
private:
    int y;
};


Year operator++(Year& year)
{
    year.add_year();
    return 0;
}


ostream& operator<< (ostream& os, Year year)
{
    return os << year.year();
}


enum class Month
{
jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};


Month operator++(Month& m)
{
    if (m == Month::dec)
        m = Month::jan;
    else
        m = Month(int(m)+1);
    return m;
}


ostream& operator<<(ostream& os, Month m)
{
    return os << int(m);
}


class Date
{
public:
    class Invalid {};

    Date(Year y, Month m, int d): year(y), month(m), day(d) {if (!isvalid()) throw Invalid{}; }

    int get_day() const {return day; }
    Month get_month() const {return month; }
    Year get_year() const {return year; }

    void add_day(int n);
    bool isvalid();

private:
    Year year;
    Month month;
    int day;
};
void Date::add_day(int n)
{
    day += n;
    if (day > 31)
        {
            ++month;
            day -= 31;
            if (month == Month::jan)
            {
                ++year;
            }
        }
}

bool Date::isvalid()
{
    if (day < 1 || day > 31)
        return false;
    else
        return true;
}


int main()
try{

Date today {Year{1978}, Month::jun, 25};


cout << "Today's date: " << today.get_year() << '.' << today.get_month() << '.' << today.get_day() << '.' << endl;

    Date tomorrow{today};

    tomorrow.add_day(1);

cout << "Tomorrow's date: " << tomorrow.get_year() << '.' << tomorrow.get_month() << '.' << tomorrow.get_day() << '.' << endl;



return 0;

} catch (Year::Invalid) {
    cerr << "Invalid year" << endl;
    return 1;
} catch (exception& e) {
    cerr << e.what() << endl;
    return 2;
} catch (...) {
    cerr << "Something went bad" << endl;
    return 3;
}

