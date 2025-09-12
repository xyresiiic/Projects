#include<iostream>
using namespace std;
//<=================================================== base class ===============================================================>

class Restaurant   
{
	//<============================== Protected ==============================>
	
   protected:   
      string id="admin";
      string pass="admin@1";
      string customerName;
      string customerPhone;
      float totalBill;
      int carSlots;
      int bikeSlots;
      string cars[5];
      string bikes[10];
      friend main();
     
//<================================ Public ====================================>
   public:
      string option;                       
      string suboption;                    
      string uid;
      string upass;
      char op;

      //<============================ Constructor ============================>
      Restaurant() 
	  {
         totalBill = 0;
         carSlots = 5;
         bikeSlots = 10;
         for(int i=0;i<5;i++) 
         {
		 cars[i] = "";
	     }
         for(int i=0;i<10;i++) 
         {
		 bikes[i] = "";
         }
	  }
      
};

//<================================================= Inheritance ======================================================>
class management:public Restaurant
{
   public:
      void menu();
      void services();
      void parkVehicle();
      void removeVehicle();
      void parkingStatus();
      void generateBill();
      int startsystem();
      
};


management s1;

//<==================================================== Menu funtion ====================================================>
void management::menu()
{
   do {
   	cout<<endl;
      cout<<"<================ FOOD MENU ================->"<<endl<<endl;
      cout<<"1.Veg Items"<<endl;
      cout<<"2.Veg Combos"<<endl;
      cout<<"3.Non-Veg Items"<<endl;
      cout<<"4.Non-Veg Combos"<<endl;
      cout<<"5.Back"<<endl<<endl;
      
      cout<<"Enter your option--> ";
      cin>>suboption;

      if(suboption=="1")
      {
         string c;
         do {
         	cout<<endl;
            cout<<"========================================"<<endl;
	        cout<<"               Veg Items               "<<endl;
	        cout<<"========================================"<<endl<<endl;
            cout<<"1.Paneer Butter Masala - Rs.250"<<endl;
            cout<<"2.Tawa Roti x4 - Rs.40"<<endl;
            cout<<"3.Dal Tadka - Rs.120"<<endl;
            cout<<"4.Back"<<endl;
            cout<<"Enter choice--> ";
            cin>>c;

            if(c=="1")
			{ totalBill+=250;
			cout<<"Added Paneer Butter Masala"<<endl;
			}
			
            else if(c=="2")
			{
			 totalBill+=40; 
			 cout<<"Added Tawa Roti x4 "<<endl;
			}
			
            else if(c=="3")
			{
			 totalBill+=120;
			 cout<<"Added Dal Tadka"<<endl;
			 }
			 
            else if(c=="4")
			{
			cout<<"Returning..."<<endl;
			}
			
            else 
			{
			cout<<"Invalid Input"<<endl;
		    }

         } while(c!="4");
      }

      else if(suboption=="2")
      {
         string c;
         do {
         	cout<<endl;
         	cout<<"========================================"<<endl;
	        cout<<"               Veg Combos               "<<endl;
	        cout<<"========================================"<<endl<<endl;
            cout<<"1.Lunch Combo (Seasonal Veg, Dal tadka, Rotix4, Raita, Paaneer, Sweet, Naan and salad )  - Rs.400"<<endl;
            cout<<"2.Dinner Combo (Butter Paneer masala, naan, Roti x4, Rice, Dal, Salad and Sweet) - Rs.350"<<endl;
            cout<<"3.Chinese Platter(Noodles, Veg Fried Rice, Chilli paneer, chilli potato and spring rolls) - Rs.520"<<endl;
            cout<<"4.Back"<<endl;
            cout<<"Enter choice--> ";
            cin>>c;

            if(c=="1")
			{
			 totalBill+=400;
			 cout<<"Added Lunch Combo"<<endl;
			}
            else if(c=="2")
			{
			 totalBill+=350;
			 cout<<"Added Dinner Combo"<<endl;
			}
			
            else if(c=="4") 
			{
			 cout<<"Returning..."<<endl;
		    }
		    
		     else if(c=="3")
			{
			 totalBill+=520;
			 cout<<"Chiense Platter"<<endl;
			}

            else 
			{
			cout<<"Invalid Input"<<endl;
		    }

         } while(c!="4");
      }

      else if(suboption=="3")
      {
         string c;
         do {
         	cout<<endl;
            cout<<"========================================"<<endl;
	        cout<<"             Non-Veg Items              "<<endl;
	        cout<<"========================================"<<endl<<endl;
            cout<<"1.Chicken Curry - Rs.300"<<endl;
            cout<<"2.Mutton Biryani - Rs.350"<<endl;
            cout<<"3.Fish Fry - Rs.280"<<endl;
            cout<<"4.Back"<<endl;
            cout<<"Enter choice--> ";
            cin>>c;

            if(c=="1")
			{
			 totalBill+=300;
			 cout<<"Added Chicken Curry"<<endl;
			 }
			 
            else if(c=="2")
			{
			 totalBill+=350;
			 cout<<"Added Mutton Biryani"<<endl;
			 }
			 
            else if(c=="3")
			{
			totalBill+=280;
			cout<<"Added Fish Fry"<<endl;
			}
			
            
			 else if(c=="4")
			 {
			 cout<<"Returning..."<<endl;
		    }
             else 
			 {
			 cout<<"Invalid Input"<<endl;
		     }

         } while(c!="4");
      }

      else if(suboption=="4")
      {
         int c;
         do {
         	cout<<endl;
            cout<<"========================================"<<endl;
	        cout<<"               Non-Veg Combos            "<<endl;
	        cout<<"========================================"<<endl<<endl;
            cout<<"1.Chicken Thali Combo(Chicken Curry, Roasted Chicken, Rice, Naan, Salad, Chiken Wings and Sweet) - Rs.500"<<endl;
            cout<<"2.Family Combo (Mutton gravy, Chicken Curry, Rice, 2xNaan, rotii x10, Salad, fried Chiken and Sweet)- Rs.750"<<endl;
            cout<<"3.Back"<<endl;
            cout<<"Enter choice--> ";
            cin>>c;

            if(c==1)
			{
			 totalBill+=500;
			cout<<"Added Chicken Thali Combo"<<endl;
			}
			
            else if(c==2)
			{
			 totalBill+=750;
			 cout<<"Added Family Combo"<<endl;
			}
			
            else if(c==3)
			{
			cout<<"Returning..."<<endl;
		    }
		    
            else 
			{
			cout<<"Invalid Input"<<endl;
	     	}

         } while(c!=3);
      }

      else if(suboption=="5")
      {
         cout<<"Exiting Food Menu..."<<endl;
      }

      else
      {
         cout<<"Invalid input!!!"<<endl;
      }
   } while(suboption!="5");
}

