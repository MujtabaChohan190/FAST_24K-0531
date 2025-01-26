#include<iostream>
using namespace std;

int main(){
    int id , UnitsConsumed;
    string CustomerName;

    //Taking the inputs

    cout<<"Enter the customer ID: ";
    cin>>id;

    cout << "Enter your name: ";
    cin>>CustomerName;

    cout<<"Enter units consumed: ";
    cin>>UnitsConsumed;

    //Set conditions
    double charge = 0;
    if(UnitsConsumed <=199){
        charge = 16.20;
    }
    if(UnitsConsumed >=200 && UnitsConsumed<300){
        charge = 20.10;        
    }
    if(UnitsConsumed>=300 && UnitsConsumed<500){
        charge = 27.10;
    }
    if(UnitsConsumed>=500){
        charge = 35.9;
    }

    //Calculating amount charge
    double AmountCharge = 0;
    AmountCharge = charge * UnitsConsumed;
    cout<<"@Rs "<<charge<<"per unit: "<<AmountCharge<<endl;

    double SurchargeAmount = 0;
    if(AmountCharge>18000){
        SurchargeAmount = AmountCharge * (15.0/100.0); //Using 15.0 and 100.0 for float division
        cout<<"Surcharge Amount: "<<SurchargeAmount<<endl;
    }
    double NetAmount=0;
    NetAmount = AmountCharge + SurchargeAmount;
    cout<<"The net amount paid by the customer is: "<<NetAmount;
    return 0;
}
