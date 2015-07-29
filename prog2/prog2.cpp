#include <iostream>
	
using namespace std;

int main(){
	
	
	int a,b,c,d=0;
	a=0;
	b=1;
	for(int i=0;i<50;i++){
		if(i<=1){
			c=i;
		}
		else
		{
			c=a+b;
			a=b;
			b=c;
			
		}
		if(c%2==0){
		
		d=d+c;
		cout<< c << " "<<d<< "\n";;
	}
		
		if(c>4000000)
		break;
		
		
		
		
	}

}
