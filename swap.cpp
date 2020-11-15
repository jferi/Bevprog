#include "../std_lib_facilities.h"

void swap_v(double a, double b)
{
	double temp; 
	temp = a, 
	a=b; 
	b=temp;
}

void swap_r(double& a, double& b)
{
	double temp; 
	temp = a, 
	a=b; 
	b=temp;
}

/*void swap_cr(const double& a, const double& b)
{
	double temp; 
	temp = a, 
	a=b; 
	b=temp;
}
*/
int main()
{
	double y = 7;
	double x =9;

cout << "x = " << x << " y = " << y << endl;

swap_r(x,y); 
cout << "x = " << x << " y = " << y << endl;

//const double cx = 7;
//const double cy = 9;

//cout << "cx = " << cx << " cy = " << cy << endl;

//swap_r(cx,cy);

//cout << "cx = " << cx << " cy = " << cy << endl;

double dx = 7.7;
double dy = 9.9;

cout << "dx = " << dx << " dy = " << dy << endl;

swap_r(dx,dy);

cout << "dx = " << dx << " dy = " << dy << endl;

return 0;
}