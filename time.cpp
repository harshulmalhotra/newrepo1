#include<iostream>
using namespace std;
class time
{
int hr;
int min;
public:
int h, int m;    
int gettime()
    {hr=h ; min=m;}
    int puttime()
    {
        cout<<hr<<"hours and";
        cout<<min<<"minutes "<<endl;
    }
    int sum(time t,time s);
};
    int time :: sum(time t1, time t2)
    {
        min=t1.min + t2.min;
        hr=min/60;
        min=min%60;
        hr=hr+t1.hr+t2.hr;
    }
int main()
{ 
    time z;
    time y;
    time x;
    z.gettime(2,45);
    y.gettime(3,30);
    x.sum(z,y);
    cout<<"T1="<<z.puttime();
    cout<<"T2="<<y.puttime();
    cout<<"T3="<<x.puttime();
    
    return 0;
}