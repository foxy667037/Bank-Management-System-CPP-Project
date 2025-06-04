//                                                                    -FOXY-


// Header Files:
// variables:
// Account Number generator function:
// New Account Function:
// Modify Account Function:
// Deposit Money Function:
// Withdraw Money Function:
// Balance Enquiry Function:
// Display All Account:
// Exit Function:
// function calling:
// END


// Header Files:
#include<iostream>
#include<string>
#include<cstdlib> // used for rand
#include<ctime> //used for srand
#include <fstream>
#include <sstream>
using namespace std;
	

// Some Variables:	
const int maxUser = 3; // According to user

string firstName[maxUser] , lastName[maxUser] , userAge[maxUser] , userCnic[maxUser], userNumber[maxUser]; 

int userPassword[maxUser] , Accountnumber[maxUser] , userBalance[maxUser] , res[maxUser] , i;
	

// intro Function:
int intro(){

	ofstream csvFile("Book.csv", std::ios::app);

    if (!csvFile.is_open()) {
     cout << "Error opening file!";
    }

	csvFile <<"--Online Bank Management System--"<<endl<<endl;

}


// Data Save Function
int usersaveData(){
	
    ofstream csvFile("Book.csv", std::ios::app);

    if (!csvFile.is_open()) {
     cout << "Error opening file!";
    }

    csvFile <<"Holder Account Number is : " <<res[i];	
	csvFile <<endl <<"Account Holder Name : " <<firstName[i] <<" " <<lastName[i];	
	csvFile <<endl <<"Account Holder Mobile Number : " <<"+92"<<userNumber[i];
	csvFile <<endl <<"Account Holder Date Of Birth (mm/dd/yy): " <<userAge[i];
	csvFile <<endl <<"Account Holder CNIC Number : " <<userCnic[i];
	csvFile <<endl <<"Account Password : " <<userPassword[i];
	csvFile <<endl <<"Current Balance : "<<userBalance[i]  <<endl <<endl;

    csvFile.close();

}


// Account Number Generator:	
int accountNumber(int n){
		
		srand(time(0));
	    return (rand() % 100000) + 1;

}


// New Account Function:
int newAccount(){
	
	system("CLS");
	int choice;
	for(  i = 0 ; i < maxUser ; ++i){
		
	cout<<"--Welcome to our Bank--" <<endl <<endl;
	cout<<"--Account Creation Setup-- " <<endl <<endl;
	cout<<"--Made By FOXY-- " <<endl <<endl <<endl <<endl;
	
	cout<<"Your Account Number is : " <<accountNumber(Accountnumber[i]);
	res[i] = accountNumber(Accountnumber[i]);
	cout<<endl<<endl <<"Enter Your First Name : ";
	cin>>firstName[i];
	cout<<endl <<"Enter Your Last Name : ";
	cin>>lastName[i];
	cout<<endl <<"Enter Your Date Of Birth (mm/dd/yy): ";
	cin>>userAge[i];
	cout<<endl <<"Enter Your CNIC Number : ";
	cin>>userCnic[i];
	cout<<endl <<"Enter Your Mobile Number : ";
	cin>>userNumber[i];
	cout<<endl <<"Enter Your Account Password : ";
	cin>>userPassword[i];
	cout<<endl <<"Enter Amount you want to add in your account minimum 500 or 1000 :  ";
	cin>>userBalance[i];
	usersaveData();
	cout <<endl <<endl <<"Your Account created : "<<endl;
	cout <<endl <<"Thank You : "<<endl <<endl;		
	cout <<endl <<"Enter 1 For Exit Account Creation Setup :"<<endl<<endl  <<"Enter 2 For Create 2nd Account : "<<endl <<endl;
	cout<<"Your Choice : ";
	cin>>choice;		
    
	if(choice == 1){
    cout<<"Thanks For Using Our Bank : ";
	break;	
	}
	
	else if(choice == 2){
	cout<<"--Your 2nd Account--"<<endl<<endl<<endl<<endl;	
	}
  
  }

}


