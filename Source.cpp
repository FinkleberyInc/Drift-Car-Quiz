#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;//user inputs/responses
	char input2;//
	char input3;//
	int input4;//
	cout << " WELCOME. Today we will be finding out what you're ideal drift car is going to be!" << endl;//Opening Statement
	cout << " What is your favorite color?" << endl;//gets users favorite color
	getline(cin, input);
	cout << " Very well, your car will be colored " << input << "." << endl;//uses user's favorite color in statement for interaction
	cout << " Are you (r)ight handed or (l)eft?" << endl;
	cin >> input2;
	if (input2 =='r')//if user says he or she is right handed computer print out below
		cout << " You will have a right hand-drive whip!!" << endl;
	else if (input2 == 'l') {//if user says he or she is left handed print out below
		cout << " You will have a regular in-nation manufactured whip :(" << endl;
	}
	cout << " How many doors do you want on your whip? Do you want a 2-door (c)oupe or a (s)edan" << endl;
	cin >> input3;//gets users input
	if (input3 == 'c') {//checks input and sets option
		cout << "THESE ARE YOUR OPTIONS FOR COUPE DRIFT CARS" << endl;
		cout << "1.Nissan S15 " << endl;
		cout << "2.Nissan 240SX " << endl;
		cout << "3.Toyota Corolla (AE86) " << endl;
		cout << "4.Nissan 350Z " << endl;
		cout << "5.Mazda RX7 " << endl;
		cout << "Which whip would you like?(enter 1, 2, 3, 4, or 5." << endl;
		cin >> input4;//chose option
		{if (input4 == 1 && input2 == 'r')// if player is right handed and chose option bellow
			cout << "You will have a " << input << " right-hand drive Nissan S15." << endl;
		else if (input4 == 2 && input2 == 'r')//if player is right handed and choses option2
			cout << "You will have a " << input << " right-hand drive Nissan 240SX." << endl;
		else if (input4 == 3 && input2 == 'r')//I think you understand else if statements
			cout << "You will have a " << input << " right-hand drive Toyota Corolla (AE86)." << endl;
		else if (input4 == 4 && input2 == 'r')
			cout << "You will have a " << input << " right-hand drive Nissan 350Z." << endl;
		else if (input4 == 5 && input2 == 'r')
			cout << "You will have a " << input << " right-hand drive Mazda RX7." << endl; }
	}
	else if (input3 == 's') {//if player wants a 4 door srift car print out options
		cout << "These are your options for sedan drifty boiz." << endl;
		cout << "1.TOYOTA CHASER JZX100 " << endl;
		cout << "2.AUDI A4 " << endl;
		cout << "3.MERCEDES TURBO C36 AMG " << endl;
		cout << "4.D1GP ALTEZZA " << endl;
		cout << "5.FORD CROWN VICTORIA POLICE INTERCEPTOR " << endl;
		cin >> input4;
		if (input4 == 1 && input2 == 'r')//custom inputs
			cout << "You will have a " << input << " right-hand drive TOYOTA CHASER JZX100." << endl;
		else if (input4 == 2 && input2 == 'r')
			cout << "You will have a " << input << " right-hand drive AUDI A4AUDI A4." << endl;
		else if (input4 == 3 && input2 == 'r')
			cout << "You will have a " << input << " right-hand drive MERCEDES TURBO C36 AMG." << endl;
		else if (input4 == 4 && input2 == 'r')
			cout << "You will have a " << input << " right-hand drive D1GP ALTEZZA." << endl;
		else if (input4 == 5 && input2 == 'r')
			cout << "You can't have a " << input << " regular left-hand drive FORD CROWN VICTORIA POLICE INTERCEPTOR since it gm:(." << endl;
	}
		if (input4 == 1 && input2 == 'l')//end of all possible outputs
			cout << "You will have a " << input << " left-hand drive TOYOTA CHASER JZX100." << endl;
		else if (input4 == 2 && input2 == 'l')
			cout << "You will have a " << input << " left-hand drive AUDI A4AUDI A4." << endl;
		else if (input4 == 3 && input2 == 'l')
			cout << "You will have a " << input << " left-hand drive MERCEDES TURBO C36 AMG." << endl;
		else if (input4 == 4 && input2 == 'l')
			cout << "You will have a " << input << " left-hand drive D1GP ALTEZZA." << endl;
		else if (input4 == 5 && input2 == 'l')
			cout << "You will have a " << input << " regular left-hand drive FORD CROWN VICTORIA POLICE INTERCEPTOR since it gm:(." << endl; 
}