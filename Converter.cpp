#include<iostream>
using namespace std;
class converter
{
	public:
		int option;
		int suboption;
		double amount;
		double time;
		double distance;
};


void currency()
{
   converter s1;
   cout<<"<----------------- Currency Converter -------------------->"<<endl<<endl;
   cout<<"Choose from the above option: "<<endl;
   cout<<"1.INR to USD"<<endl;
   cout<<"2.INR to EURO"<<endl;
   cout<<"3.INR to YEN"<<endl;
   cout<<"4.YEN to INR"<<endl;
   cout<<"5.EURO to INR"<<endl;
   cout<<"6.USD to INR"<<endl<<endl;
   cout<<"Enter your option--> ";
   cin>>s1.suboption;
   
   if(s1.suboption==1)
   {
   	cout<<"<----------------- INR to USD -------------------->"<<endl<<endl;
   	cout<<"Enter Amount in INR-->";
   	cin>>s1.amount;
   	cout<<s1.amount<<" "<<"INR will be--> "<<(s1.amount*0.01142)<<" "<<"USD"<<endl;
   }
   else if(s1.suboption==2)
   {
   	cout<<"<----------------- INR to EURO -------------------->"<<endl<<endl;
   	cout<<"Enter Amount in INR-->";
   	cin>>s1.amount;
   	cout<<s1.amount<<" "<<"INR will be--> "<<(s1.amount*0.00980)<<" "<<"EURO"<<endl;
   }
   else if(s1.suboption==3)
   {
   	cout<<"<----------------- INR to YEN -------------------->"<<endl<<endl;
   	cout<<"Enter Amount in INR-->";
   	cin>>s1.amount;
   	cout<<s1.amount<<" "<<"INR will be--> "<<(s1.amount*1.68)<<" "<<"YEN"<<endl;
   }
   else if(s1.suboption==4)
   {
   	cout<<"<----------------- YEN to INR -------------------->"<<endl<<endl;
   	cout<<"Enter Amount in YEN-->";
   	cin>>s1.amount;
   	cout<<s1.amount<<" "<<"YEN will be--> "<<(s1.amount*0.595)<<" "<<"INR"<<endl;
   }
   else if(s1.suboption==5)
   {
   	cout<<"<----------------- EURO to INR -------------------->"<<endl<<endl;
   	cout<<"Enter Amount in EURO-->";
   	cin>>s1.amount;
   	cout<<s1.amount<<" "<<"EURO will be--> "<<(s1.amount*102)<<" "<<"INR"<<endl;
   }
   else if(s1.suboption==6)
   {
   cout<<"<----------------- USD to INR -------------------->"<<endl<<endl;
   	cout<<"Enter Amount in USD-->";
   	cin>>s1.amount;
   	cout<<s1.amount<<" "<<"USD will be--> "<<(s1.amount*87.6)<<" "<<"INR"<<endl;	
   }
   else
   {
   	cout<<"Invailed input !!!"<<endl;
   }
	
}


void time()
{
   converter s1;
   cout<<"<----------------- Time Converter -------------------->"<<endl<<endl;
   cout<<"Choose from the above option: "<<endl;
   cout<<"1.Minute to Second"<<endl;
   cout<<"2.Minute to Hour"<<endl;
   cout<<"3.Hour to Second"<<endl;
   cout<<"4.Hour to Minute"<<endl;
   cout<<"5.Second to Hour"<<endl;
   cout<<"6.Second to Minute"<<endl<<endl;
   
   cout<<"Enter your option--> ";
   cin>>s1.suboption;
   
    if(s1.suboption==1)
   {
   	cout<<"<----------------- Minute to Second -------------------->"<<endl<<endl;
   	cout<<"Enter Time in Minute-->";
   	cin>>s1.time;
   	cout<<s1.time<<" "<<"Minutes will be--> "<<(s1.time*60)<<" "<<"seconds"<<endl;
   }
   else if(s1.suboption==2)
   {
   	cout<<"<----------------- Minute to Hour -------------------->"<<endl<<endl;
   	cout<<"Enter Time in Minute-->";
   	cin>>s1.time;
   	cout<<s1.time<<" "<<"Minutes will be--> "<<(s1.time*0.0167)<<" "<<"hours"<<endl;
   }
   else if(s1.suboption==3)
   {
   	cout<<"<----------------- Hour to Second -------------------->"<<endl<<endl;
   	cout<<"Enter Time in Hour-->";
   	cin>>s1.time;
   	cout<<s1.time<<" "<<"Minutes will be--> "<<(s1.time*3600)<<" "<<"seconds"<<endl;
   }
   else if(s1.suboption==4)
   {
   	cout<<"<----------------- Hour to Minute -------------------->"<<endl<<endl;
   	cout<<"Enter Time in Hour-->";
   	cin>>s1.time;
   	cout<<s1.time<<" "<<"Minutes will be--> "<<(s1.time*60)<<" "<<"minutes"<<endl;
   }
   else if(s1.suboption==5)
   {
   	cout<<"<----------------- Second to Hour -------------------->"<<endl<<endl;
   	cout<<"Enter Time in Second-->";
   	cin>>s1.time;
   	cout<<s1.time<<" "<<"Minutes will be--> "<<(s1.time/3600)<<" "<<"hours"<<endl;
   }
   else if(s1.suboption==6)
   {
   cout<<"<----------------- Second to Minute -------------------->"<<endl<<endl;
   	cout<<"Enter Time in Second-->";
   	cin>>s1.time;
   	cout<<s1.time<<" "<<"Minutes will be--> "<<(s1.time*0.0167)<<" "<<"minutes"<<endl;	
   }
   else
   {
   	cout<<"Invailed input !!!"<<endl;
   }
   
   
	
}