// Modify Account Function:
int modifyAccount(){
	
	system("CLS");
	int Accountholder;
	cout<<"--Modify Account Setup-- " <<endl <<endl;
	cout<<endl <<"Enter Your Account Number : ";
  	cin>>Accountholder;	
	
	for( i = 0 ; i < maxUser ; ++i){
	   
	   if(Accountholder == res[i]){
	   	
	   cout<<endl<<"Your Account Number is : " <<res[i];
	   cout<<endl<<endl <<"Your Account Current Balance is : " <<userBalance[i];;	   
	   cout<<endl<<endl <<"01. Your Name : "<<firstName[i]<<" "<<lastName[i];
	   cout<<endl<<endl <<"02. Your Date Of Birth (mm/dd/yy): "<<userAge[i];
	   cout<<endl<<endl <<"03. Your CNIC Number: "<<userCnic[i];
	   cout<<endl<<endl <<"04. Your Mobile Number: "<<userNumber[i];
	   cout<<endl<<endl <<"05. Your Account Password: "<<userPassword[i];
	   cout<<endl<<endl <<"06. Back To Main Menu : "<<userPassword[i];	   
	   
	   int userChoice;
	   cout<<endl<<endl <<"What would you like to modify in your account?? ";
	   cout<<endl<<endl <<"Your Choice (1 - 6) : ";
	   cin>>userChoice;
	     
		 if(userChoice == 1){
	      cout<<endl<<"Enter Your New First Name : ";
	      cin>>firstName[i];	
	      cout<<endl<<"Enter Your New Last Name : ";	
	      cin>>lastName[i];
	      }
	      
		  else if(userChoice == 2){
	      cout<<endl<<"Enter Your New Date Of Birth (mm/dd/yy) : ";
	      cin>>userAge[i];	
	      }
	      
		  else if(userChoice == 3){
	   	  cout<<endl<<"Enter Your New CNIC Number : ";
	      cin>>userCnic[i];		
	      }
	      
		  else if(userChoice == 4){
	   	  cout<<endl<<"Enter Your New Mobile Number : ";
	      cin>>userNumber[i];	
	      }
	      
		  else if(userChoice == 5){
	   	  cout<<endl<<"Enter Your New Account Password : ";
	      cin>>userPassword[i];	
	      }
	   }
	
	}

}


//Deposit Money Functon
int depositMoney(){
	
	system("CLS");
	int Accountholder , Depositmoney , choice;
	cout<<"--Deposit Money Setup-- " <<endl <<endl;
	cout<<endl <<"Enter Your Account Number : ";
	cin>>Accountholder;	
	   
	for(  i = 0 ; i < maxUser ; ++i){
  	   
	   if(Accountholder == res[i]){
	   	
	   cout<<endl<<"Your Account Number is : " <<res[i];
	   cout<<endl<<endl <<"Your Account Current Balance is : " <<userBalance[i];;	   
	   cout<<endl<<endl <<"Your Name : "<<firstName[i]<<" "<<lastName[i];
	   cout<<endl<<endl <<"Your Date Of Birth (mm/dd/yy): "<<userAge[i];
	   cout<<endl<<endl <<"Your CNIC Number: "<<userCnic[i];
	   cout<<endl<<endl <<"Your Mobile Number: "<<userNumber[i];
	   cout<<endl<<endl <<"Your Account Password: "<<userPassword[i];
	   cout<<endl<<endl <<"Enter Amount you want to deposit in your account minimum 500 :  ";	   
	   
	   cin>>Depositmoney;
	   userBalance[i] += Depositmoney;
	   cout<<endl<<endl<<endl <<"Your New Balance : "<<userBalance[i] <<endl<<endl;
	   cout<<"press 1 for exit : ";
	   cin>>choice;
	   break;
       }
   
   }

}