//<========================================================= Services funtion =========================================================>
void management::services()

{
   cout<<"<------------------ SERVICES ------------------->"<<endl<<endl;
   cout<<"1.Birthday Party"<<endl;
   cout<<"2.DJ Arrangements"<<endl;
   cout<<"3.Catering"<<endl;
   cout<<"4.Exit"<<endl<<endl;

   cout<<"Enter your option--> ";
   cin>>suboption;

   if(suboption=="1")
   {
   	  cout<<"<------------------ Birthday Party Options ------------------->"<<endl<<endl;
      cout<<"1. 5 People - Rs.2000"<<endl;
      cout<<"2. 10 People - Rs.3500"<<endl;
      cout<<"3. 15 People - Rs.5000"<<endl;
      
      int c;
      cout<<"Enter choice--> ";
      cin>>c;
    
      if(c==1)
	  {
	  totalBill+=2000;
	  cout<<"Birthday Party for 5 booked"<<endl;
	  }
	  
      else if(c==2)
	  {
	  totalBill+=3500;
	  cout<<"Birthday Party for 10 booked"<<endl;
	  }
	  
      else if(c==3)
	  {
	  totalBill+=5000;
	  cout<<"Birthday Party for 15 booked"<<endl;
	  }
	  
      else cout<<"Invalid Input !"<<endl; 
      
   }
   
   
   else if(suboption=="2")
   {
   	  cout<<"<------------------ DJ Options ------------------->"<<endl<<endl;
      cout<<"1.Budget - Rs.3000"<<endl;
      cout<<"2.Regular - Rs.5000"<<endl;
      cout<<"3.Premium - Rs.8000"<<endl;
      
      int c;
      cout<<"Enter choice--> ";
      cin>>c;
      
      if(c==1)
	  {
	  totalBill+=3000;
	  cout<<"Budget DJ booked"<<endl;
	  }
	  
      else if(c==2)
	  {
	  totalBill+=5000;
	  cout<<"Regular DJ booked"<<endl;
	  }
	  
      else if(c==3)
	  {
	  totalBill+=8000;
	  cout<<"Premium DJ booked"<<endl;
	  }
	  
      else cout<<"Invalid!"<<endl;
   }
   
   
   else if(suboption=="3")
   {
   	  cout<<"<------------------ Catering Options ------------------->"<<endl<<endl;
      cout<<"1.50 People - Rs.10000"<<endl;
      cout<<"2.100 People - Rs.18000"<<endl;
      cout<<"3.150 People - Rs.25000"<<endl;
      
      int c;
      cout<<"Enter choice--> ";
      cin>>c;
      
      if(c==1)
	  {
	  totalBill+=10000;
	  cout<<"Catering for 50 booked"<<endl;
	  }
	  
      else if(c==2)
	  {
	  totalBill+=18000;
	  cout<<"Catering for 100 booked"<<endl;
	  }
	  
      else if(c==3)
	  {
	  totalBill+=25000;
	  cout<<"Catering for 150 booked"<<endl;
	  }
	  
      else cout<<"Invalid Option"<<endl;
   }
   
   
   else if(suboption=="4")
   {
      cout<<"Exiting Services..."<<endl;
   }
   
   else
   {
      cout<<"Invalid input!!!"<<endl;
   }
   
}

