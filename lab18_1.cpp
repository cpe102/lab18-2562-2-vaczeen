#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};double overlap(Rect,Rect);

double overlap(Rect,Rect);

int main(){
	Rect A,B;
	cout << "Please input Rect 1 (x y w h): ";
	cin>>A.x>>A.y>>A.w>>A.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin>>B.x>>B.y>>B.w>>B.h;
	
	cout << "Overlap area = "<<overlap(A,B);	
	return 0;
}
double overlap(Rect a,Rect b){
	Rect out;
	out.w=a.w;
	out.h=a.h;
	out.x=a.x+a.w;
	out.y=a.y-a.h;
	
	Rect out1;
	out1.w=b.w;
	out1.h=b.h;
	out1.x=b.x+b.w;
	out1.y=b.y-b.h;
	double W,H;
	if(a.x>=out.x&&a.x>=out1.x){
		W=a.x-a.x;
	}
	else if(a.x<out.x&&b.x<out1.x){
		W=out.x-out1.x;
	}else if(a.x>out.x&&b.x<out1.x){
		W=a.x-out1.x;
	}else if(a.x<out.x&&b.x>=out1.x){
		W=out.x-b.x;
	}	
	
    if(a.y>=out.y&&a.y>=out1.y){
		H=a.y-a.y;
	}
	else if(a.y<out.y&&b.y<out1.y){
		H=out.y-out1.y;
	}else if(a.y>out.y&&b.y<out1.y){
		H=a.y-out1.y;
	}else if(a.y<out.y&&b.y>=out1.y){
		H=out.y-b.y;
	}	
	
	
	
	return W*H;
}