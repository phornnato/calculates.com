#include<iostream>
#include<iomanip>
#include<string>
#include<windows.h>
using namespace std;
     string Username,Passowrd,Number,pin,pin1,card,card1;
    double balance_khr = 0;
    double balance_usd = 0;
    float amount_usd, amount_khr,deposit_usd,deposit_khr,top_up;
    char x = 175; 
    char y = 177;
    int options,op1,op2,op3,op4,op2_2,op2_3,phone;
void menu(){
    	cout<<"1. Account"<<setw(20);
        cout<<"2. Desposit"<<setw(20);
        cout<<"3. Card   "<<setw(20);
        cout<<"4. Payment"<<setw(20);
        cout<<"5. Transfer"<<endl<<endl;
}
 void loading (){
    for(int i = 1; i <= 20; i++){
        Sleep(70);
        cout<<x;
    }
}
void clear(){
    system("pause");
    system("cls");
}
void verified (){
    cout<<"-> Enter your PIN : ";cin>>pin;
}
void login(){
    cout<<setw(100)<<">>>>>>>>>>>>{L}{O}{G}{I}{N}{G}<<<<<<<<<<<<<"<<endl<<endl;
    cout<<"-> Enter Username : ";cin>>Username;
    cout<<endl;
    cout<<"-> Enter Password : ";cin>>Passowrd;
    cout<<endl; 
    verified();
    cout<<endl;
}
void pin_con (){
     load:
            system("cls");
        cout<<"-> Enter PIN : ";cin>>pin1;
        cout<<endl;
        if(pin1 == pin ){
        system("color A");
          cout<<"Loading";
              loading();
          system("cls");
         system("color 7");
      }else{
           system("color 4");
         cout<<"Loading ";
               Beep(440,500);
        loading();
          cout<<endl<<endl;
          cout<<"Your PIN is incorrect... "<<endl<<endl;
             clear();
          system("color 7");
         goto load;
   }
}
int main(){ 
    cout<<fixed<<showpoint<<setprecision(2);
system("cls");
login();
system("cls");
    do{
        menu();
        cout<<"Choose your options : ";cin>>options;
        cout<<endl;
        switch(options){
            case 1:
            pin_con();
            C1:
            system("cls");
                cout<<setw(100)<<">>>>>>>>>Check Balance<<<<<<<<<"<<endl<<endl;
                cout<<"1. Balance USD "<<setw(20);
                cout<<"2. Balance KHR "<<endl<<endl;
                cout<<"Choose your options : ";cin>>op1;
                cout<<endl;
                    switch(op1){
                        case 1:
                            pin_con();
                            cout<<setw(100)<<">>>>>>>>>Check Balance<<<<<<<<<"<<endl<<endl;
                            cout<<"+ USD"<<endl<<endl;
                            cout<<" Balance (USD) : $ "<<balance_usd<<endl<<endl;
                            //balance_usd = balance_usd + deposit_usd;
                        break;
                        case 2:
                        pin_con();
                           system("cls");
                            cout<<setw(100)<<">>>>>>>>>Check Balance<<<<<<<<<"<<endl<<endl;
                            cout<<"+ KHR"<<endl<<endl;
                            cout<<" Balance (KHR) : R "<<balance_khr<<endl<<endl;
                           // balance_khr = balance_khr + deposit_khr;
                        break;
                        default : 
                            cout<<"You chose wrong options...."<<endl;
                            clear();
                            goto C1;
                        break;
                    }
                    clear();
            break;
             case 2:
             pin_con();
             system("cls");
              cout<<setw(100)<<">>>>>>>>>Amount Deposit<<<<<<<<<"<<endl<<endl;
            cout<<"1. Scan "<<setw(20);
            cout<<"2. Card "<<setw(20)<<endl<<endl;
            cout<<"Choose your options : ";cin>>op2_2;
            cout<<endl<<endl;
             system("cls");
                if( op2_2 == 1){
                    cout<<"Scanning";
                    for(int a =1; a<=20; a++){
                        Sleep(70);
                        cout<<y;
                    }
                C2:
                system("cls");
                cout<<setw(100)<<">>>>>>>>>Amount Deposit<<<<<<<<<"<<endl<<endl;
                cout<<"1. Deposit USD "<<setw(20);
                cout<<"2. Deposit KHR "<<endl<<endl;
                cout<<"Choose your options : ";cin>>op2;
                cout<<endl;
                    switch(op2){
                        case 1:
                        system("cls");
                            cout<<setw(100)<<">>>>>>>>>Deposit<<<<<<<<<"<<endl<<endl;
                            cout<<"+ USD"<<endl<<endl;
                            cout<<" Deposit (USD) : $ ";cin>>deposit_usd;
                             pin_con();
                            balance_usd = balance_usd + deposit_usd;
                            cout<<endl;
                        break;
                        case 2:
                           system("cls");
                            cout<<setw(100)<<">>>>>>>>>Deposit<<<<<<<<<"<<endl<<endl;
                            cout<<"+ KHR"<<endl<<endl;
                            cout<<" Deposit (KHR) : R ";cin>>deposit_khr;
                            pin_con();
                            balance_khr = balance_khr + deposit_khr;
                            cout<<endl;
                        break;
                        default : 
                            cout<<"You chose wrong options...."<<endl;
                            clear();
                            goto C2;
                        break;
                    }
                clear();

                }else if(op2_2 == 2){
                    C4:
                    cout<<setw(100)<<">>>>>>>>>Amount Deposit<<<<<<<<<"<<endl<<endl;
                    cout<<"Enter Your Card number : ";
                    cin.ignore();getline(cin,card1);
                    cout<<endl;
                        if( card1 == card ){
                        system("color A");
                            cout<<"Loading>";
                            for (int y =1; y<=20; y++){
                                Sleep(70);
                                cout<<">";
                            }
                            system("cls");
                            system("color 7");
                    C3:
                cout<<"1. Deposit USD "<<setw(20);
                cout<<"2. Deposit KHR "<<endl<<endl;
                cout<<"Choose your options : ";cin>>op2_3;
                cout<<endl;
                    switch(op2_3){
                        case 1:
                        system("cls");
                            cout<<setw(100)<<">>>>>>>>>Deposit USD  <<<<<<<<<"<<endl<<endl;
                            cout<<"+ USD"<<endl<<endl;
                            cout<<" Deposit (USD) : $ ";cin>>deposit_usd;
                             pin_con();
                            balance_usd = balance_usd + deposit_usd;
                            cout<<endl;
                        break;
                        case 2:
                           system("cls");
                            cout<<setw(100)<<">>>>>>>>>Deposit KHR<<<<<<<<<"<<endl<<endl;
                            cout<<"+ KHR"<<endl<<endl;
                            cout<<" Deposit (KHR) : R ";cin>>deposit_khr;
                            pin_con();
                            balance_khr = balance_khr + deposit_khr;
                            cout<<endl;
                        break;
                        default : 
                            cout<<"You chose wrong options...."<<endl;
                            clear();
                            goto C3;
                        break;
                    }
                        }else{
                            system("color 4");
                            cout<<"Loading>";
                            for (int y =1; y<=20; y++){
                                Sleep(70);
                                cout<<">";
                            }
                            system("cls");
                            cout<<"Worng number card ...."<<endl<<endl;
                            clear();
                            goto C4;
                        }
                }
                clear();  
            break;
             case 3:
             pin_con();
             c3:
             system("cls");
             cout<<setw(90)<<">>>>>>>>>Card<<<<<<<<<"<<endl<<endl;
             cout<<"-> Enter your card Number : ";//cin>>card;
             cin.ignore();getline(cin,card);
             cout<<endl;
            pin_con();
             cout<<endl;
                if(card.length() == 11){
                    system("cls");
                    cout<<"Here is Your Card number : "<<card<<endl<<endl;
                }else{
                    cout<<"Your account must have 8 numbers...."<<endl<<endl;
                    clear();
                    goto c3;
                }
             clear();
            break;
             case 4:
             system("cls");
           
                cout<<setw(90)<<">>>>>>>>>Payment<<<<<<<<<"<<endl<<endl;
                cout<<"-> Input Your mobile Phone : ";cin>>phone;
                cout<<endl;
                cout<<"How much do you want to top up :";cin>>top_up;
                cout<<endl;
                if(top_up <= balance_usd){
                        cout<<endl;
                     system("cls");
                    cout<<"-> you top up is : "<<top_up<<endl<<endl;
                     balance_usd = balance_usd - top_up;
                }else{
                    system("cls");
                    cout<<"Your have only : $"<<balance_khr<<endl<<endl;
                    cout<<"Plz, try again...."<<endl<<endl;
                
                   }
            
                    clear();
            break;
        
            case 5:
                //a
            break;
            default :
            cout<<"Wrong options. Please try again ....."<<endl;
            clear();
        }
    }while( true);

    return 0;              
  
}
