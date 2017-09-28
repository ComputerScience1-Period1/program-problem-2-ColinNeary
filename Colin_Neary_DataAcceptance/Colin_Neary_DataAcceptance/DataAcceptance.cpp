/* Heading
Colin Neary - 9/26/17  Period 1
DataAcceptance : Take in Data
Display Data, Accept User Response, Display Changed Data
*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void pause() {
	cout << "Press any button for this message to evaporate. . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
void main() {
	int potato;
	float tomato;
	double tomatoes;
	bool beet_root = false;
	char frisk;
	int calc_1, calc_2, calc_3;

	cout << "How many potatoes did you throw at me?";
	cin >> potato;
	cout << "How many tomatoes can you eat multiplied by pi?";
	cin >> tomato;
	cout << "How many tomatoes do you think there are on Earth in scientific notation?";
	cin >> tomatoes;
	cout << "Do you know what a beet root is : Y/N";
	cin >> frisk;
	if (frisk == 'Y' || frisk == 'y') {
		beet_root == true; //This is always turning out false when I put in a y or Y and I can't figure out why
	}

	cout << "You threw " << potato << "potatoes at me. \n";
	cout << "You can eat " << tomato * 3.1415926 << "tomatoes multiplied by pi." << endl;
	cout << "You think" << tomatoes << "tomatoes exist on Earth" << '\n';
	cout << boolalpha << "The answer is " << beet_root << endl;

	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter another number : ";
	cin >> calc_2;
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << " * " << calc_2 << " = " << calc_3 << endl;

	pause();
}
