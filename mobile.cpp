#include"mobile.h"

Mobile::Mobile()=default;

Mobile::Mobile(string mn,string p,string m,int q):modelno(mn),price(p),mfg(m),quantity(q){}

//static Mobile::count=0;
	void Mobile::Accept()
	{	
        cout<<"\n Enter Model No: "<<endl;
       cin.get();
        getline(cin,modelno);
        cout<<"\n Enter Price:"<<endl;
       // cin.get();
        getline(cin,price);
        cout<<"\n Enter Manufacturer"<<endl;
       // cin.get();
        getline(cin,mfg);
        cout<<"\n Enter Quantity"<<endl;
        cin>>quantity;
	}
	void Mobile::Display(){
        cout<<"\n Model No.="<<modelno<<endl;
        cout<<"\n Price="<<price<<endl;
        cout<<"\n Manufaturer="<<mfg<<endl;
        cout<<"\n Quantity="<<quantity<<endl;
        }
	int Mobile::search(Mobile *arr,int r,string mn)		
	{static int count=0;
	
	for(int i=0;i<r;i++)
		{
			if(arr[i].modelno==mn)
			{
			count=arr[i].quantity;
			}		
		}
	return count;
	}		


