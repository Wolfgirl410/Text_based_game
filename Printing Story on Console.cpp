#include <iostream>

using namespace std;

int main() {
	int playerHealth;
	int livesCount;
	int PlayerId;
	float winPercentage;
	bool playerWon;
	char typePlayer[1];
	int enemyHealth;
	int maxPH = 200;
	int maxEH = 150;

	/*cout<<"On a peaceful night,the tiny,icelandic village whispered to the dancing trees...\n\nYou, um...what is your name...?\n\n";

	cout<<"Enter your player ID here: ";
	cin>>PlayerId;

	cout<<"Enter number of lives you would like to start with: ";
	cin>>livesCount;*/
	
	cout<<"Enter your health that you would like to start with: ";
	cin>>playerHealth;

	/*cout<<"Enter your percentage of winning: ";
	cin>>winPercentage;

	cout<<"Has the player won? (1 for Yes, 0 for No): ";
	cin>>playerWon;
	
	cout<<"Enter a type of player (A/B/C/D): ";
	cin>>typePlayer;*/

	cout<<"Enter your enemy's health: ";
	cin>>enemyHealth;

	cout << "\n==========Player Stats==========\n\n";
	cout << "PlayerID	: " <<PlayerId<< endl;
	cout << "Lives count     : " <<livesCount<< endl;
	cout << "Player Health	: " <<playerHealth<< endl;
	cout << "Win Percentage	: " <<winPercentage<< endl;
	cout << "Has Won         : " << (playerWon ? "Yes" : "No") << endl;
	cout << "Player Type     : " << typePlayer << endl;
	cout << "Enemy Health	: " <<enemyHealth<< endl;
cout<<endl;
	//This is for who wins
	if (playerHealth > 0 && enemyHealth>0){
		cout<< "Game Over! Player wins this round!"<<endl;
	}else if (playerHealth == 0 && enemyHealth > 0){
		cout<< "Game Over! Enemy wins this round!"<<endl;
	} else if (playerHealth ==0 && enemyHealth==0){
		cout<< "Game Over! It is a draw!"<<endl;
	}

	if (playerHealth >= 0){

		if (playerHealth == maxPH){
			cout << "Player's health is full"<< endl;
		} else if (playerHealth == maxPH/2){
			cout << "Player's health is at the half line"<< endl;
		} else if (playerHealth == maxPH*0){
			cout << "Player's health is zero"<< endl;
		} else {
			cout << "Player's health is " << playerHealth << endl ;
		}
	} 

	if (enemyHealth >= 0){
		if (enemyHealth == maxEH){
			cout << "Enemy's health is full"<< endl;
		} else if (enemyHealth == maxEH/2){
			cout << "Enemy's health is at the half line"<< endl;
		} else if (enemyHealth == maxEH*0){
			cout << "Enemy's health is zero"<< endl;
		} else {
			cout << "Enemy's health is " << enemyHealth << endl ;
		}
	} 
		

	return 0;
}
