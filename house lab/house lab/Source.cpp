/* Program by Oliver Kirsch - CSIT 121

This program takes total houses in a neighborhood and finds
the average people per home and the number of 3 people per home

*/
///include libraries
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	//declare viariables
	int totalHouses;
	int counter = 1;
	int housesWith3plus = 0;
	int displayHW3P;
	int residents = 0;
	int totalResidents = 0;

	double averagePeople;
	double houses;

	//Get total number of houses from user
	cout << "How many houses does this neighborhood have? \n";
	cin >> totalHouses;

	//formatting of loop and counter
	while (counter <= totalHouses)
	{
		//Loop text
		cout << "Please enter number of people in house #" << counter << ":";
		cin >> residents;
		
		if (residents >= 3)
		{
			//if there are 3 or more
			totalResidents = totalResidents + residents;

			housesWith3plus = housesWith3plus + 1;

			counter++;
		}
		else
		{
			//If there is not 3 or more
			totalResidents = totalResidents + residents;

			counter++;
		}

	}

	//math to display facts
	averagePeople = totalResidents / totalHouses;
	displayHW3P = housesWith3plus / totalHouses;
	displayHW3P = displayHW3P * 100;

	//Display fatcs from program
	cout <<"\n\nThe total homes in then neighborhood is: " << totalHouses << endl;
	cout << "Average number of people per home is: " << averagePeople << endl;
	cout << "The percent of houses with 3 or more people is: " << displayHW3P << "%" << endl;



	system("pause");
	return 0;
}