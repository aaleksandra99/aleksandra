#include <iostream>
#include <math.h>
#include <windows.h>
#include <set>
#include <stdlib.h>
#include <iterator>
using namespace std;
int main(int argc, char** argv) 
{
	SetConsoleOutputCP(1251);
		
		int x;
			
set <int> x1; 
for (int i=0; i<=9; i++) {cin>>x; x1.insert (x);}
//for (auto now=x1.begin(); now!=x1.end; now++);
copy (x1.begin(), x1.end(), ostream_iterator<int>(cout," "));
cout<<endl;
cout<<x1.size()<<endl;
    
    system("pause");
	return 0;}
