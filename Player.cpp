#include<iostream>
#include<cstring>
using namespace std;
class Player
{
	private:
		string name;
		int age;
		string country;
	public:
		Player()=default;
		Player(string n,int a,string c):name(n),age(a),country(c)
		{}
		void Accept()
		{
		    cout<<"Enter the name of player:"<<endl;
            cin.get();
            getline(cin,name);
            cout<<"Enter the age of player:"<<endl;
            cin>>age;
            cout<<"Enter the country of player:"<<endl;
            cin.get();
            getline(cin,country);
		}
		void Display()
		{
		    cout<<"Name of player:""\t"<<name<<endl;
            cout<<"Age of player:""\t"<<age<<endl;
            cout<<"Country:""\t"<<country<<endl;
		}
		int Agedata()
		{
		    return age;
		}
};
		void Sort(Player *parr,int n)
{


        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j<i;j--)
{           cout<<"j loop";
        if(parr[j].Agedata()<parr[j-1].Agedata())
        {
        //int temp;
        Player temp = parr[j];
        parr[j-1] = parr[j];
        parr[j] =  temp;
        }
}
        }
}	/*	void Sort(Player *obj,int n)
{
        for(int i=0;i<n;i++)
        for(int j=n-1;j<i;j--)
{
        if(obj[j].Agedata()<obj[j-1].Agedata())
        {
        //int temp;
        Player temp = obj[j];
        obj[j-1] = obj[j];
        obj[j] =  temp;
        }
}
}*/



int main()

{

	
int n;

cout<<"Enter the no of players you want:"<<"\t";
cin>>n;

	Player parr[n];

	for(int i=0;i<n;i++)

	{
	parr[i].Accept();
	}

    Sort(parr,n);

for(int i=0;i<n;i++)

	{
	parr[i].Display();

	}

	return 0;
}