//<========================================================= Park funtion =========================================================>
void management::parkVehicle()

{
   cout<<"<------------------ PARK VEHICLE ------------------->"<<endl<<endl;
   cout<<"1.Car (Rs.50)"<<endl;
   cout<<"2.Bike (Rs.20)"<<endl;
   
   string number;
   int c;
   cout<<"Enter choice--> ";
   cin>>c;

   if(c==1)
   {
      if(carSlots>0)
      {
         cout<<"Enter Car Number: ";
         cin>>number;
         
         for(int i=0;i<5;i++)
         {
            if(cars[i]=="")
			{
			 cars[i]=number;
			 break;
			}
			
         }
         
         carSlots--;
         totalBill+=50;
         cout<<"Car parked. Remaining slots--> "<<carSlots<<endl;
         
      }
      else cout<<"No car slots available!"<<endl;
      
   }
   
   
   else if(c==2)
   {
      if(bikeSlots>0)
      {
         cout<<"Enter Bike Number: ";
         cin>>number;
         
         for(int i=0;i<10;i++)
         {
            if(bikes[i]=="")
			{ 
			 bikes[i]=number; 
			 break; 
			}
         }
         
         bikeSlots--;
         totalBill+=20;
         cout<<"Bike parked. Remaining slots--> "<<bikeSlots<<endl;
         
      }
      else cout<<"No bike slots available!"<<endl;
      
   }
   else cout<<"Invalid input!"<<endl;
   
}

//<========================================================= RemoveVehical funtion =========================================================>
void management::removeVehicle()

{
   cout<<"<------------------ REMOVE VEHICLE ------------------->"<<endl<<endl;
   cout<<"1.Car"<<endl;
   cout<<"2.Bike"<<endl;
  
   string number;
   int c;
   cout<<"Enter choice--> ";
   cin>>c;

   if(c==1)
   {
      cout<<"Enter Car Number to remove: ";
      cin>>number;
      
      for(int i=0;i<5;i++)
      {
         if(cars[i]==number)
		 { 
		  cars[i]="";
		  carSlots++;
		  cout<<"Car removed."<<endl;
		  return;
		  }
      }
      
      cout<<"Car not found!"<<endl;
   }
   
   else if(c==2)
   {
      cout<<"Enter Bike Number to remove: ";
      cin>>number;
      
      for(int i=0;i<10;i++)
      {
         if(bikes[i]==number)
		 { 
		 bikes[i]="";
		 bikeSlots++;
		 cout<<"Bike removed."<<endl;
		 return;
		 }
      }
      
      cout<<"Bike not found!"<<endl;
   }
   else cout<<"Invalid input!"<<endl;
}


//<======================================================= Parking status funtion =========================================================>
void management::parkingStatus()

{
	
	
    cout<<endl<< "<-------------------------- Parking Status -------------------------->"<<endl;
    cout<<endl<<"===============Car Slots (5 total)==============="<<endl;
    
    for (int i = 0; i < 5; i++) 
	{
        if (cars[i] != "")
        {
         cout<<endl<<"Slot "<<i+1<<": "<< cars[i];
        }
        else
        {
         cout<<endl<<"Slot "<< i+1 <<": [Empty]";
        }
	}

    cout<<endl<<endl<<"===============Bike Slots (10 total)=============="<<endl;
    for (int i = 0; i < 10; i++) 
	{
        if (bikes[i] != "")
        {
		
            cout<<endl<<"Slot "<<i+1<<": "<<bikes[i];
        }
        else
         {
		 
            cout <<endl<< "Slot " << i+1 << ": [Empty]";
         }
	}

    cout<<endl<<"----------------------------------"<<endl;
}



