#include<iostream>
using namespace std;
int volume(int r)
{
return (r*r*r);
}
double volume(double r,double h)
{
return (3.14*r*r*h);
}
int volume(int l,int b,int h)
{
return (l*b*h);
}
int main()
{
int a,b,ch,e;
double c,d;
cout<<"\nenter length for volume of cube:";
cin>>a;
a=volume(a);
cout<<"\nvolume of cube is "<<a;
cout<<"\n";
cout<<"\nenter radius:";
cin>>c;
cout<<"\nenter height:";
cin>>d;
c=volume(c,d);
cout<<"\nvolume of cylinder is "<<c;
cout<<"\n";
cout<<"\nenter length:";
cin>>a;
cout<<"\nenter breadth:";
cin>>b;
cout<<"\nenter height:";
cin>>e;
e=volume(a,b,e);
cout<<"\nvolume of cuboid is "<<e;
cout<<"\n";
return 0;
} 
