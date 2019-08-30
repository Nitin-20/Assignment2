/*7. Create MobilePhone class with data members
ModelNo
Price
Manufacturer
Quantity

Implement followings
 Default constructor
 Parameterized constructor
 Accept Function for data input
 Display function for data display
 Function to search MobilePhone model availability
 Write menu driven program with following menus

o Add Mobile
o Display List of available mobiles
o Find out quantity of particular mobile type
o Find out availability of Particular model
*/
#include<iostream>
#include<string>
using namespace std;
class Mobile
{
	private:
		string modelno;
		string price;
		string mfg;
		int quantity;
	//	static int count;
	public:
		Mobile();
		Mobile(string,string,string,int);
		void Accept();
		void Display();
		int search(Mobile*,int,string);
};

