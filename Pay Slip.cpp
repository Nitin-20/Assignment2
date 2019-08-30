/*6. Create Payslip class with data members
EmpNo
EmpName
DA
HRA
BasicSalary
Implement followings
 Default constructor
 Parameterized constructor
 Accept Function for data input
 Display function for data display
 Function to calculate salary from DA, HRA and
Basic Salary
 Separate header and implementation files*/
#include <iostream>
#include<string>
using namespace std;
class Payslip{
	private:
		int empid;
        string name;
		float da;
		float hra;
		float sal;
	public:
        //default CTOR
        Payslip()= default;
		//Constr using Intilialization List

		Payslip(int eid,string n,float d,float h,float s):empid(eid),name(n),da(d),hra(h),sal(s)
		{
		//cout<<"Init";
		}


		void Accept(){
		    cout<<"Eid"<<"\t";
			cin>>empid;
			cout<<endl;
			cout<<"Name"<<"\t";
			cin.get();
			getline(cin,name);
			cout<<endl;
			cout<<"DA"<<"\t";
			cin>>da;
			cout<<endl;
			cout<<"HRA"<<"\t";
			cin>>hra;
			cout<<endl;
			cout<<"Basic Salary"<<"\t";
			cin>>sal;
			cout<<endl;
		}

 		void Display(){


                        cout<<"Eid ""\t"<<empid<<endl;
                        cout<<"Name ""\t"<<name<<endl;
                        cout<<"DA ""\t"<<da<<endl;
                        cout<<"HRA ""\t"<<hra<<endl;
                        cout<<"Basic Salary ""\t"<<sal<<endl;
                }
        int cal()
        {
           
            float total=da+hra+sal;
            cout<<"Total Salary of Employee:=""\t";
            cout<<total<<"  rupees"<<endl;
            return 0 ;
        }
};
int main()
{
    Payslip p1;
    p1.Accept();
    p1.Display();
    p1.cal();
   // cout<<"Total Salary of Employee:=""\t"<<total<<endl;
}
