
/*
5. Create Address class with data members
HouseNo
Colony
Area
City
Pincode
Implement followings
 Default constructor
 Parameterized constructor
 Accept Function for data input
 Display function for data display
 Separate header and implementation files
 Write function to find whether two addresses
are same or different.
 Overlaod == operator
*/
#include <iostream>
#include <string>
using namespace std;

class Address

{
    private:
	string houseno;
	string colony;
	string  area;
	string  city;
	string pincode;


	public:
	Address():houseno("") ,colony(""),area(""), city(""),pincode(""){
		cout<<"\n Address::CTOR"<<endl;
	}
	Address(string hno,string col,string a,string c,string p):houseno(hno), colony(col),area(a), city(c),pincode(p){
		cout<<"\n Address::PCTOR"<<endl;
	}

	void Accept(){
	cout<<"\n Enter House no:"<<endl;
	cin.get();
	getline(cin,houseno);
	cout<<"\n Enter Colony name:"<<endl;
	cin.get();
	getline(cin,colony);
	cout<<"\n Enter Area"<<endl;
	cin.get();
	getline(cin,area);
	cout<<"\n Enter City"<<endl;
	cin.get();
	getline(cin,city);
	cout<<"\n Enter Pincode:"<<endl;
	cin.get();
	getline(cin,pincode);

	}

	void Display(){
	cout<<"\n House no.="<<houseno<<endl;
	cout<<"\n Colony Name="<<colony<<endl;
	cout<<"\n Area="<<area<<endl;
	cout<<"\n City="<<city<<endl;
	cout<<"\n Pincode="<<pincode<<endl;
	}
	int comp(Address& a1,Address& a2)
	{
	    if(a1.houseno==a2.houseno && a1.colony==a2.colony && a1.area==a2.area && a1.city==a2.city && a1.pincode==a2.pincode)
        {
            cout<<"\nAddress is same"<<endl;
        }
        else{
            cout<<"\n Address is not same"<<endl;
        }
        return 0;
	}
};
int main()
{
  Address a3,a4;
  a3.Accept();
  a3.Display();
  a4.Accept();
  a4.Display();
  a3.comp(a3,a4);
  return 0;
}
