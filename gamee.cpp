#include <iostream>
using namespace std;

int applesLeft = 20; 
int nCrystalsFound = 0;

string direction;
string gameState  = "Running";

int MarshCrystal = 0;
int WerewolfCrystal = 0;
int SwampsCrystal = 0;
int EistenCrystal = 0;
int OrchardApple = 0;

int EnchantedForest();
int SandsOfQuick();
int WampireCove();
int MarshOfUndead();
int ApplesOrchard();
int WerewolfHill();
int ElvinWaterfall();
int SwampsOfDespair();
int BridgeOfDeath();
int EistenTunnel();
int WizardCastle();

int Invalid();
int Restart();

int main(){
	cout << "Welcome to World Of Seeplusia. " << endl;
	EnchantedForest();
}

int EnchantedForest(){
	cout << endl << "In Which direction you want to go: ";
	cin >> direction;

	if(direction == "East"){
		SandsOfQuick();
	}
	else if(direction == "South"){
		applesLeft = applesLeft - 3;
		cout << "You are arrived at Wampire Cove. " << endl << "Remaining Apple = " << applesLeft<< endl;
		WampireCove();
	}	
	else{
		Invalid();
		EnchantedForest();
	}
	return 0;
}

int SandsOfQuick(){
	cout << "Alas! You are sinked into the Quick Sand. "<< endl << "You Lost!";
	return 0;
}

int Invalid(){
	applesLeft = applesLeft - 1;
	cout << "Invalid Direction. 1 apple has been cut. "<< endl << "Remaining Apple = " << applesLeft<<endl;
	return 0;
}

int WampireCove(){
	cout << endl << "In Which direction you want to go: ";
	cin >> direction;	
	if(direction == "North"){
		applesLeft = applesLeft - 3;
		cout << "You are arrived at Enchanted Forest. "<< endl << "Remaining Apple = " << applesLeft<<endl;
		EnchantedForest();
	}
	else if(direction == "East"){
		applesLeft = applesLeft - 1;
		cout << "You are arrived at Marsh of Undead. "<< endl << "Remaining Apple = " << applesLeft<<endl;
		if (MarshCrystal == 0){
			nCrystalsFound = nCrystalsFound + 1;
			MarshCrystal ++;
			cout << "Congratulations! Crystal Found :)"<<endl;
			cout << "Crystals Found = "<<nCrystalsFound<<endl;
			MarshOfUndead();
		}
		else{
			cout<<"You've already collected the Crystal from here" << endl;
			MarshOfUndead();
		}		
		
	}
	else if(direction == "West"){
		applesLeft = applesLeft - 1;
		cout << "You are arrived at Swamps of Despair. "<< endl << "Remaining Apple = " << applesLeft<<endl;
		if (SwampsCrystal == 0){
			nCrystalsFound = nCrystalsFound + 1;
			SwampsCrystal ++;
			cout << "Congratulations! Crystal Found :)"<<endl;
			cout << "Crystals Found = "<<nCrystalsFound<<endl;
			SwampsOfDespair();
		}
		else{
			cout<<"You've already collected the Crystal from here" << endl;
			SwampsOfDespair();
		}
	}
	else{
		applesLeft = applesLeft - 3;
		cout << "You are arrived at Werewolf Hill. "<< endl << "Remaining Apple = " << applesLeft<<endl;
		if (WerewolfCrystal == 0){
			nCrystalsFound = nCrystalsFound + 1;
			WerewolfCrystal ++;
			cout << "Congratulations! Crystal Found :)"<<endl;
			cout << "Crystals Found = "<<nCrystalsFound<<endl;
			WerewolfHill();
		}
		else{
			cout<<"You've already collected the Crystal from here" << endl;
			WerewolfHill();
		}
	}
	return 0;
}

int MarshOfUndead(){
	cout << endl << "In Which direction you want to go: ";
	cin >> direction;	
	if(direction == "West"){
		applesLeft = applesLeft - 1;
		cout << "You are arrived at Wampire Cove. "<< endl << "Remaining Apple = " << applesLeft<<endl;
		WampireCove();
	}
	else if(direction == "South"){
		if (OrchardApple == 0){
			applesLeft = applesLeft + 5;
			OrchardApple ++;
			cout << "You are arrived at Apples Orchard. Congratulations! You've gained 6 Apples"<< endl << "Remaining Apple = " << applesLeft<<endl;
			ApplesOrchard();
		}
		else{
			cout<<"You've already collected the Apples from here!" << endl;
			ApplesOrchard();
		}
	}

	else{
		Invalid();
		MarshOfUndead();
	}
	return 0;
}

int SwampsOfDespair(){
	cout << endl << "In Which direction you want to go: ";
	cin >> direction;	
	if(direction == "North"){
		applesLeft = applesLeft - 1;
		cout << "You are arrived at Bridge of Death. "<< endl << "Remaining Apple = " << applesLeft<<endl;
		BridgeOfDeath();
	}
	else if(direction == "East"){
		applesLeft = applesLeft - 1;
		cout << "You are arrived at Wampire Cove. "<< endl << "Remaining Apple = " << applesLeft<<endl;
		WampireCove();
	}
	else{
		Invalid();
		SwampsOfDespair();
	}
	return 0;
}

int WerewolfHill(){
	cout << endl << "In Which direction you want to go: ";
	cin >> direction;	
	if(direction == "North"){
		applesLeft = applesLeft - 3;
		cout << "You are arrived at Wampire Cove. "<< endl << "Remaining Apple = " << applesLeft<<endl;
		WampireCove();
	}
	else if(direction == "West"){
		applesLeft = applesLeft - 2;
		cout << "You are arrived at Elvin Waterfall. "<< endl << "Remaining Apple = " << applesLeft<<endl;
		// ElvinWaterfall();
	}
	else{
		Invalid();
		WerewolfHill();
	}
	return 0;
}

int ApplesOrchard(){
	cout << endl << "In Which direction you want to go: ";
	cin >> direction;	
	if(direction == "West"){
		applesLeft = applesLeft - 1;
		cout << "You are arrived at Werewolf Hill. "<< endl << "Remaining Apple = " << applesLeft<<endl;
		if (WerewolfCrystal == 0){
			nCrystalsFound = nCrystalsFound + 1;
			WerewolfCrystal ++;
			cout << "Congratulations! Crystal Found :)"<<endl;
			cout << "Crystals Found = "<<nCrystalsFound<<endl;
			WerewolfHill();
		}
		else{
			cout<<"You've already collected the Crystal from here" << endl;
			WerewolfHill();
		}
	}	
	else{
		Invalid();
		ApplesOrchard();
	}
	return 0;
}

int BridgeOfDeath(){
	cout << endl << "In Which direction you want to go: ";
	cin >> direction;	
	if(direction == "West"){
		if(nCrystalsFound == 4){
			applesLeft = applesLeft - 6;
			cout << endl << "You are arrived at Wizard's Castle. "<< endl << "Remaining Apple = " << applesLeft<<endl;
			// WizardCastle();			
		}
		else{
			cout << endl << "You require all four Crystals to pass Bridge of Death. "<< endl << "Remaining Apple = " << applesLeft<<endl;
			cout << "Crystals Found = " << nCrystalsFound << endl;
			BridgeOfDeath();
		}
	}
	else{
		Invalid();
		BridgeOfDeath();
	}
	return 0;
}
