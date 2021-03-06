#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

struct Records{
	char nickname[50];
	int age;
    	double score1, score2, average;
};

int main(){

    Records record[5];
    int i, choice, counter = 0;
    double max, min;
    
    while(1){
    		cout << "\n==============================================\n";
		cout << "                     MENU                     \n";
		cout << "==============================================\n";
		cout << "1. Add record\n";
		cout << "2. View players records\n";
		cout << "3. Compute for average\n";
		cout << "4. Show the player(s) who gets the max average.\n";
		cout << "5. Show the player(s) who gets the min average.\n";
		cout << "6. Exit\n";
		
		cout << "\nEnter choice: ";
		cin >> choice;
		if(choice == 1){
			cout << "----------------------------------------------\n";
			cout << "                 ADD RECORD                   \n";
			cout << "----------------------------------------------\n";
			cout << "ENTER 5 PLAYER RECORDS\n";
			for(i=0; i<5; i++){
		        cout << "\nPlayer " << i+1 << " Nickname: ";
		        cin.ignore();
		        cin.getline(record[i].nickname,49);
		        cout << "Player " << i+1 << " Age: ";
		        cin >> record[i].age;
		        cout << "Enter Player "<< i+1 << " Score 1: ";
				cin >> record[i].score1;
				cout << "Enter Player "<< i+1 << " Score 2: ";
				cin >> record[i].score2;
		    }
		    system("cls");
		} else if(choice == 2){
			cout << "----------------------------------------------\n";
			cout << "            VIEW PLAYERS RECORDS              \n";
			cout << "----------------------------------------------\n";
			cout << setw(10) <<"Nickname"
			     << setw(17) << "Age"
			     << setw(21) << "Score 1"
			     << setw(21) << "Score 2\n";
			for(i=0; i<5; i++){
			    cout << endl;
			    cout << setw(10) << record[i].nickname
					 << setw(16) << record[i].age
					 << setw(20) << record[i].score1 
					 << setw(20) << record[i].score2 << endl;
			}
			cout << "\n\nPress any key to return....";
			system("pause>0");
			system("cls");
		} else if(choice == 3){
			cout << "----------------------------------------------\n";
			cout << "             COMPUTE FOR AVERAGE              \n";
			cout << "----------------------------------------------\n";
			cout << setw(10) <<"Nickname"
			     << setw(17) << "Average\n";
			for(i=0; i<5; i++){
				record[i].average = round((record[i].score1 + record[i].score2) / 2);
			    cout << endl;
			    cout << setw(10) << record[i].nickname
				 << setw(16) << record[i].average << endl;
			}
			cout << "\n\nPress any key to return....";
			system("pause>0");
			system("cls");
		} else if(choice == 4){
			cout << "----------------------------------------------\n";
			cout << "         SHOW PLAYERS WITH MAX AVERAGE        \n";
			cout << "----------------------------------------------\n";
			cout << setw(10) <<"Nickname"
			     << setw(17) << "Average\n";
			max = record[0].average;
			counter = 0;
			for(i = 0; i < 5; i++){
				if(max < record[i].average){
					max = record[i].average;
				}
			}
			for(i = 0; i < 5; i++){
				if(max == record[i].average){
					cout << setw(10) << record[counter].nickname
			     		     << setw(15) << max << endl;
				}
				counter++;
			}
			cout << "\n\nPress any key to return....";
			system("pause>0");
			system("cls");
		} else if(choice == 5){
			cout << "----------------------------------------------\n";
			cout << "         SHOW PLAYERS WITH MIN AVERAGE        \n";
			cout << "----------------------------------------------\n";
			cout << setw(10) <<"Nickname"
			     << setw(17) << "Average\n";
			min = record[0].average;
			counter = 0;
			for(i = 0; i < 5; i++){
				if(min > record[i].average){
					min = record[i].average;
				}
			}
			for(i = 0; i < 5; i++){
				if(min == record[i].average){
					cout << setw(10) << record[counter].nickname
			     		     << setw(15) << min << endl;
				}
				counter++;
			}
			cout << "\n\nPress any key to return....";
			system("pause>0");
			system("cls");
		} else if(choice == 6){
			cout << "Exiting....";
			exit(1);
		} else{
			cout << "Invalid Input. Please Try Again.\n";
		}
	}
    return 0;
}