void distance()
{
   converter s1;
   cout<<"<----------------- Distance Converter -------------------->"<<endl<<endl;
   cout<<"Choose from the above option: "<<endl;
   cout<<"1.Meter to Kilometer"<<endl;
   cout<<"2.Meter to Miles"<<endl;
   cout<<"3.Kilometer to Meter"<<endl;
   cout<<"4.Kilometer to Miles"<<endl;
   cout<<"5.Miles to Meter"<<endl;
   cout<<"6.Miles to Kilometer"<<endl<<endl;
   
   cout<<"Enter your option--> ";
   cin>>s1.suboption;
   
   if(s1.suboption==1)
   {
   	cout<<"<----------------- Meter to Kilometer -------------------->"<<endl<<endl;
   	cout<<"Enter Distance in Meter-->";
   	cin>>s1.distance;
   	cout<<s1.distance<<" "<<"Meter will be--> "<<(s1.distance*0.001)<<" "<<"Kilometer"<<endl;
   }
   else if(s1.suboption==2)
   {
   	cout<<"<----------------- Meter to Miles -------------------->"<<endl<<endl;
   	cout<<"Enter Distance in Meter-->";
   	cin>>s1.distance;
   	cout<<s1.distance<<" "<<"Meter will be--> "<<(s1.distance*0.000621)<<" "<<"Miles"<<endl;
   }
   else if(s1.suboption==3)
   {
   	cout<<"<----------------- Kilometer to Meter -------------------->"<<endl<<endl;
   	cout<<"Enter Distance in Kilometer-->";
   	cin>>s1.distance;
   	cout<<s1.distance<<" "<<"Kilometer will be--> "<<(s1.distance*1000)<<" "<<"Meter"<<endl;
   }
   else if(s1.suboption==4)
   {
   	cout<<"<----------------- Kilometer to Miles -------------------->"<<endl<<endl;
   	cout<<"Enter Distance in Kilometer-->";
   	cin>>s1.distance;
   	cout<<s1.distance<<" "<<"Kilometer will be--> "<<(s1.distance*0.621)<<" "<<"Miles"<<endl;
   }
   else if(s1.suboption==5)
   {
   	cout<<"<----------------- Miles to Meter -------------------->"<<endl<<endl;
   	cout<<"Enter Distance in Miles-->";
   	cin>>s1.distance;
   	cout<<s1.distance<<" "<<"Miles will be--> "<<(s1.distance*1609.344)<<" "<<"Meter"<<endl;
   }
   else if(s1.suboption==6)
   {
   cout<<"<----------------- Miles to Kilometer -------------------->"<<endl<<endl;
   	cout<<"Enter Distance in Miles-->";
   	cin>>s1.distance;
   	cout<<s1.distance<<" "<<"Miles will be--> "<<(s1.distance*1.609)<<" "<<"Kilometer"<<endl;	
   }
   else
   {
   	cout<<"Invailed input !!!"<<endl;
   }
	
	
}


int main()
{
   converter s1;
	
   cout<<"<------------------ C O N V E R T E R --------------------->"<<endl<<endl;
   cout<<"Choose from the above option: "<<endl;
   cout<<"1.Currency converter"<<endl;
   cout<<"2.Time converter"<<endl;
   cout<<"3.Distance converter"<<endl<<endl;
   
   cout<<"Enter your option--> ";
   cin>>s1.option;
   
   if(s1.option==1)
   {
   	currency();
   }
   else if(s1.option==2)
   {
   	time();
   }
   else if(s1.option==3)
   {
   	distance();
   }
   else
   {
   	cout<<"Invailed input !!!"<<endl;
   }
		
}
