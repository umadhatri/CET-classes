#include <iostream>
using namespace std;

class flight
{
    private:
        string flightNumber;
        string sourceLoc;
        string destinationLoc;
        long fare, amount, tax, disc, net;
        int nTickets;
    public:

        flight()
        {
            flightNumber = "IND621";
            sourceLoc = "HYD";
            destinationLoc = "DEL";
            fare = 15000;
            nTickets = 3;
        }

        /*void getData()
        {
            cout << "Enter Flight Number: "<<endl;
            cin >> flightNumber;
            cout << "Enter source location: "<<endl;
            cin >> sourceLoc;
            cout << "Enter destination location: "<<endl;
            cin >> destinationLoc;
            cout << "Enter number of tickets: "<<endl;
            cin >> nTickets;
            cout << "Enter Fare: " << endl;
            cin >> fare;
        }*/
        void calculate()
        {
            amount = (fare*nTickets);
            tax = amount*(18/100);
            disc = (amount*5)/100;
            net = (amount+tax) - disc;
        }
        void putData()
        {
            cout << endl << "Flight number: " << flightNumber;
            cout << endl << "Source Location: " << sourceLoc;
            cout << endl << "Destination: " << destinationLoc;
            cout << endl << "Net amount: " << net; 
        }
};

int main()
{
    cout << "\n\n";

    flight flt;
    //flt.getData();
    flt.calculate();
    flt.putData();

    cout << "\n\n";
    return 0;
}