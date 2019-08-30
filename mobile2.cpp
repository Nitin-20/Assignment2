#include"mobile.h"
int main()
{
	int rec=0,i=0;
	cout<<"enter how many mobile record you want to add:"<<endl;
	cin>>rec;
	Mobile m1[rec];
	for( i=0;i<rec;i++)
	{
		m1[i].Accept();
	}
	string model_no;
	cout<<"enter model no that you want to search:"<<endl;
	cin>>model_no;
	int t_count=m1[1].search(m1,rec,model_no);
	if(t_count>0)
	{
		cout<<"quantity is:"<<t_count<<"\nmodel is available"<<endl;
	}
	else
	{
		cout<<"Model is not available"<<endl;
	}
return 0;
}