//<========================================================= generate bill funtion =========================================================>
void management::generateBill()

{
	cout<<"<-------------------------------------------->"<<endl;
    cout<<"Enter Customer Name: ";
    cin.ignore();
    getline(cin, customerName);

    cout<<"Enter Customer Phone: ";
    getline(cin, customerPhone);

    cout<<endl<<"================= BILL ================="<<endl;
    cout<<"Customer Name: "<<customerName<<endl;
    cout<<"Customer Phone: "<<customerPhone<<endl;
    cout<<"Total Bill: Rs."<<totalBill<<endl;
    cout<<"========================================"<<endl;

    totalBill = 0;
}


//<========================================================= start system funtion =========================================================>
int management::startsystem()

{
   
   
   	cout<<"<=======================================================================>"<<endl<<endl;
	cout<<"|                     RESTAURANT MANAGEMENT SYSTEM                      |"<<endl<<endl;
	cout<<"<=======================================================================>"<<endl<<endl;
   
   
   

   do{
      cout<<endl<<"<==================== Dextro Restro & Cafe ====================>"<<endl<<endl;
      cout<<"1.Food Menu"<<endl;
      cout<<"2.Services"<<endl;
      cout<<"3.Park Vehicle"<<endl;
      cout<<"4.Remove Vehicle"<<endl;
      cout<<"5.Parking Status"<<endl;
      cout<<"6.Generate Bill"<<endl;
      cout<<"7.Exit"<<endl<<endl;
      
      cout<<"Enter your option--> ";
      cin>>option;

      if(option=="1") 
	  {
	   menu();
      }
      
      else if(option=="2") 
	  {
	  services();
	  }
	  
      else if(option=="3")
	  {
	   parkVehicle();
	  }
	  
      else if(option=="4")
	  {
	   removeVehicle();
	  }
	  
      else if(option=="5") 
	  {
	  parkingStatus();
      }
      
      else if(option=="6")
	  {
	   generateBill();
	   
	  }
	  
      else if(option=="7")
	  {
	   cout<<"========================================"<<endl;
	   cout<<"         Thank you! Visit again.        "<<endl;
	   cout<<"========================================"<<endl;
      }
      
      else 
	  {
	   cout<<"Invalid input!!!"<<endl;
      }

   }while(option!="7");

   return 0;
}


//<========================================================= Main funtion =========================================================>
int main()
{
	
	
	cout<<"<=======================================================================>"<<endl<<endl;
	cout<<"                  Welcome to Dextro Managment system                     "<<endl<<endl;
	cout<<"<=======================================================================>"<<endl<<endl;
	
	do
	{
	 
	 cout<<"<-------------------------------------------------------------------->"<<endl;
	 cout<<"                               LOGIN PAGE                             "<<endl;
	 cout<<"<-------------------------------------------------------------------->"<<endl<<endl;
	 cout<<"Enter User ID --> ";
	 cin>>s1.uid;	
	   if(s1.id==s1.uid)
	   {
	   	 do
	     {
		  cout<<"Enter Password--> ";
	      cin>>s1.upass;
		  if(s1.pass==s1.upass)
	      {
	      	cout<<endl<<endl;
		    s1.startsystem();

	   	  }
		  else
		  {
		  	cout<<"-------------------------------------"<<endl;
			cout<<"Invalid password Try Again !!! "<<endl;
		  }
        }while(s1.pass != s1.upass);

     	
       }
	 else
	 {
	 	cout<<endl;
	 	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		cout<<"        Invalid User ID !!       "<<endl;
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl<<endl;
		cout<<"<-------------------------------->"<<endl;
		cout<<"    Do you want to try again ?    "<<endl;
	    cout<<"   Enter Y for yes and N for no   "<<endl;
	    cout<<"<-------------------------------->"<<endl<<endl;
	    cout<<"Enter Your Choice--> ";
	    cin>>s1.op;
	    cout<<"=========================="<<endl;
	    
	    if(s1.op == 'n' || s1.op == 'N') 
		{
        cout <<endl<< "Exiting system. Thank you!";
        break;
	    }
	}
   }while(s1.op!='N' && s1.op!='n');
}
