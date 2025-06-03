#include <iostream>

using namespace std;

int main() {
	int playerHealth;
	int livesCount;
	int PlayerId;
	float winPercentage;
	bool playerWon;
	int typePlayer;

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

	cout<<"Your player ID is "<<PlayerId<<"\n\n";
	cout<<"The number of lives you will have is "<<livesCount<<"\n\n";
	cout<<"Your health is "<<playerHealth<<"\n\n";
	cout<<"Your win percentage is "<<winPercentage<<"\n\n";
	cout << "Has Won         : " << (playerWon ? "Yes" : "No") << endl;
	cout << "Player Type     : " << typePlayer << endl;
	return 0;
}
