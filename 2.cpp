#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{	
	int num[4],total=0,Max=0,Min;
	string name[4];
	for(int i = 0 ; i < 4 ; i++)
	{	cout << "Enter Name  ["<<i<<"] :";
		cin>>name[i];
		cout << "Enter Score ["<<i<<"] :";
		cin>>num[i];
		total=total+num[i];
		if (Max < num[i])
			Max = num[i];
	}
	Min = num[0];
	for(int i = 0 ; i < 4 ; i++)
	{	if (Min > num[i])
			Min = num[i];
	}
	
		cout << "-------------------"<<endl<<"Name          score"<<endl<<"-------------------"<<endl;
	for(int i = 0 ;i < 4 ; i++)
	{
		cout << setw(14) << left << name[i] << num[i] << endl;
	}
cout << "Max Score = " << Max << endl;
cout << "Min Score = " << Min << endl;
cout << "Total Score  = "<<total<<endl;
cout << "Average Score = "<<total/4.0<<endl;
return(0);
}