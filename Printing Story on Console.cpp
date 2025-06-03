#include <iostream>

using namespace std;

int main() {
	int playerHealth;
	int livesCount;
	int PlayerId;
	float winPercentage;
	bool playerWon;
	char typePlayer[1];

	cout<<"On a peaceful night,the tiny,icelandic village whispered to the dancing trees...\n\nYou, um...what is your name...?\n\n";

	cout<<"Enter your player ID here: ";
	cin>>PlayerId;

	cout<<"Enter number of lives you would like to start with: ";
	cin>>livesCount;
	
	cout<<"Enter your health that you would like to start with: ";
	cin>>playerHealth;

	cout<<"Enter your percentage of winning: ";
	cin>>winPercentage;

	cout<<"Has the player won? (1 for Yes, 0 for No): ";
	cin>>playerWon;
	
	cout<<"Enter a type of player (A/B/C/D): ";
	cin>>typePlayer;

	cout << "\n==========Player Stats==========\n\n";
	cout << "PlayerID	: " <<PlayerId<< endl;
	cout << "Lives count     : " <<livesCount<< endl;
	cout << "Player Health	: " <<playerHealth<< endl;
	cout << "Win Percentage	: " <<winPercentage<< endl;
	cout << "Has Won         : " << (playerWon ? "Yes" : "No") << endl;
	cout << "Player Type     : " << typePlayer << endl;
	return 0;
}