//Withdraw Money Function
int withdrawMoney(){
	
	system("CLS");
	int Accountholder , Withdrawmoney , choice;
	cout<<"--Withdraw Money Setup-- " <<endl <<endl;
	cout<<endl <<"Enter Your Account Number : ";
  	cin>>Accountholder;
  	   
	for(  i = 0 ; i < maxUser ; ++i){
			
	   if(Accountholder == res[i]){
	   	
	   cout<<endl<<"Your Account Number is : " <<res[i];
	   cout<<endl<<endl <<"Your Account Current Balance is : " <<userBalance[i];;	   
	   cout<<endl<<endl <<"Your Name : "<<firstName[i]<<" "<<lastName[i];
	   cout<<endl<<endl <<"Your Date Of Birth (mm/dd/yy): "<<userAge[i];
	   cout<<endl<<endl <<"Your CNIC Number: "<<userCnic[i];
	   cout<<endl<<endl <<"Your Mobile Number: "<<userNumber[i];
	   cout<<endl<<endl <<"Your Account Password: "<<userPassword[i];
	   cout<<endl<<endl <<"Enter Amount you want to deposit in your account minimum 500 :  ";	   
	   
	   cin>>Withdrawmoney;
	   userBalance[i] -= Withdrawmoney;
	   cout<<endl<<endl<<endl <<"Your New Balance : "<<userBalance[i] <<endl<<endl;
       cout<<"press 1 for exit : ";
	   cin>>choice;
	   break;
	   }
   
   }

}


// Balance Enquiry Function:
int balanceEnquiry(){
	
	system("CLS");
	int Accountholder , choice;
	cout<<"--Balance Enquiry Setup-- " <<endl <<endl;
	cout<<endl <<"Enter Your Account Number : ";
  	cin>>Accountholder;	
	
	for(  i = 0 ; i < maxUser ; ++i){
	   
	   
	   if(Accountholder == res[i]){
	   	
	   cout<<endl<<"Your Account Number is : " <<res[i];
	   cout<<endl<<endl <<"Your Name : "<<firstName[i]<<" "<<lastName[i];
	   cout<<endl<<endl <<"Your Date Of Birth (mm/dd/yy): "<<userAge[i];
	   cout<<endl<<endl <<"Your CNIC Number: "<<userCnic[i];
	   cout<<endl<<endl <<"Your Mobile Number: "<<userNumber[i];
	   cout<<endl<<endl <<"Your Account Password: "<<userPassword[i]<<endl<<endl<<endl;
	   cout<<endl<<endl<<endl<<endl <<"Your Account Current Balance is : " <<userBalance[i];;	   
       cout<<"press 1 for exit : ";
	   cin>>choice;
	   break;
	   }
   
   }

}


// Display All Account Function:
int displayAccount(){

    ifstream csvFile("Book.csv", std::ios::app);

    if (!csvFile.is_open()) {
        cout << "Failed to open file!" << endl;
        return 1;
    }
	
    string line;
    while (getline(csvFile, line)) {
        cout << line << endl;
    }

    csvFile.close();

}


// Exit Function:
int exit(){
	
	system("CLS");
	cout<<"--Thank You For Using Our Bank--";

}


//Function Calling;
int main(){

	int choice;

	intro();
	
	do{
		 system("CLS");
	     cout<<"Online Banking System" <<endl <<endl;
	     cout<<endl<<endl <<"--Main Menu--" <<endl <<endl;
	     cout<<"01. New Account : " <<endl <<endl;
   	     cout<<"02. Modify Account : " <<endl <<endl;
	     cout<<"03. Deposit Money : " <<endl <<endl;
	     cout<<"04. Withdraw Money : " <<endl <<endl;
	     cout<<"05. Balance Enquiry : " <<endl <<endl;
	     cout<<"06. Display All Account : " <<endl <<endl;
	     cout<<"07. Exit : " <<endl <<endl;
    	
 	     cout<<endl<<endl <<"Your Choice (1 - 6) : ";
	     cin>>choice;
	
	    if(choice == 1){
	     newAccount();
	    }
	     
		else if(choice == 2){
	     modifyAccount();	
        }
		
		else if(choice == 3){
	     depositMoney();	
        } 
		
		else if(choice == 4){
	     withdrawMoney();	
        }
		
		else if(choice == 5){
	     balanceEnquiry();	
        }   
		else if(choice == 6){
		 displayAccount();
		 break;	
		} 
        
		else if(choice == 7){
         exit();
		 break;	
		}
		
    }while(true); 

}


//                                                                  END