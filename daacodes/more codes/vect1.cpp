#include <iostream>
#include <string>
#include <vector>
#define NUM 5
int main()
{
	using std::vector;
	using std::string;
	using std::cin;
	using std::cout;
	using std::endl;
	vector<int> ratings(NUM);
	vector<string> titles(NUM);
	cout << "You will do exactly as told. You will enter"
		<< NUM << " book titles and your ratings (0-10).\n";
	int i;
	for (i = 0; i < NUM; i++)
	{
		cout << "Enter title #" << i + 1 << ": ";
		getline(cin,titles[i]);      //for a line to be title of book
		//cin >> titles[i];        // only a string to be title of book that s why not prefered
		cout << "Enter your rating (0-10): ";
		cin >> ratings[i];
		cin.get();
	}
	cout << "Thank you. You entered the following:\n"
		<< "Rating\tBook\n";
	for (i = 0; i < NUM; i++)
	{
		cout << ratings[i] << "\t" << titles[i] << endl;
	}
	return 0;
}