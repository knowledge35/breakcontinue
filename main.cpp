#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	for(int a=0; a<10; a++){
		
		if(a==5)
			break;
		cout<<a<<endl;
	}
	cout<<endl;
	for(int i=0; i<10; i++)
	{
		if(i==5)
			continue;
			cout<<i<<endl;
	}


   getch();
   return 0;
}
