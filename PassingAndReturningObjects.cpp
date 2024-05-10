#include<iostream>

using namespace std;
class Distance
{
    private:
	  int feet;
	  float inches;

	public:

	//CONSTRUCTOR BODY
	Distance()
	{
	   inches = 0;
	   feet = 0.0;
    }


// GETDATA FUNCTION
    void GetData()
    {
        cout <<endl<<"Enter Feet:   ";
        cin >>feet;

        cout <<endl<<"Enter inches:   ";
        cin >>inches;
    }

    // DISPLAY DATA FUNCTION
    void DisplayData()
    {
        cout<<endl<<" Feet =    "<<feet;
        cout<<endl<<"Inches = "<<inches;
    }


    // ADDITION OF TWO DISTANCES

    Distance AddDistances(Distance DT1, Distance DT2)
    
    {
        Distance DTS;
        DTS.feet =feet+DT1.feet+DT2.feet;
        DTS.inches = inches +DT1.inches+DT2.inches;

        return DTS;
    }
    
};


int main()
{
    Distance obj1,obj2,obj3,objSum;
    obj1.GetData();
    obj2.GetData();
    obj3.GetData();


    objSum=obj1.AddDistances(obj2,obj3);

    objSum.DisplayData();

    return (0);
}
