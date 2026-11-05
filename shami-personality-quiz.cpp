#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <limits>
#include <cmath>


using namespace std;

void start(string& option);

void personalityQuizzes();

void elements();
void fourSeasons();
void veggieVenture();
void adventurer();

void credits(string& decisionCredits);

void exit(string& decisionExit);

int main() {
	string option, decisionCredits, decisionExit;
	int quizNumber;
	

	
	while (true) {
		
		start(option);
	
		system ("cls");
		
		if (option == "1") {
	   
	    
	    while (true) {
	    	system ("cls");
	    	personalityQuizzes();
	        cout << endl;
	        cout << "\t\t                          WHICH AMONG THESE PERSONALITY QUIZZES WOULD YOU LIKE TO TAKE?\n";
	        cout << "\t\t                                            (1, 2, 3, 4 or 0 FOR EXIT)\n";
	        cout << endl;
	        cout << "\t\t                                                  >> ";
	        cin >> quizNumber;
	        cout << endl;
	
	        if (cin.fail()) {
	            cin.clear();
	            cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
	            cout << "\t\t                                      INVALID INPUT. PLEASE ENTER A NUMBER." << endl;
	            cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
	            cout << endl;
	            cout << "\t\t-----------------------------------------------------------------------------------------------------------------" << endl;
	            continue;
	        }
	
	       if (quizNumber >= 1 && quizNumber <= 4) {
                switch (quizNumber) {
                    case 1:
                        elements();
                        break;
                    case 2:
                        fourSeasons();
                        break;
                    case 3:
                        veggieVenture();
                        break;
                    case 4:
                        adventurer();
                        break;
                }

                string playAgain;
                
                cout << "\n\t\t                            WOULD YOU LIKE TO TAKE ANOTHER QUIZ? (YES/NO)\n";
                cout << "\t\t                                                  >> ";
                cin >> playAgain;

                for (char& c : playAgain) {
                    c = toupper(c);
                }

                if (playAgain == "YES") {
				    continue;
				} else if (playAgain == "NO") {
				    cout << "\n\t\t                                    RETURNING TO THE QUIZ MENU...\n";
				    break;
                } else {
                    cout << "\n\t\t                          INVALID INPUT. RETURNING TO THE QUIZ MENU INSTEAD...\n";
                    break;
               		 }
               
					} else if (quizNumber == 0) {
			            system("cls");
						cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
						cout << "\t\t*   _________________________________________________________________________________________________________   *" << endl;
						cout << "\t\t*  |                                                                                                         |  *" << endl;
						cout << "\t\t*  |                                        GOT IT! YOU'RE BACK IN THE MENU!                                 |  *" << endl;
						cout << "\t\t*  |_________________________________________________________________________________________________________|  *" << endl;
						cout << "\t\t*                                                                                                               *" << endl;
						cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
						cout << endl;
						cout << "\t\t-----------------------------------------------------------------------------------------------------------------" << endl;
						cout << endl;
						break;
				        } else {
							cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
							cout << "\t\t                                         INVALID INPUT. PLEASE TRY AGAIN.\n";
							cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
							cout << endl;
							cout << "\t\t-----------------------------------------------------------------------------------------------------------------" << endl;
						        }
    }
			} else if (option == "2") {
				credits(decisionCredits);
				
				if (decisionCredits == "1") {
					system ("cls");
					continue;
				} else if (decisionCredits == "2") {
					system ("cls");
					
					while (true) {
					exit (decisionExit);
										
					for (char& c : decisionExit) {
								c = toupper (c);
								}
					
					if (decisionExit == "YES") {
						system ("cls");
						cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
						cout << "\t\t*   _________________________________________________________________________________________________________   *" << endl;
						cout << "\t\t*  |                                                                                                         |  *" << endl;
						cout << "\t\t*  |                                       GOT IT! HOPE TO SEE YOU AGAIN SOON!                               |  *" << endl;
						cout << "\t\t*  |_________________________________________________________________________________________________________|  *" << endl;
						cout << "\t\t*                                                                                                               *" << endl;
						cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
						cout << endl;
						exit(0);
					} else if (decisionExit == "NO") {
						system ("cls");
						break;
					} else {
							cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
							cout << "\t\t                                         INVALID INPUT. PLEASE TRY AGAIN.\n";
							cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
							cout << endl;
							cout << "\t\t-----------------------------------------------------------------------------------------------------------------" << endl;
										}
				}
				} else {
											cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
											cout << "\t\t                                         INVALID INPUT. PLEASE TRY AGAIN.\n";
											cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
											cout << endl;
											cout << "\t\t-----------------------------------------------------------------------------------------------------------------" << endl;
									}
									
				
				} else if (option == "3") {
				
					while (true) {
					exit (decisionExit);
										
					for (char& c : decisionExit) {
								c = toupper (c);
								}
					
					if (decisionExit == "YES") {
						system ("cls");
						cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
						cout << "\t\t*   _________________________________________________________________________________________________________   *" << endl;
						cout << "\t\t*  |                                                                                                         |  *" << endl;
						cout << "\t\t*  |                                       GOT IT! HOPE TO SEE YOU AGAIN SOON!                               |  *" << endl;
						cout << "\t\t*  |_________________________________________________________________________________________________________|  *" << endl;
						cout << "\t\t*                                                                                                               *" << endl;
						cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
						cout << endl;
						exit(0);
					} else if (decisionExit == "NO") {
						system ("cls");
						break;
					} else {
							cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
							cout << "\t\t                                         INVALID INPUT. PLEASE TRY AGAIN.\n";
							cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
							cout << endl;
							cout << "\t\t-----------------------------------------------------------------------------------------------------------------" << endl;
										}
				}
			}
		
	}

	
	return 0;
}

void start(string& option){
	system ("cls");
	cout << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
	cout << "\t\t*   _________________________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |                 ____ _                 _     ____           _         _   _                             |  *" << endl;
	cout << "\t\t*  |                | ___| |___ _____ _____ _    |  _ |___ ___ _| |___ ___| |_ _ ___ ___ __                  |  *" << endl;
	cout << "\t\t*  |                 ___ |  _  | _   |     | |   |  __| |_| _ | _ | | | __|  _| | _ |   |__-|                |  *" << endl;
	cout << "\t\t*  |                |____|_| |_|___|_|_|_|_|_|   |_|  |_| |___|___|___|___|_| |_|___|_|_|___|                |  *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |_________________________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                               *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
	cout << endl;
	cout << "\t\t                            ENTER THE NUMBER OF THE OPTION YOU WOULD LIKE TO SELECT\n";
	cout << endl;
	cout << "\t\t                                           1. PROCEED TO PERSONALITY QUIZZES\n";
	cout << "\t\t                                           2. CREDITS\n";
	cout << "\t\t                                           3. EXIT\n";
	cout << endl;
	cout << "\t\t                                           >> ";
	cin >> option;
	
}


void personalityQuizzes() {
	cout << endl;
	cout << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
	cout << "\t\t*   _________________________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |   ____                                    _ _ _                 _____         _                         |  *" << endl;
	cout << "\t\t*  |  |  _  |                                 | |_| |_              |  _  |       |_|                        |  *" << endl;
	cout << "\t\t*  |  | |_| |____ _____ ____ _____ _____ _____| |_|  _|_   _        | | | |  _   _ _ _____ _____ ____ ____   |  *" << endl;
	cout << "\t\t*  |  |  ___|  -_|  |__| ___|  _  |     |     | | | | | | | |       | | | |_| | | | |___  |___  |  -_| ___|  |  *" << endl;
	cout << "\t\t*  |  | |   | |__|  |   __  | |_| |  |  | | | | | | |_| |_| |       | |_|  _| |_| | |  ___   ___| |__ __  |  |  *" << endl;
	cout << "\t\t*  |  |_|   |____|__|  |____|_____|__|__|___|_|_|_|___|___  |       |_____| |_____|_|_____|_____|____|____|  |  *" << endl;
	cout << "\t\t*  |                                                      | |                                                |  *" << endl;
	cout << "\t\t*  |                                                      |_|                                                |  *" << endl;
	cout << "\t\t*  |_________________________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                               *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
	cout << "\t\t*    __________________________________________________   __________________________________________________    *" << endl;
	cout << "\t\t*   |                                                  | |                                                  |   *" << endl;
	cout << "\t\t*   |                        (1)                       | |                        (2)                       |   *" << endl;
	cout << "\t\t*   |                                                  | |                                                  |   *" << endl;
	cout << "\t\t*   |           WHAT ELEMENT OF NATURE ARE YOU?        | |       WHICH AMONG THE FOUR SEASONS ARE YOU?      |   *" << endl;
	cout << "\t\t*   |             (EARTH, WIND, FIRE, WATER)           | |         (SUMMER, SPRING, AUTUMN, WINTER)         |   *" << endl;
	cout << "\t\t*   |                                                  | |                                                  |   *" << endl;
	cout << "\t\t*   |__________________________________________________| |__________________________________________________|   *" << endl;
	cout << "\t\t*    __________________________________________________   __________________________________________________    *" << endl;
	cout << "\t\t*   |                                                  | |                                                  |   *" << endl;
	cout << "\t\t*   |                        (3)                       | |                        (4)                       |   *" << endl;
	cout << "\t\t*   |                                                  | |                                                  |   *" << endl;
	cout << "\t\t*   |              WHAT VEGETABLE ARE YOU?             | |             WHAT ADVENTURER ARE YOU?             |   *" << endl;
	cout << "\t\t*   |               (BAHAY KUBO EDITION)               | |            (ADVENTUROUS OR CAUTIOUS)             |   *" << endl;
	cout << "\t\t*   |                                                  | |                                                  |   *" << endl;
	cout << "\t\t*   |__________________________________________________| |__________________________________________________|   *" << endl;
	cout << "\t\t*                                                                                                               *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
}

void elements() {
	int earth = 0, wind = 0, fire = 0, water = 0;
	char answer;
	bool validInput;
	
	system ("cls");
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |                     o   _                  ______                 _                        |  *" << endl;
	cout << "\t\t*  |  o       _|_           |                                           |     o    _|_          |  *" << endl;
	cout << "\t\t*  |           |            |       WHAT ELEMENT OF NATURE ARE YOU?     |           |       o   |  *" << endl;
	cout << "\t\t*  |        o    _|_        |_                  ______                 _|             _|_       |  *" << endl;
	cout << "\t\t*  |              |                                                        o           |        |  *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |       DISCOVER WHICH ELEMENT OF NATURE YOU EMBODY IN THIS FUN AND INTROSPECTIVE QUIZ!      |  *" << endl;
	cout << "\t\t*  | ARE YOU THE FIERY ENERGY OF FIRE, THE CALMING STABILITY OF EARTH, THE REFRESHING BREEZE OF |  *" << endl;
	cout << "\t\t*  |     AIR, OR THE DEEP MYSTERY OF WATER? ANSWER THE QUESTIONS AND FIND OUT WHICH ELEMENT     |  *" << endl;
	cout << "\t\t*  |               REPRESENTS YOUR PERSONALITY, TRAITS, AND INNER STRENGTHS.                    |  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t                                       L E T ' S  S T A R T  ! ! !\n";
	cout << endl;
	cout << "\t\t                                     << PRESS 'ENTER' TO CONTINUE >>\n";
	cout << "\t\t                                                     ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 1]\n";
	cout << endl;
	cout << "\t\t                  A person is lost and approaches you for help! What would you do?\n";
	cout << endl;
	cout << "\t\t                   [ A. Guide them by giving directions to their destination.    ]\n";
	cout << "\t\t                   [ B. Escort them to the exact location they are asking for.   ]\n";
	cout << "\t\t                   [ C. Just walk away and ignore them.                          ]\n";
	cout << "\t\t                   [ D. Tell them to ask someone else and to stop bothering you. ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 1\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			wind++;
			break;
		} 
		case 'B': {
			earth++;
			water++;
			break;
		} 
		case 'C': {
			wind++;
			fire++;
			break;
		}
		case 'D': {
			fire++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 2]\n";
	cout << endl;
	cout << "\t\t                  You were invited to a party at a club by a friend. How would you react?\n";
	cout << endl;
	cout << "\t\t       [ A. Thank you for inviting me! I will definetely be there!                           ]\n";
	cout << "\t\t       [ B. Um, I don't think I'll be able to go. Sorry.                                     ]\n";
	cout << "\t\t       [ C. I don't think I can handle socializing with people, but rest assured, I will go. ]\n";
	cout << "\t\t       [ D. That sounds awesome! Expect me to be there an hour early! I can't wait to party! ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 2\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			wind++;
			break;
		} 
		case 'B': {
			earth++;
			break;
		} 
		case 'C': {
			water++;
			break;
		}
		case 'D': {
			fire++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 3]\n";
	cout << endl;
	cout << "\t\t                    What coping mechanism would you use when you fail an exam?\n";
	cout << endl;
	cout << "\t\t     [ A. Cry all day and night.                                                               ]\n";
	cout << "\t\t     [ B. Treat yourself for doing what you can despite the stress.                            ]\n";
	cout << "\t\t     [ C. Do revenge study in hopes of redeeming yourself in the next exam                     ]\n";
	cout << "\t\t     [ D. Vent about it to your friends, emphasizing how it is the exam's fault and not yours. ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 3\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			wind++;
			break;
		} 
		case 'B': {
			earth++;
			break;
		} 
		case 'C': {
			water++;
			break;
		}
		case 'D': {
			fire++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 4]\n";
	cout << endl;
	cout << "\t\t                   If you could have a superpower, which one would you choose?\n";
	cout << endl;
	cout << "\t\t                                    [ A. Speed                  ]\n";
	cout << "\t\t                                    [ B. Invisibility           ]\n";
	cout << "\t\t                                    [ C. Teleportation          ]\n";
	cout << "\t\t                                    [ D. Telepathy/Mind Reading ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 4\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			fire++;
			break;
		} 
		case 'B': {
			wind++;
			break;
		} 
		case 'C': {
			earth++;
			break;
		}
		case 'D': {
			water++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 5]\n";
	cout << endl;
	cout << "\t\t         Your professor just canceled your class. What would you do after the announcement?\n";
	cout << endl;
	cout << "\t\t                               [ A. Go to the mall and shop.       ]\n";
	cout << "\t\t                               [ B. Eat at a fast-food restaurant. ]\n";
	cout << "\t\t                               [ C. Go home immediately and sleep. ]\n";
	cout << "\t\t                               [ D. Wander around the campus.      ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 5\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			fire++;
			break;
		} 
		case 'B': {
			water++;
			break;
		} 
		case 'C': {
			earth++;
			break;
		}
		case 'D': {
			wind++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 6]\n";
	cout << endl;
	cout << "\t\t                 Someone just confessed their feelings for you! How would you react?\n";
	cout << endl;
	cout << "\t\t                  [ A. Let's go out. Now!                                        ]\n";
	cout << "\t\t                  [ B. I don't think I can reciprocate the same feelings. Sorry. ]\n";
	cout << "\t\t                  [ C. Oh, wow. I didn't think anyone would like me... Anyway... ]\n";
	cout << "\t\t                  [ D. I'm really flattered. Thank you.                          ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 6\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			fire++;
			break;
		} 
		case 'B': {
			earth++;
			break;
		} 
		case 'C': {
			wind++;
			break;
		}
		case 'D': {
			water++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 7]\n";
	cout << endl;
	cout << "\t\t     If you were given a free plane ticket with accommodation and could choose any destination,\n";
	cout << "\t\t                                         where would you go?\n";
	cout << endl;
	cout << "\t\t                [ A. Japan - I'd love to experience their polite culture in person! ]\n";
	cout << "\t\t                [ B. Palawan - I need to reconnect with the islands and the sea.    ]\n";
	cout << "\t\t                [ C. New York - I fantasize about living in the city!               ]\n";
	cout << "\t\t                [ D. The North Pole - It would be an interesting place to explore.  ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 7\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			earth++;
			break;
		} 
		case 'B': {
			water++;
			break;
		} 
		case 'C': {
			fire++;
			break;
		}
		case 'D': {
			wind++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 8]\n";
	cout << endl;
	cout << "\t\t                      Which of these common fears do you find most unsettling?\n";
	cout << endl;
	cout << "\t\t                               [ A. Clowns (Coulrophobia)            ]\n";
	cout << "\t\t                               [ B. Spiders (Arachnophobia)          ]\n";
	cout << "\t\t                               [ C. Holes (Trypophobia)              ]\n";
	cout << "\t\t                               [ D. Enclosed Spaces (Claustrophobia) ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 8\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			wind++;
			break;
		} 
		case 'B': {
			fire++;
			break;
		} 
		case 'C': {
			water++;
			break;
		}
		case 'D': {
			earth++;
			break;
		}	

	}
	
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 9]\n";
	cout << endl;
	cout << "\t\t                                How do you like to drink your coffee?\n";
	cout << endl;
	cout << "\t\t                                   [ A. Iced with a mix of milk ]\n";
	cout << "\t\t                                   [ B. Hot and strong          ]\n";
	cout << "\t\t                                   [ C. Warm and sweet          ]\n";
	cout << "\t\t                                   [ D. I don't drink coffee    ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 9\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			wind++;
			break;
		} 
		case 'B': {
			fire++;
			break;
		} 
		case 'C': {
			water++;
			break;
		}
		case 'D': {
			earth++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 10]\n";
	cout << endl;
	cout << "\t\t   You've been assigned to collect contributions from each person in your group. What will you do\n";
	cout << "\t\t                                           with the funds?\n";
	cout << endl;
	cout << "\t\t                      [ A. Keep it somewhere safe, away from others.         ]\n";
	cout << "\t\t                      [ B. Borrow some and promise to pay it back in a week. ]\n";
	cout << "\t\t                      [ C. Lend some of it to others for passive income.     ]\n";
	cout << "\t\t                      [ D. Use it to buy the necessary items for the group.  ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 10\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			earth++;
			break;
		} 
		case 'B': {
			fire++;
			break;
		} 
		case 'C': {
			wind++;
			break;
		}
		case 'D': {
			water++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 11]\n";
	cout << endl;
	cout << "\t\t                   What would you do if someone messaged you while you were studying?\n";
	cout << endl;
	cout << "\t\t                   [ A. Ignore the message and stay focused.                        ]\n";
	cout << "\t\t                   [ B. Reply immediately so they don't think you're ignoring them. ]\n";
	cout << "\t\t                   [ C. Glance at it but don't reply.                               ]\n";
	cout << "\t\t                   [ D. Reply and completely forget about studying.                 ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 11\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			earth++;
			break;
		} 
		case 'B': {
			water++;
			break;
		} 
		case 'C': {
			wind++;
			break;
		}
		case 'D': {
			fire++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 12]\n";
	cout << endl;
	cout << "\t\t                                Which of these flavors do you prefer?\n";
	cout << endl;
	cout << "\t\t                                          [ A. Chocolate  ]\n";
	cout << "\t\t                                          [ B. Vanilla    ]\n";
	cout << "\t\t                                          [ C. Strawberry ]\n";
	cout << "\t\t                                          [ D. Mint       ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 12\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			fire++;
			break;
		} 
		case 'B': {
			earth++;
			break;
		} 
		case 'C': {
			water++;
			break;
		}
		case 'D': {
			wind++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 13]\n";
	cout << endl;
	cout << "\t\t                               What type of music do you enjoy the most?\n";
	cout << endl;
	cout << "\t\t                                  [ A. Deep and thought-provoking ]\n";
	cout << "\t\t                                  [ B. Upbeat and energetic       ]\n";
	cout << "\t\t                                  [ C. Relaxing and smooth        ]\n";
	cout << "\t\t                                  [ D. Classic and timeless       ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 13\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			wind++;
			break;
		} 
		case 'B': {
			fire++;
			break;
		} 
		case 'C': {
			water++;
			break;
		}
		case 'D': {
			earth++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 14]\n";
	cout << endl;
	cout << "\t\t        You overheard a friend badmouthing you to others. How would you handle the situation?\n";
	cout << endl;
	cout << "\t\t                            [ A. Run up to them and pull their hair out ]\n";
	cout << "\t\t                            [ B. Confront them immediately              ]\n";
	cout << "\t\t                            [ C. Silently cut ties with them            ]\n";
	cout << "\t\t                            [ D. Cry and curse them under your breath   ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 14\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			fire++;
			break;
		} 
		case 'B': {
			earth++;
			break;
		} 
		case 'C': {
			wind++;
			break;
		}
		case 'D': {
			water++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 15]\n";
	cout << endl;
	cout << "\t\t                             What is your usual role in a group setting?\n";
	cout << endl;
	cout << "\t\t                           [ A. Peacemaker - helping everyone get along ]\n";
	cout << "\t\t                           [ B. Leader - taking charge                  ]\n";
	cout << "\t\t                           [ C. Supporter - helping others              ]\n";
	cout << "\t\t                           [ D. Thinker - focusing on problem-solving   ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 15\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			water++;
			break;
		} 
		case 'B': {
			fire++;
			break;
		} 
		case 'C': {
			wind++;
			break;
		}
		case 'D': {
			earth++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |                     o   _                  ______                 _                        |  *" << endl;
	cout << "\t\t*  |  o       _|_           |                                           |     o    _|_          |  *" << endl;
	cout << "\t\t*  |           |            |           ~ your result is here!          |       o   |           |  *" << endl;
	cout << "\t\t*  |        o    _|_        |_                  ______                 _|             _|_       |  *" << endl;
	cout << "\t\t*  |              |                                                        o           |        |  *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	
    if (fire >= water && fire >= earth&& fire >= wind) {
	    cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |                                                                                            |  *" << endl;
		cout << "\t\t*  |                                          YOU ARE MOST LIKELY SIMILAR TO                    |  *" << endl;
		cout << "\t\t*  |         _  o                                                                               |  *" << endl;
		cout << "\t\t*  |        |_|                                         << FIRE >>                              |  *" << endl;
		cout << "\t\t*  |       _          _     _________________________________________________________________   |  *" << endl;
		cout << "\t\t*  |  o  _| |__   _  |_|   |                                                                 |  |  *" << endl;
		cout << "\t\t*  |   _|  _   |_| |_      |    You're bold, fearless, and bring the heat wherever you go!   |  |  *" << endl;
		cout << "\t\t*  |  |_  | |        |     |    Adventure? Count you in! You're the one everyone turns to    |  |  *" << endl;
		cout << "\t\t*  |    |_     _    |      |    for excitement, and you dive headfirst into life with no     |  |  *" << endl;
		cout << "\t\t*  |      |_  |_| _|       |        regrets. Impulsive? Maybe. Memorable? Definitely.        |  |  *" << endl;
		cout << "\t\t*  |        |_____|        |                 You're here to ignite the world!                |  |  *" << endl;
		cout << "\t\t*  |                       |_________________________________________________________________|  |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << endl;
    } else if (water >= fire && water >= earth && water >= wind) {
        cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |                                                                                            |  *" << endl;
		cout << "\t\t*  |            |                             YOU ARE MOST LIKELY SIMILAR TO                    |  *" << endl;
		cout << "\t\t*  |           | |                                                                              |  *" << endl;
		cout << "\t\t*  |          |   |                                    << WATER >>                              |  *" << endl;
		cout << "\t\t*  |         |     |        _________________________________________________________________   |  *" << endl;
		cout << "\t\t*  |       |        |      |                                                                 |  |  *" << endl;
		cout << "\t\t*  |      |          |     |     You're the calm in the storm and the heart of the group.    |  |  *" << endl;
		cout << "\t\t*  |     |   |        |    |    Deeply empathetic, you get people on a level that others     |  |  *" << endl;
		cout << "\t\t*  |    |   |          |   |     can't. You're supportive, soulful, and your presence is     |  |  *" << endl;
		cout << "\t\t*  |     |   |        |    |      like a cozy blanket. You bring peace and connection,       |  |  *" << endl;
		cout << "\t\t*  |      |   _      |     |                 making everything feel like home.               |  |  *" << endl;
		cout << "\t\t*  |       |________|      |_________________________________________________________________|  |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << endl;
    } else if (earth >= fire && earth >= water && earth >= wind) {
        cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |                                                                                            |  *" << endl;
		cout << "\t\t*  |                                          YOU ARE MOST LIKELY SIMILAR TO                    |  *" << endl;
		cout << "\t\t*  |           ___                                                                              |  *" << endl;
		cout << "\t\t*  |       _        _                                  << EARTH >>                              |  *" << endl;
		cout << "\t\t*  |     _  |        _      _________________________________________________________________   |  *" << endl;
		cout << "\t\t*  |    |    |     |  |    |                                                                 |  |  *" << endl;
		cout << "\t\t*  |  |      |      |   |  |    Reliable and grounded, you're the one everyone can count     |  |  *" << endl;
		cout << "\t\t*  |  |     |        |_ |  |       on. You're practical, steady, and keep things real.       |  |  *" << endl;
		cout << "\t\t*  |  |   |       _     |  |    Drama? Not for you. You bring stability, problem-solving     |  |  *" << endl;
		cout << "\t\t*  |   |_|       |_|  _|   |      skills, and a sense of calm that holds everything          |  |  *" << endl;
		cout << "\t\t*  |      _ -__     _      |                   together. Solid as a rock!                    |  |  *" << endl;
		cout << "\t\t*  |        ___|__         |_________________________________________________________________|  |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << endl;
    } else {
        cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |                                                                                            |  *" << endl;
		cout << "\t\t*  |                                          YOU ARE MOST LIKELY SIMILAR TO                    |  *" << endl;
		cout << "\t\t*  |              __                                                                            |  *" << endl;
		cout << "\t\t*  |     __         |_                                  << WIND >>                              |  *" << endl;
		cout << "\t\t*  |   _|  |_         |     _________________________________________________________________   |  *" << endl;
		cout << "\t\t*  |  |      |_     _|     |                                                                 |  |  *" << endl;
		cout << "\t\t*  |   _       |___|       |    You're the free spirit, full of curiosity and fresh ideas!   |  |  *" << endl;
		cout << "\t\t*  |    |_     ___         |    You bring a fun, unexpected vibe, and you're always up for   |  |  *" << endl;
		cout << "\t\t*  |      |___|   |___     |    exploring new possibilities. Routines aren't your thing -    |  |  *" << endl;
		cout << "\t\t*  |   _         _    |    |     you're all about discovery and keeping things exciting.     |  |  *" << endl;
		cout << "\t\t*  |    |_    __|      |   |                Go with the flow? That's your style!             |  |  *" << endl;
		cout << "\t\t*  |      |__|      |__|   |_________________________________________________________________|  |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << endl;
    }
}

void fourSeasons() {
	system("cls");
	
	int summer = 0, spring = 0, autumn = 0, winter = 0;
	char answer;
	bool validInput;
	
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |                     o   _                  ______                 _                        |  *" << endl;
	cout << "\t\t*  |  o       _|_           |                                           |     o    _|_          |  *" << endl;
	cout << "\t\t*  |           |            |    WHICH AMONG THE FOUR SEASONS ARE YOU?  |           |       o   |  *" << endl;
	cout << "\t\t*  |        o    _|_        |_                  ______                 _|             _|_       |  *" << endl;
	cout << "\t\t*  |              |                                                        o           |        |  *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |        DIVE INTO THIS QUIZ TO UNCOVER WHICH SEASON BEST REPRESENTS YOUR PERSONALITY!       |  *" << endl;
	cout << "\t\t*  |       WHETHER YOU'RE FULL OF ENERGY LIKE SPRING, PASSIONATE AND VIBRANT LIKE SUMMER,       |  *" << endl;
	cout << "\t\t*  | INTROSPECTIVE AND BALANCED LIKE AUTUMN, OR CALM AND REFLECTIVE LIKE WINTER, THIS QUIZ WILL |  *" << endl;
	cout << "\t\t*  | REVEAL WHICH SEASON MATCHES YOUR MOODS AND TENDENCIES. EMBRACE THE SEASON THAT DEFINES YOU!|  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t                                       L E T ' S  S T A R T  ! ! !\n";
	cout << endl;
	cout << "\t\t                                     << PRESS 'ENTER' TO CONTINUE >>\n";
	cout << "\t\t                                                     ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 1]\n";
	cout << endl;
	cout << "\t\t                           If you had a free day, how would you spend it?\n";
	cout << endl;
	cout << "\t\t                       [ A. Staying at home, relaxing, and watching movies. ]\n";
	cout << "\t\t                       [ B. Going to the beach in Batangas or La Union.     ]\n";
	cout << "\t\t                       [ C. Visiting a farm or botanical garden nearby.     ]\n";
	cout << "\t\t                       [ D. Visiting Tagaytay or Baguio for a cool retreat. ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 1\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			winter++;
			break;
		} 
		case 'B': {
			summer++;
			break;
		} 
		case 'C': {
			spring++;
			break;
		}
		case 'D': {
			autumn++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 2]\n";
	cout << endl;
	cout << "\t\t                                      What's your ideal meal?\n";
	cout << endl;
	cout << "\t\t                        [ A. Grilled seafood by the beach                  ]\n";
	cout << "\t\t                        [ B. Warm arroz caldo or sopas                     ]\n";
	cout << "\t\t                        [ C. Bulalo or champorado on a rainy day           ]\n";
	cout << "\t\t                        [ D. Fresh vegetable salad with calamansi dressing ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 2\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			summer++;
			break;
		} 
		case 'B': {
			winter++;
			break;
		} 
		case 'C': {
			autumn++;
			break;
		}
		case 'D': {
			spring++;
			break;
		}	

	}
	
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 3]\n";
	cout << endl;
	cout << "\t\t                         Which province or place would you like to explore?\n";
	cout << endl;
	cout << "\t\t                            [ A. The cozy, pine-filled hills of Baguio ]\n";
	cout << "\t\t                            [ B. The rice terraces of Banaue           ]\n";
	cout << "\t\t                            [ C. The sandy beaches of Boracay          ]\n";
	cout << "\t\t                            [ D. The colorful flower fields of Benguet ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 3\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			winter++;
			break;
		} 
		case 'B': {
			autumn++;
			break;
		} 
		case 'C': {
			summer++;
			break;
		}
		case 'D': {
			spring++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 4]\n";
	cout << endl;
	cout << "\t\t    Your friends invite you to a festival this weekend. Which one are you most excited to attend?\n";
	cout << endl;
	cout << "\t\t                [ A. Panagbenga Festival in Baguio, with beautiful flower displays ]\n";
	cout << "\t\t                [ B. Pahiyas Festival in Quezon, full of vibrant decorations       ]\n";
	cout << "\t\t                [ C. Ati-Atihan Festival in Kalibo, a lively street parade         ]\n";
	cout << "\t\t                [ D. Kadayawan Festival in Davao, celebrating harvest and culture  ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 4\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			winter++;
			break;
		} 
		case 'B': {
			spring++;
			break;
		} 
		case 'C': {
			summer++;
			break;
		}
		case 'D': {
			autumn++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 5]\n";
	cout << endl;
	cout << "\t\t                               How do you feel about the rainy season?\n";
	cout << endl;
	cout << "\t\t                           [ A. I'd rather it stay sunny all year!      ]\n";
	cout << "\t\t                           [ B. The rain helps everything grow!         ]\n";
	cout << "\t\t                           [ C. It's the perfect excuse to stay inside. ]\n";
	cout << "\t\t                           [ D. I enjoy the coziness of the rain.       ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 5\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			summer++;
			break;
		} 
		case 'B': {
			spring++;
			break;
		} 
		case 'C': {
			winter++;
			break;
		}
		case 'D': {
			autumn++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 6]\n";
	cout << endl;
	cout << "\t\t                                    What is your go-to merienda?\n";
	cout << endl;
	cout << "\t\t                               [ A. Halo-halo to beat the heat      ]\n";
	cout << "\t\t                               [ B. Fresh fruit shake or buko juice ]\n";
	cout << "\t\t                               [ C. Hot taho on a chilly morning    ]\n";
	cout << "\t\t                               [ D. Turon or banana cue             ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 6\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			summer++;
			break;
		} 
		case 'B': {
			spring++;
			break;
		} 
		case 'C': {
			winter++;
			break;
		}
		case 'D': {
			autumn++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 7]\n";
	cout << endl;
	cout << "\t\t                              What kind of trip excites you the most?\n";
	cout << endl;
	cout << "\t\t                            [ A. A quiet cabin stay away from the city  ]\n";
	cout << "\t\t                            [ B. A snorkeling or diving adventure       ]\n";
	cout << "\t\t                            [ C. A visit to an organic farm or eco park ]\n";
	cout << "\t\t                            [ D. A nature trip to the mountains         ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 7\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			winter++;
			break;
		} 
		case 'B': {
			summer++;
			break;
		} 
		case 'C': {
			spring++;
			break;
		}
		case 'D': {
			autumn++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 8]\n";
	cout << endl;
	cout << "\t\t                      What's your favorite time to travel in the Philippines?\n";
	cout << endl;
	cout << "\t\t                      [ A. Right after the rain, when everything is green   ]\n";
	cout << "\t\t                      [ B. Just before the rainy season, for milder weather ]\n";
	cout << "\t\t                      [ C. Summer break! There's so much to do              ]\n";
	cout << "\t\t                      [ D. The holiday season for cool weather              ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 8\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			spring++;
			break;
		} 
		case 'B': {
			autumn++;
			break;
		} 
		case 'C': {
			summer++;
			break;
		}
		case 'D': {
			winter++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 9]\n";
	cout << endl;
	cout << "\t\t  Your younger cousins want you to teach them a Filipino game. Which one would you choose to share \n";
	cout << "\t\t                                             with them?\n";
	cout << endl;
	cout << "\t\t                [ A. Tumbang preso, a fun game involving an empty can and slippers     ]\n";
	cout << "\t\t                [ B. Patintero, an exciting game of dodging and tagging                ]\n";
	cout << "\t\t                [ C. Sipa, challenging them to keep the shuttlecock in the air         ]\n";
	cout << "\t\t                [ D. Sungka, a quiet and strategic game with shells and a wooden board ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 9\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			spring++;
			break;
		} 
		case 'B': {
			summer++;
			break;
		} 
		case 'C': {
			autumn++;
			break;
		}
		case 'D': {
			winter++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 10]\n";
	cout << endl;
	cout << "\t\t                            What kind of music do you enjoy the most?\n";
	cout << endl;
	cout << "\t\t                       [ A. Upbeat OPM pop that reminds you of island life ]\n";
	cout << "\t\t                       [ B. Instrumental or mellow ballads                 ]\n";
	cout << "\t\t                       [ C. Relaxing acoustic songs for chill evenings     ]\n";
	cout << "\t\t                       [ D. Folk songs that celebrate nature and life      ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 10\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			summer++;
			break;
		} 
		case 'B': {
			winter++;
			break;
		} 
		case 'C': {
			autumn++;
			break;
		}
		case 'D': {
			spring++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 11]\n";
	cout << endl;
	cout << "\t\t            If you had to pick a Filipino mythical creature, which one fascinates you most?\n";
	cout << endl;
	cout << "\t\t                               [ A. The mystical kapre under a tree ]\n";
	cout << "\t\t                               [ B. The nature-loving diwata        ]\n";
	cout << "\t\t                               [ C. The cold, mysterious tiyanak    ]\n";
	cout << "\t\t                               [ D. The beach-dwelling Sirena       ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 11\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			autumn++;
			break;
		} 
		case 'B': {
			spring++;
			break;
		} 
		case 'C': {
			winter++;
			break;
		}
		case 'D': {
			summer++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 12]\n";
	cout << endl;
	cout << "\t\t                                Which street food is a must-have?\n";
	cout << endl;
	cout << "\t\t                                 [ A. Tokneneng or fish balls ]\n";
	cout << "\t\t                                 [ B. Kwek-kwek or balut      ]\n";
	cout << "\t\t                                 [ C. Isaw or inihaw na pusit ]\n";
	cout << "\t\t                                 [ D. Fresh buko or taho      ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 12\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			winter++;
			break;
		} 
		case 'B': {
			autumn++;
			break;
		} 
		case 'C': {
			summer++;
			break;
		}
		case 'D': {
			spring++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 13]\n";
	cout << endl;
	cout << "\t\t                                What kind of weather do you prefer?\n";
	cout << endl;
	cout << "\t\t                              [ A. Bright and sunny                 ]\n";
	cout << "\t\t                              [ B. Cloudy, with a bit of rain       ]\n";
	cout << "\t\t                              [ C. A mix of sunshine and light rain ]\n";
	cout << "\t\t                              [ D. Cool and breezy                  ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 13\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			summer++;
			break;
		} 
		case 'B': {
			autumn++;
			break;
		} 
		case 'C': {
			spring++;
			break;
		}
		case 'D': {
			winter++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 14]\n";
	cout << endl;
	cout << "\t\t                      What's your favorite natural landscape in the Philippines?\n";
	cout << endl;
	cout << "\t\t                              [ A. The lush, green farmlands          ]\n";
	cout << "\t\t                              [ B. The coral reefs and islands        ]\n";
	cout << "\t\t                              [ C. The misty hills of the Cordilleras ]\n";
	cout << "\t\t                              [ D. The terraced mountainsides         ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 14\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			spring++;
			break;
		} 
		case 'B': {
			summer++;
			break;
		} 
		case 'C': {
			winter++;
			break;
		}
		case 'D': {
			autumn++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 15]\n";
	cout << endl;
	cout << "\t\t                             Which Filipino value do you feel closest to?\n";
	cout << endl;
	cout << "\t\t                               [ A. Paggalang (respect)             ]\n";
	cout << "\t\t                               [ B. Bayanihan (community spirit)    ]\n";
	cout << "\t\t                               [ C. Pagpapakatao (humanity)         ]\n";
	cout << "\t\t                               [ D. Makakalikasan (love for nature) ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 15\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			autumn++;
			break;
		} 
		case 'B': {
			summer++;
			break;
		} 
		case 'C': {
			winter++;
			break;
		}
		case 'D': {
			spring++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |                     o   _                  ______                 _                        |  *" << endl;
	cout << "\t\t*  |  o       _|_           |                                           |     o    _|_          |  *" << endl;
	cout << "\t\t*  |           |            |           ~ your result is here!          |       o   |           |  *" << endl;
	cout << "\t\t*  |        o    _|_        |_                  ______                 _|             _|_       |  *" << endl;
	cout << "\t\t*  |              |                                                        o           |        |  *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	
    if (summer >= spring && summer>= winter && summer >= autumn) {
	    cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |                                                                                            |  *" << endl;
		cout << "\t\t*  |                                          YOU ARE MOST LIKELY SIMILAR TO                    |  *" << endl;
		cout << "\t\t*  |                                                                                            |  *" << endl;
		cout << "\t\t*  |           |                                      << SUMMER >>                              |  *" << endl;
		cout << "\t\t*  |    |     _|_     |     _________________________________________________________________   |  *" << endl;
		cout << "\t\t*  |     |  |     |  |     |                                                                 |  |  *" << endl;
		cout << "\t\t*  |       |       |       |    You're full of energy, optimism, and an adventurous spirit   |  |  *" << endl;
		cout << "\t\t*  |  --- |         | ---  |         that lights up every room. You thrive on fun, love      |  |  *" << endl;
		cout << "\t\t*  |       |       |       |       vibrant gatherings, and bring a contagious enthusiasm     |  |  *" << endl;
		cout << "\t\t*  |     |  | ___ |  |     |          to everything you do. Life's a beach, and you're       |  |  *" << endl;
		cout << "\t\t*  |    |      |      |    |                       soaking it all in!                        |  |  *" << endl;
		cout << "\t\t*  |           |           |_________________________________________________________________|  |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << endl;
    } else if (spring >= summer && spring >= autumn && spring >= winter) {
        cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |                                                                                            |  *" << endl;
		cout << "\t\t*  |            |                             YOU ARE MOST LIKELY SIMILAR TO                    |  *" << endl;
		cout << "\t\t*  |           |||                                                                              |  *" << endl;
		cout << "\t\t*  |          | | |                                   << SPRING >>                              |  *" << endl;
		cout << "\t\t*  |         |  | _|        _________________________________________________________________   |  *" << endl;
		cout << "\t\t*  |       |_   |_  |      |                                                                 |  |  *" << endl;
		cout << "\t\t*  |      |  _  |   _|     |        You're all about growth, creativity, and spreading       |  |  *" << endl;
		cout << "\t\t*  |     | _   _|  _  |    |       positivity wherever you go. You have a fresh, hopeful     |  |  *" << endl;
		cout << "\t\t*  |    |    _  | _    |   |     outlook on life and are often the one encouraging others    |  |  *" << endl;
		cout << "\t\t*  |     |    _ |_    |    |      to bloom into their best selves. Your energy feels like    |  |  *" << endl;
		cout << "\t\t*  |      |    _|    |     |                 a sunny morning - full of promise!              |  |  *" << endl;
		cout << "\t\t*  |       |____|___|      |_________________________________________________________________|  |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << endl;
    } else if (autumn >= summer && autumn >= spring && autumn >= winter) {
        cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |                                                                                            |  *" << endl;
		cout << "\t\t*  |                                          YOU ARE MOST LIKELY SIMILAR TO                    |  *" << endl;
		cout << "\t\t*  |                                                                                            |  *" << endl;
		cout << "\t\t*  |           |                                      << AUTUMN >>                              |  *" << endl;
		cout << "\t\t*  |       |__| |__|        _________________________________________________________________   |  *" << endl;
		cout << "\t\t*  |       |   |   |       |                                                                 |  |  *" << endl;
		cout << "\t\t*  |      _|   |   |_      |     You're reflective, grounded, and love finding beauty in     |  |  *" << endl;
		cout << "\t\t*  |   _|__ |  |  | __|_   |      simplicity. You're the kind of person who appreciates      |  |  *" << endl;
		cout << "\t\t*  | _|        |        |_ |            meaningful connections and enjoys the cozy,          |  |  *" << endl;
		cout << "\t\t*  |  |__      |      __|  |            thoughtful side of life. You bring balance           |  |  *" << endl;
		cout << "\t\t*  |    _|_____|_____|_    |                  and wisdom that others admire!                 |  |  *" << endl;
		cout << "\t\t*  |           |           |_________________________________________________________________|  |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << endl;
    } else {
        cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |                                                                                            |  *" << endl;
		cout << "\t\t*  |  _|_                                     YOU ARE MOST LIKELY SIMILAR TO                    |  *" << endl;
		cout << "\t\t*  |   |                                                                                        |  *" << endl;
		cout << "\t\t*  |      - -  |  - -                                 << WINTER >>                              |  *" << endl;
		cout << "\t\t*  |       -  _|_  -        _________________________________________________________________   |  *" << endl;
		cout << "\t\t*  |      - -  |  - -      |                                                                 |  |  *" << endl;
		cout << "\t\t*  |         - | -         |       You're calm, introspective, and thrive in moments of      |  |  *" << endl;
		cout << "\t\t*  |  -|---|--|_|--|---|-  |     stillness. While others rush, you bring focus and quiet     |  |  *" << endl;
		cout << "\t\t*  |         - | -         |        strength to the table. You're the cool, collected        |  |  *" << endl;
		cout << "\t\t*  |      - - _|_ - -  _|_ |         type who values deep bonds and prefers quality          |  |  *" << endl;
		cout << "\t\t*  |     - -   |   - -  |  |                 over quantitty in all things.                   |  |  *" << endl;
		cout << "\t\t*  |      -    |    -      |_________________________________________________________________|  |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << endl;
		cout << endl;
    }
}

void veggieVenture() {
	int singkamas = 0, talong = 0, sigarilyas = 0, mani = 0, sitaw = 0, bataw = 0, patani = 0;
	int kundol = 0, patola = 0, upo = 0, kalabasa = 0, labanos = 0, mustasa = 0, sibuyas = 0;
	int kamatis = 0, bawang = 0, luya = 0, linga = 0;
	char answer;
	char name[7];
	bool validInput;
	
	system("cls");
	
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |                     o   _                  ______                 _                        |  *" << endl;
	cout << "\t\t*  |  o       _|_           |                                           |     o    _|_          |  *" << endl;
	cout << "\t\t*  |           |            |           WHAT VEGETABLE ARE YOU          |           |       o   |  *" << endl;
	cout << "\t\t*  |        o    _|_        |_                  ______                 _|             _|_       |  *" << endl;
	cout << "\t\t*  |              |                                                        o           |        |  *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |     DISCOVER WHICH VEGETABLE FROM THE ICONIC BAHAY KUBO FOLK SONG BEST REPRESENTS YOUR     |  *" << endl;
	cout << "\t\t*  |     PERSONALITY! ARE YOU AS VIBRANT AND ENERGETIC AS KAMATIS (TOMATO), AS GROUNDED AND     |  *" << endl;
	cout << "\t\t*  | RELIABLE AS LINGA (SESAME), OR AS REFRESHING AS LABANOS (RADISH)? ANSWER THE QUESTIONS TO  |  *" << endl;
	cout << "\t\t*  |    FIND OUT WHICH VEGETABLE MIRRORS YOUR CHARACTER TRAITS AND LEARN MORE ABOUT HOW THEY    |  *" << endl;
	cout << "\t\t*  |                                REFLECT YOUR UNIQUE QUALITIES!                              |  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t                                       L E T ' S  S T A R T  ! ! !\n";
	cout << endl;
	cout << "\t\t                                     << PRESS 'ENTER' TO CONTINUE >>\n";
	cout << "\t\t                                                     ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 1]\n";
	cout << endl;
	cout << "\t\t     You and your gulay friends want to hangout in Barangay Gulayan. What snacks are you bringing?\n";
	cout << endl;
	cout << "\t\t                                    [ A. Chichirya(Picka foods) ]\n";
	cout << "\t\t                                    [ B. Afritada               ]\n";
	cout << "\t\t                                    [ C. Fruit Salad            ]\n";
	cout << "\t\t                                    [ D. Bread and Spread       ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 1\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			mani++;
			sitaw++;
			bawang++;
			break;
		} 
		case 'B': {
			talong++;
			kalabasa++;
			patani++;
			kundol++;
			break;
		} 
		case 'C': {
			sigarilyas++;
			kamatis++;
			linga++;
			patola++;
			break;
		}
		case 'D': {
			singkamas++;
			bataw++;
			upo++;
			labanos++;
			mustasa++;
			sibuyas++;
			luya++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 2]\n";
	cout << endl;
	cout << "\t\t                                   Where are you guys going to go?\n";
	cout << endl;
	cout << "\t\t                                    [ A. The park                ]\n";
	cout << "\t\t                                    [ B. The HappyMarket store   ]\n";
	cout << "\t\t                                    [ C. Your cousin's apartment ]\n";
	cout << "\t\t                                    [ D. A bookstore             ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 2\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			singkamas++;
			kamatis++;
			patola++;
			labanos++;
			break;
		} 
		case 'B': {
			talong++;
			sibuyas++;
			sitaw++;
			kalabasa++;
			break;
		} 
		case 'C': {
			sigarilyas++;
			bawang++;
			kundol++;
			linga++;
			break;
		}
		case 'D': {
			mani++;
			mustasa++;
			bataw++;
			luya++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 3]\n";
	cout << endl;
	cout << "\t\t                                      What activity would you do?\n";
	cout << endl;
	cout << "\t\t                             [ A. Take lots of fun photos and selfies         ]\n";
	cout << "\t\t                             [ B. Have a storytelling or joke-telling session ]\n";
	cout << "\t\t                             [ C. Enjoy a delicious shared snack time         ]\n";
	cout << "\t\t                             [ D. Play a trivia or guessing game              ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 3\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			talong++;
			kamatis++;
			kamatis++;
			sibuyas++;
			labanos++;
			break;
		} 
		case 'B': {
			sigarilyas++;
			mani++;
			bataw++;
			patani++;
			mustasa++;
			break;
		} 
		case 'C': {
			kundol++;
			patola++;
			upo++;
			kalabasa++;
			bawang++;
			break;
		}
		case 'D': {
			luya++;
			linga++;
			sitaw++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 4]\n";
	cout << endl;
	cout << "\t\t      You and your gulay friends are near Keso Street, where you spot a vendor selling colorful\n";
	cout << "\t\t                                      treats. What will you do?\n";
	cout << endl;
	cout << "\t\t                      [ A. Buy some snacks and try them out                    ]\n";
	cout << "\t\t                      [ B. Chat with the vendor to learn more about the treats ]\n";
	cout << "\t\t                      [ C. Take pictures of the treats but don't buy any       ]\n";
	cout << "\t\t                      [ D. Ignore the vendor and continue your journey         ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 4\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			singkamas++;
			mani++;
			kalabasa++;
			kamatis++;
			linga++;
			break;
		} 
		case 'B': {
			talong++;
			kundol++;
			mustasa++;
			bawang++;
			luya++;
			break;
		} 
		case 'C': {
			sigarilyas++;
			sitaw++;
			upo++;
			labanos++;
			break;
		}
		case 'D': {
			bataw++;
			patani++;
			patola++;
			sibuyas++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 5]\n";
	cout << endl;
	cout << "\t\t     While strolling down Keso Street, you see an intriguing figure selling mysterious trinkets. \n";
	cout << "\t\t                                     What do you decide to do?\n";
	cout << endl;
	cout << "\t\t                      [ A. Inspect the trinkets and ask about their origins ]\n";
	cout << "\t\t                      [ B. Buy a shiny pendant as a souvenir                ]\n";
	cout << "\t\t                      [ C. Walk past, uninterested                          ]\n";
	cout << "\t\t                      [ D. Start a conversation about the neighborhood      ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 5\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			singkamas++;
			kalabasa++;
			kamatis++;
			linga++;
			bawang++;
			break;
		} 
		case 'B': {
			talong++;
			sigarilyas++;
			upo++;
			labanos++;
			mustasa++;
			break;
		} 
		case 'C': {
			mani++;
			sitaw++;
			patani++;
			patola++;
			sibuyas++;
			break;
		}
		case 'D': {
			kundol++;
			bataw++;
			luya++;
			patola++;
			kamatis++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 6]\n";
	cout << endl;
	cout << "\t\t     A sudden breeze rustles your bayong. A strange, glowing leaf lands inside. What do you do? \n";
	cout << endl;
	cout << "\t\t                      [ A. Keep the leaf; it might be useful later           ]\n";
	cout << "\t\t                      [ B. Examine it closely for clues                      ]\n";
	cout << "\t\t                      [ C. Toss it away, thinking it's a distraction         ]\n";
	cout << "\t\t                      [ D. Show it to your gulay friends and decide together ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 6\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			singkamas++;
			talong++;
			sigarilyas++;
			mani++;
			sitaw++;
			break;
		} 
		case 'B': {
			kalabasa++;
			bataw++;
			patani++;
			patola++;
			sibuyas++;
			break;
		} 
		case 'C': {
			upo++;
			labanos++;
			mustasa++;
			bawang++;
			kamatis++;
			break;
		}
		case 'D': {
			kundol++;
			patola++;
			linga++;
			luya++;
			kamatis++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 7]\n";
	cout << endl;
	cout << "\t\t In the distance, you spot the enchanting Kabute Land. It's said to be magical. How do you proceed? \n";
	cout << endl;
	cout << "\t\t                      [ A. Enter cautiously, keeping an eye out for surprises ]\n";
	cout << "\t\t                      [ B. Charge in, ready for whatever awaits               ]\n";
	cout << "\t\t                      [ C. Settle outside and enjoy the view                  ]\n";
	cout << "\t\t                      [ D. Convince everyone to explore as a group            ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 7\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			singkamas++;
			talong++;
			sigarilyas++;
			mani++;
			sitaw++;
			break;
		} 
		case 'B': {
			kalabasa++;
			kamatis++;
			bawang++;
			linga++;
			luya++;
			break;
		} 
		case 'C': {
			bataw++;
			upo++;
			labanos++;
			mustasa++;
			sibuyas++;
			break;
		}
		case 'D': {
			kundol++;
			patola++;
			patani++;
			kamatis++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 8]\n";
	cout << endl;
	cout << "\t\t       While wandering through Kabute Land, a kind mushroom offers guidance for your journey.\n";
	cout << "\t\t                                          What do you ask?\n";
	cout << endl;
	cout << "\t\t                      [ A. Directions to find something special             ]\n";
	cout << "\t\t                      [ B. Information about the glowing leaf               ]\n";
	cout << "\t\t                      [ C. A shortcut back to Barangay Gulayan              ]\n";
	cout << "\t\t                      [ D. Nothing, as you decide to rely on your instincts ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 8\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			singkamas++;
			talong++;
			sigarilyas++;
			mani++;
			sitaw++;
			break;
		} 
		case 'B': {
			kalabasa++;
			upo++;
			labanos++;
			mustasa++;
			bawang++;
			break;
		} 
		case 'C': {
			bataw++;
			patani++;
			patola++;
			kamatis++;
			sibuyas++;
			break;
		}
		case 'D': {
			kundol++;
			patola++;
			luya++;
			linga++;
			kamatis++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 9]\n";
	cout << endl;
	cout << "\t\t                  The path leads to a fork in the road: one way is well-trodden,\n";
	cout << "\t\t                    the other overgrown with wildflowers. Which do you choose?\n";
	cout << endl;
	cout << "\t\t                    [ A. The well-trodden path - it feels safer             ]\n";
	cout << "\t\t                    [ B. The overgrown path - it seems adventurous          ]\n";
	cout << "\t\t                    [ C. Stay put and evaluate both options                 ]\n";
	cout << "\t\t                    [ D. Follow the majority decision of your gulay friends ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 9\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			singkamas++;
			talong++;
			sigarilyas++;
			mani++;
			sitaw++;
			break;
		} 
		case 'B': {
			kalabasa++;
			kamatis++;
			bawang++;
			linga++;
			luya++;
			break;
		} 
		case 'C': {
			bataw++;
			upo++;
			labanos++;
			mustasa++;
			sibuyas++;
			break;
		}
		case 'D': {
			kundol++;
			patola++;
			patani++;
			kamatis++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 10]\n";
	cout << endl;
	cout << "\t\t                       As the day winds down, the group is tired and hungry. \n";
	cout << "\t\t                                 What do you all decide to do next?\n";
	cout << endl;
	cout << "\t\t                                [ A. Share snacks from your bayong ]\n";
	cout << "\t\t                                [ B. Hunt for a nearby restaurant  ]\n";
	cout << "\t\t                                [ C. Look for a cozy resting spot  ]\n";
	cout << "\t\t                                [ D. Head back to Barangay Gulayan ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 10\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			singkamas++;
			talong++;
			sigarilyas++;
			mani++;
			sitaw++;
			break;
		} 
		case 'B': {
			kalabasa++;
			kamatis++;
			bawang++;
			linga++;
			luya++;
			break;
		} 
		case 'C': {
			bataw++;
			upo++;
			labanos++;
			mustasa++;
			sibuyas++;
			break;
		}
		case 'D': {
			kundol++;
			patola++;
			patani++;
			kamatis++;
			break;
		}	

	}
	
	system ("cls");
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 11]\n";
	cout << endl;
	cout << "\t\t             Finally, it's time to head home. How do you reflect on the day's adventure? \n";
	cout << endl;
	cout << "\t\t                       [ A. Share highlights and laugh together             ]\n";
	cout << "\t\t                       [ B. Discuss lessons learned from the journey        ]\n";
	cout << "\t\t                       [ C. Make plans for the next hangout                 ]\n";
	cout << "\t\t                       [ D. Quietly appreciate the company and the memories ]\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	
	validInput = false;
	while (!validInput) {
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 11\n";
	cout << "\t\t                                          (A, B, C, OR D)\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	cin >> answer;
	cout << endl;
	
	answer = toupper(answer);
	
	if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            validInput = true;  
        } else {
            cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
            cout << endl;
											
        }
	}
	
	switch (answer) {
		case 'A': {
			singkamas++;
			talong++;
			sigarilyas++;
			mani++;
			sitaw++;
			break;
		} 
		case 'B': {
			kalabasa++;
			kamatis++;
			bawang++;
			linga++;
			luya++;
			break;
		} 
		case 'C': {
			bataw++;
			upo++;
			labanos++;
			mustasa++;
			sibuyas++;
			break;
		}
		case 'D': {
			kundol++;
			patola++;
			patani++;
			kamatis++;
			break;
		}	

	}
	
	system("cls");
	do {	
        cout << endl;
        cout << "\t\t                        NOW, PLEASE ENTER YOUR NAME (UP TO 6 LETTERS ONLY)\n";
        cout << "\t\t                                               >> ";
        cin >> name;

        for (int i = 0; i < strlen(name); i++) {
            name[i] = toupper(name[i]);
        }

        if (strlen(name) > 6) {
            cout << "\t\t====================================================================================================" << endl;
            cout << "\t\t|                     INPUT EXCEEDS THE CHARACTER LIMIT. PLEASE TRY AGAIN.                         |" << endl;
            cout << "\t\t====================================================================================================" << endl;
        }
    } while (strlen(name) > 6);


	
	system ("cls");
	cout << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |                     o   _                  ______                 _                        |  *" << endl;
	cout << "\t\t*  |  o       _|_           |                                           |     o    _|_          |  *" << endl;
	cout << "\t\t*  |           |            |           ~ your result is here!          |       o   |           |  *" << endl;
	cout << "\t\t*  |        o    _|_        |_                  ______                 _|             _|_       |  *" << endl;
	cout << "\t\t*  |              |                                                        o           |        |  *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	
	if (singkamas >= talong && singkamas >= sigarilyas && singkamas >= mani && 
	    singkamas >= sitaw && singkamas >= bataw && singkamas >= patani &&
	    singkamas >= kundol && singkamas >= patola && singkamas >= upo &&
	    singkamas >= kalabasa && singkamas >= labanos && singkamas >= mustasa &&
	    singkamas >= sibuyas && singkamas >= kamatis && singkamas >= bawang &&
	    singkamas >= luya && singkamas >= linga) {
	    	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                           << SINGKAMAS >>                                        *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |  You're practical, refreshing, and calm. You prefer to approach life with patience and | |  *" << endl;
		cout << "\t\t*  | |  clarity, always weighing your options before making a decision. you enjoy simplicity  | |  *" << endl;
		cout << "\t\t*  | |                but can surpirse others with your versatility when needed.              | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + KAMATIS                 | |                + LABANOS                  | |  *" << endl;
		cout << "\t\t*  |  |               + KALABASA                | |                + BAWANG                   | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	
	} else if (talong >= singkamas && talong >= sigarilyas && talong >= mani && 
	           talong >= sitaw && talong >= bataw && talong >= patani &&
	           talong >= kundol && talong >= patola && talong >= upo &&
	           talong >= kalabasa && talong >= labanos && talong >= mustasa &&
	           talong >= sibuyas && talong >= kamatis && talong >= bawang &&
	           talong >= luya && talong >= linga) {
	           	
		system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                             << TALONG >>                                         *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |    You're laid-back, steady, and adaptable, handling challenges with ease. Life might  | |  *" << endl;
		cout << "\t\t*  | |   throw a curveball your way, but you always manage to stay cool and composed. You're  | |  *" << endl;
		cout << "\t\t*  | |                        the friend who's reliable but never boring.                     | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |            + SIGARILYAS                 | |                + MUSTASA                  | |  *" << endl;
		cout << "\t\t*  |  |            + UPO                        | |                + LABANOS                  | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (sigarilyas >= singkamas && sigarilyas >= talong && sigarilyas >= mani && 
	           sigarilyas >= sitaw && sigarilyas >= bataw && sigarilyas >= patani &&
	           sigarilyas >= kundol && sigarilyas >= patola && sigarilyas >= upo &&
	           sigarilyas >= kalabasa && sigarilyas >= labanos && sigarilyas >= mustasa &&
	           sigarilyas >= sibuyas && sigarilyas >= kamatis && sigarilyas >= bawang &&
	           sigarilyas >= luya && sigarilyas >= linga) {
	           	
		system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                           << SIGARILYAS >>                                       *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |  You're energetic, versatile, and always up for an adventure. People gravitate toward  | |  *" << endl;
		cout << "\t\t*  | |       your zest for life and your ability to find excitement in even the smallest      | |  *" << endl;
		cout << "\t\t*  | |                                          moments.                                      | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + TALONG                  | |                + LABANOS                  | |  *" << endl;
		cout << "\t\t*  |  |               + PATOLA                  | |                + SIBUYAS                  | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (mani >= singkamas && mani >= talong && mani >= sigarilyas && 
	           mani >= sitaw && mani >= bataw && mani >= patani &&
	           mani >= kundol && mani >= patola && mani >= upo &&
	           mani >= kalabasa && mani >= labanos && mani >= mustasa &&
	           mani >= sibuyas && mani >= kamatis && mani >= bawang &&
	           mani >= luya && mani >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                                << MANI >>                                        *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |   You're reliable, supportive, and have a quiet strength. Through you may not always   | |  *" << endl;
		cout << "\t\t*  | |      be in the spotlight, your consistency and dedication make you a valued friend.    | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + SITAW                   | |                + SIBUYAS                  | |  *" << endl;
		cout << "\t\t*  |  |               + PATANI                  | |                + BAWANG                   | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (sitaw >= singkamas && sitaw >= talong && sitaw >= sigarilyas && 
	           sitaw >= mani && sitaw >= bataw && sitaw >= patani &&
	           sitaw >= kundol && sitaw >= patola && sitaw >= upo &&
	           sitaw >= kalabasa && sitaw >= labanos && sitaw >= mustasa &&
	           sitaw >= sibuyas && sitaw >= kamatis && sitaw >= bawang &&
	           sitaw >= luya && sitaw >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                             << SITAW >>                                          *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |     You're steady, practical, and dependable. While you might be understated, your     | |  *" << endl;
		cout << "\t\t*  | |              consistency and reliability make you the backbone of any team.            | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + MANI                    | |               + KALABASA                  | |  *" << endl;
		cout << "\t\t*  |  |               + PATANI                  | |               + LABANOS                   | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		    
	} else if (bataw >= singkamas && bataw >= talong && bataw >= sigarilyas && 
	           bataw >= mani && bataw >= sitaw && bataw >= patani &&
	           bataw >= kundol && bataw >= patola && bataw >= upo &&
	           bataw >= kalabasa && bataw >= labanos && bataw >= mustasa &&
	           bataw >= sibuyas && bataw >= kamatis && bataw >= bawang &&
	           bataw >= luya && bataw >= linga) {
	           	
		system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                               << BATAW >>                                        *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |  You're insightful, patient, and reliable. You take your time to undestand situations  | |  *" << endl;
		cout << "\t\t*  | |              before acting, offering a thoughtful perspective when needed.             | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + KUNDOL                  | |             + SIGARILYAS                  | |  *" << endl;
		cout << "\t\t*  |  |               + UPO                     | |             + LABANOS                     | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		    
	} else if (patani >= singkamas && patani >= talong && patani >= sigarilyas && 
	           patani >= mani && patani >= sitaw && patani >= bataw &&
	           patani >= kundol && patani >= patola && patani >= upo &&
	           patani >= kalabasa && patani >= labanos && patani >= mustasa &&
	           patani >= sibuyas && patani >= kamatis && patani >= bawang &&
	           patani >= luya && patani >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                              << PATANI >>                                        *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |     You're practical, hardworking, and determined. Your tackle life with a sense of    | |  *" << endl;
		cout << "\t\t*  | |              duty and responsibility, always striving to achieve your goals.           | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + MANI                    | |                + LABANOS                  | |  *" << endl;
		cout << "\t\t*  |  |               + SITAW                   | |                + BAWANG                   | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (kundol >= singkamas && kundol >= talong && kundol >= sigarilyas && 
	           kundol >= mani && kundol >= sitaw && kundol >= bataw &&
	           kundol >= patani && kundol >= patola && kundol >= upo &&
	           kundol >= kalabasa && kundol >= labanos && kundol >= mustasa &&
	           kundol >= sibuyas && kundol >= kamatis && kundol >= bawang &&
	           kundol >= luya && kundol >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                           << KUNDOL >>                                           *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |  You're thoughtful, imaginative, and full of surprises. You bring a sense of calm and  | |  *" << endl;
		cout << "\t\t*  | |      creativity to every situation and enjoy seeing things from different angles.      | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + PATOLA                  | |                + LABANOS                  | |  *" << endl;
		cout << "\t\t*  |  |               + KAMATIS                 | |                + BAWANG                   | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (patola >= singkamas && patola >= talong && patola >= sigarilyas && 
	           patola >= mani && patola >= sitaw && patola >= bataw &&
	           patola >= patani && patola >= kundol && patola >= upo &&
	           patola >= kalabasa && patola >= labanos && patola >= mustasa &&
	           patola >= sibuyas && patola >= kamatis && patola >= bawang &&
	           patola >= luya && patola >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                             << PATOLA >>                                         *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |   You're adventurous, curious, and always up for a challenge. You approach life with   | |  *" << endl;
		cout << "\t\t*  | |  an open mind and an eagerness to try new things, always looking for the next exciting | |  *" << endl;
		cout << "\t\t*  | |                                       adventure.                                       | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + KUNDOL                  | |                + LABANOS                  | |  *" << endl;
		cout << "\t\t*  |  |               + SIGARILYAS              | |                + BAWANG                   | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (upo >= singkamas && upo >= talong && upo >= sigarilyas && 
	           upo >= mani && upo >= sitaw && upo >= bataw &&
	           upo >= patani && upo >= kundol && upo >= patola &&
	           upo >= kalabasa && upo >= labanos && upo >= mustasa &&
	           upo >= sibuyas && upo >= kamatis && upo >= bawang &&
	           upo >= luya && upo >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                               << UPO >>                                          *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |    You're calm, collected, and grounded. Life may throw challenges your way, but you   | |  *" << endl;
		cout << "\t\t*  | |    always stay centered and blanced. You prefer steady, balanced approach to things.   | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + TALONG                  | |                + KALABASA                 | |  *" << endl;
		cout << "\t\t*  |  |               + SIGARILYAS              | |                + BAWANG                   | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (kalabasa >= singkamas && kalabasa >= talong && kalabasa >= sigarilyas && 
	           kalabasa >= mani && kalabasa >= sitaw && kalabasa >= bataw &&
	           kalabasa >= patani && kalabasa >= kundol && kalabasa >= patola &&
	           kalabasa >= upo && kalabasa >= labanos && kalabasa >= mustasa &&
	           kalabasa >= sibuyas && kalabasa >= kamatis && kalabasa >= bawang &&
	           kalabasa >= luya && kalabasa >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                            << KALABASA >>                                        *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |       You're nurturing, caring, and always ready to lend a hand. You have a warm,      | |  *" << endl;
		cout << "\t\t*  | |      generous spirit and love to take care of others. People often turn to you for     | |  *" << endl;
		cout << "\t\t*  | |                                   comfort and advice.                                  | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + KAMATIS                 | |                + LABANOS                  | |  *" << endl;
		cout << "\t\t*  |  |               + SINGKAMAS               | |                + BAWANG                   | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (labanos >= singkamas && labanos >= talong && labanos >= sigarilyas && 
	           labanos >= mani && labanos >= sitaw && labanos >= bataw &&
	           labanos >= patani && labanos >= kundol && labanos >= patola &&
	           labanos >= upo && labanos >= kalabasa && labanos >= mustasa &&
	           labanos >= sibuyas && labanos >= kamatis && labanos >= bawang &&
	           labanos >= luya && labanos >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                            << LABANOS  >>                                        *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |      You're bold, confident, and always assertive. You don't hesitate to speak your    | |  *" << endl;
		cout << "\t\t*  | |                   mind and always stand up for what you believe in.                    | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + MUSTASA                 | |                + KALABASA                 | |  *" << endl;
		cout << "\t\t*  |  |               + BAWANG                  | |                + SINGKAMAS                | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (mustasa >= singkamas && mustasa >= talong && mustasa >= sigarilyas && 
	           mustasa >= mani && mustasa >= sitaw && mustasa >= bataw &&
	           mustasa >= patani && mustasa >= kundol && mustasa >= patola &&
	           mustasa >= upo && mustasa >= kalabasa && mustasa >= labanos &&
	           mustasa >= sibuyas && mustasa >= kamatis && mustasa >= bawang &&
	           mustasa >= luya && mustasa >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                            << MUSTASA  >>                                        *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |    You're independent, adaptable, and resilient. Life's challenges don't faze you -    | |  *" << endl;
		cout << "\t\t*  | |    you face them head - on with a unique mix of determination and flexibility. You     | |  *" << endl;
		cout << "\t\t*  | |     thrive in situations where you can showcase your strength and resourcefulness.     | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + KUNDOL                  | |                + KAMATIS                  | |  *" << endl;
		cout << "\t\t*  |  |               + LUYA                    | |                + SINGKAMAS                | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (sibuyas >= singkamas && sibuyas >= talong && sibuyas >= sigarilyas && 
	           sibuyas >= mani && sibuyas >= sitaw && sibuyas >= bataw &&
	           sibuyas >= patani && sibuyas >= kundol && sibuyas >= patola &&
	           sibuyas >= upo && sibuyas >= kalabasa && sibuyas >= labanos &&
	           sibuyas >= mustasa && sibuyas >= kamatis && sibuyas >= bawang &&
	           sibuyas >= luya && sibuyas >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                            << SIBUYAS  >>                                        *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |   You're strong-willed, assertive, and unafraid to speak your tuth. You have a knack   | |  *" << endl;
		cout << "\t\t*  | |             for cutting through the layers to get to the heart of the matter.          | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + KUNDOL                  | |                + KAMATIS                  | |  *" << endl;
		cout << "\t\t*  |  |               + LUYA                    | |                + SINGKAMAS                | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (kamatis >= singkamas && kamatis >= talong && kamatis >= sigarilyas && 
	           kamatis >= mani && kamatis >= sitaw && kamatis >= bataw &&
	           kamatis >= patani && kamatis >= kundol && kamatis >= patola &&
	           kamatis >= upo && kamatis >= kalabasa && kamatis >= labanos &&
	           kamatis >= mustasa && kamatis >= sibuyas && kamatis >= bawang &&
	           kamatis >= luya && kamatis >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                            << KAMATIS  >>                                        *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |     You're vibrant, energetic, and full of lfe. Your passion and zest make you the     | |  *" << endl;
		cout << "\t\t*  | |             center of attention, and you bring exitement wherever you go.              | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + KALABASA                | |                + BAWANG                   | |  *" << endl;
		cout << "\t\t*  |  |               + SINGKAMAS               | |                + LABANOS                  | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	    
	} else if (bawang >= singkamas && bawang >= talong && bawang >= sigarilyas && 
	           bawang >= mani && bawang >= sitaw && bawang >= bataw &&
	           bawang >= patani && bawang >= kundol && bawang >= patola &&
	           bawang >= upo && bawang >= kalabasa && bawang >= labanos &&
	           bawang >= mustasa && bawang >= sibuyas && bawang >= kamatis &&
	           bawang >= luya && bawang >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                            << BAWANG  >>                                         *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |   You're intense, bold, and not afraid to stand your ground. You tackle life head-on,  | |  *" << endl;
		cout << "\t\t*  | |                   bringing an edge of fierceness to everything you do.                 | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + SIBUYAS                 | |                + SINGKAMAS                | |  *" << endl;
		cout << "\t\t*  |  |               + LINGA                   | |                + SITAW                    | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	
	} else if (luya >= singkamas && luya >= talong && luya >= sigarilyas && 
	           luya >= mani && luya >= sitaw && luya >= bataw &&
	           luya >= patani && luya >= kundol && luya >= patola &&
	           luya >= upo && luya >= kalabasa && luya >= labanos &&
	           luya >= mustasa && luya >= sibuyas && luya >= kamatis &&
	           luya >= bawang && luya >= linga) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                             << LUYA  >>                                          *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |    You're warm, nurturing, and full of wisdom. Your energy helps others feel at ease,  | |  *" << endl;
		cout << "\t\t*  | |            and your nurturing spirit guides people in the right direction.             | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + KALABASA                | |                + SIBUYAS                  | |  *" << endl;
		cout << "\t\t*  |  |               + LINGA                   | |                + LABANOS                  | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	
	} else if (linga >= singkamas && linga >= talong && linga >= sigarilyas && 
	           linga >= mani && linga >= sitaw && linga >= bataw &&
	           linga >= patani && linga >= kundol && linga >= patola &&
	           linga >= upo && linga >= kalabasa && linga >= labanos &&
	           linga >= mustasa && linga >= sibuyas && linga >= kamatis &&
	           linga >= bawang && linga >= luya) {
	           	
	    system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                               HI, " << name << "!\n";
		cout << "\t\t                                     YOU ARE MOST LIKELY SIMILAR TO ....                 " << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                             << LINGA  >>                                         *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |     You're resilient, versatile, and full of quiet strength. Though you might not      | |  *" << endl;
		cout << "\t\t*  | |    always take the spotlight, your grounded and steady presence is essential.  You     | |  *" << endl;
		cout << "\t\t*  | |    value depth and purpose in everything you do, and your tenacity insires others to   | |  *" << endl;
		cout << "\t\t*  | |                                        keep going.                                     | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |   _________________________________________   ___________________________________________  |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |       M O S T  C O M P A T I B L E      | |       L E A S T  C O M P A T I B L E      | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |  |                                         | |                                           | |  *" << endl;
		cout << "\t\t*  |  |               + KALABASA                | |                + BATAW                    | |  *" << endl;
		cout << "\t\t*  |  |               + LUYA                    | |                + LABANOS                  | |  *" << endl;
		cout << "\t\t*  |  |_________________________________________| |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	}
	
}

void adventurer() {
	double answer;
	char name[7];
	
	int adventurous = 0;
    int cautious = 0;
    
	auto getValidatedAnswer = [](double& answer) {
        while (true) {
            cin >> answer;
            if (cin.fail()) {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << endl;
                cout << "\t\t                             INVALID INPUT. PLEASE ENTER A, B, C, OR D.\n";
           		cout << endl;
            } else {
                break; 
            }
        }
    };
    
	system("cls");
	
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |                     o   _                  ______                 _                        |  *" << endl;
	cout << "\t\t*  |  o       _|_           |                                           |     o    _|_          |  *" << endl;
	cout << "\t\t*  |           |            |          WHAT ADVENTURER ARE YOU?         |           |       o   |  *" << endl;
	cout << "\t\t*  |        o    _|_        |_                  ______                 _|             _|_       |  *" << endl;
	cout << "\t\t*  |              |                                                        o           |        |  *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |    TAKE THIS QUIZ TO DISCOVER YOUR ADVENTURER PERSONALITY! ANSWER MATH-BASED QUESTIONS     |  *" << endl;
	cout << "\t\t*  |    THAT TEST YOUR ADVENTUROUS SPIRIT AND CAUTIOUS SIDE. WILL YOU BE A DARING EXPLORER,     |  *" << endl;
	cout << "\t\t*  |    A CAREFUL PLANNER, OR SOMEONE WITH A BALANCED APPROACH TO CHALLENGES? FIND OUT NOW!     |  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t                                       L E T ' S  S T A R T  ! ! !\n";
	cout << endl;
	cout << "\t\t                                     << PRESS 'ENTER' TO CONTINUE >>\n";
	cout << "\t\t                                                     ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	
	system ("cls");
	do {
        cout << endl;
        cout << "\t\t                WELCOME ADVENTURER, PLEASE ENTER YOUR NAME (UP TO 6 LETTERS ONLY)\n";
        cout << "\t\t                                           >> ";
        cin >> name;

        for (int i = 0; i < strlen(name); i++) {
            name[i] = toupper(name[i]);
        }

        if (strlen(name) > 6) {
            cout << "\t\t====================================================================================================" << endl;
            cout << "\t\t|                     INPUT EXCEEDS THE CHARACTER LIMIT. PLEASE TRY AGAIN.                         |" << endl;
            cout << "\t\t====================================================================================================" << endl;
        }
    } while (strlen(name) > 6);


	system ("cls");
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 1]\n";
	cout << endl;
	cout << "\t\t      You encounter a mystical door. To open it, solve this: What is the squareroot of 324?\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 1\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	getValidatedAnswer(answer);
	cout << endl;
	
		if (answer == sqrt(324)) {
		cout << endl;
    	cout << "\t\t                                         CORRECT! GREAT JOB!\n";
        adventurous++;
	    } else {
	    	cout << endl;
			cout << "\t\t                                       BETTER LUCK NEXT TIME!\n";
	        cautious++;
	    }
    
    cout << "\t\t                                   << PRESS 'ENTER' TO CONTINUE >>\n";
	cout << "\t\t                                               ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	
    system ("cls");
    cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 2]\n";
	cout << endl;
	cout << "\t\t                You find a treasure chest guarded by a riddle. Solve this: What is 5^5?\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 2\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	getValidatedAnswer(answer);
	cout << endl;
	
		
 		if (answer == pow(5, 5)) {
		cout << endl;
    	cout << "\t\t                                         CORRECT! GREAT JOB!\n";
        adventurous++;
	    } else {
	    	cout << endl;
			cout << "\t\t                                       BETTER LUCK NEXT TIME!\n";
	        cautious++;
	    }
 	
 	cout << "\t\t                                  << PRESS 'ENTER' TO CONTINUE >>\n";
 	cout << "\t\t                                               ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	
 	system ("cls");
 	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 3]\n";
	cout << endl;
	cout << "\t\t          You're standing at the edge of a cliff. Solve this to proceed: What is log10(1000)?\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 3\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	getValidatedAnswer(answer);
	cout << endl;
	
   		if (answer == log10(1000)) {
		cout << endl;
    	cout << "\t\t                                         CORRECT! GREAT JOB!\n";
        adventurous++;
	    } else {
	    	cout << endl;
			cout << "\t\t                                       BETTER LUCK NEXT TIME!\n";
	        cautious++;
	    }
   		
   	cout << "\t\t                                  << PRESS 'ENTER' TO CONTINUE >>\n";
   	cout << "\t\t                                               ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	
	
   	system ("cls");
   	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 4]\n";
	cout << endl;
	cout << "\t\t                              Solve this puzzle: What is sqrt(49) + 3?\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 4\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	getValidatedAnswer(answer);
	cout << endl;
	
 		
 		if (answer == sqrt(49) + 3) {
		cout << endl;
    	cout << "\t\t                                         CORRECT! GREAT JOB!\n";
        adventurous++;
	    } else {
	    	cout << endl;
			cout << "\t\t                                       BETTER LUCK NEXT TIME!\n";
	        cautious++;
	    }
 	
 	cout << "\t\t                                  << PRESS 'ENTER' TO CONTINUE >>\n";
 	cout << "\t\t                                               ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	
	
 	system ("cls");
 	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 5]\n";
	cout << endl;
	cout << "\t\t                         You find a map with hidden paths. What is (2^5)+10*4?\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 5\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	getValidatedAnswer(answer);
	cout << endl;
	
		
    	if (answer == (pow(2, 5)) + (10*4)) {
		cout << endl;
    	cout << "\t\t                                         CORRECT! GREAT JOB!\n";
        adventurous++;
	    } else {
	    	cout << endl;
			cout << "\t\t                                       BETTER LUCK NEXT TIME!\n";
	        cautious++;
	    }
    
    cout << "\t\t                                  << PRESS 'ENTER' TO CONTINUE >>\n";
    cout << "\t\t                                               ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

	
	system ("cls");
	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 6]\n";
	cout << endl;
	cout << "\t\t   A mystical creature asks you about the mysteries of the universe. Solve this: What is 1/4 of 220?\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 6\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	getValidatedAnswer(answer);
	cout << endl;
	
	
    if (answer == 220*0.25) {
		cout << endl;
    	cout << "\t\t                                         CORRECT! GREAT JOB!\n";
        adventurous++;
	    } else {
	    	cout << endl;
			cout << "\t\t                                       BETTER LUCK NEXT TIME!\n";
	        cautious++;
	    }
    
    cout << "\t\t                                  << PRESS 'ENTER' TO CONTINUE >>\n";
    cout << "\t\t                                               ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	
	
    system ("cls");
    cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 7]\n";
	cout << endl;
	cout << "\t\t                                   Solve this: What is sqrt(64) + 5?\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 7\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	getValidatedAnswer(answer);
	cout << endl;
	
		
	    if (answer == sqrt(64) + 5) {
			cout << endl;
	    	cout << "\t\t                                         CORRECT! GREAT JOB!\n";
	        adventurous++;
		    } else {
		    	cout << endl;
				cout << "\t\t                                       BETTER LUCK NEXT TIME!\n";
		        cautious++;
		    }
    
    cout << "\t\t                                  << PRESS 'ENTER' TO CONTINUE >>\n";
    cout << "\t\t                                               ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	
	
    system ("cls");
    cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 8]\n";
	cout << endl;
	cout << "\t\t                   You meet a wise sage who offers you a challenge: What is 6^5?\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 8\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	getValidatedAnswer(answer);
	cout << endl;
	
 		if (answer == pow(6, 5)) {
			cout << endl;
	    	cout << "\t\t                                         CORRECT! GREAT JOB!\n";
	        adventurous++;
		    } else {
		    	cout << endl;
				cout << "\t\t                                       BETTER LUCK NEXT TIME!\n";
		        cautious++;
		    }
    
    cout << "\t\t                                  << PRESS 'ENTER' TO CONTINUE >>\n";
    cout << "\t\t                                               ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
 		
 		
 	system ("cls");
 	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 9]\n";
	cout << endl;
	cout << "\t\t                                   Solve this: What is sqrt(25) + 4?\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 9\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	getValidatedAnswer(answer);
	cout << endl;
	
		
    
    	if (answer == sqrt(25) + 4) {
			cout << endl;
	    	cout << "\t\t                                         CORRECT! GREAT JOB!\n";
	        adventurous++;
		    } else {
		    	cout << endl;
				cout << "\t\t                                       BETTER LUCK NEXT TIME!\n";
		        cautious++;
		    }
    
    cout << "\t\t                                  << PRESS 'ENTER' TO CONTINUE >>\n";
    cout << "\t\t                                               ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	
	system ("cls");
 	cout << "\t\t====================================================================================================" << endl;
	cout << endl;
	cout << "\t\t                                          [QUESTION NO. 10]\n";
	cout << endl;
	cout << "\t\t                             What is 3 raised to the power of 3 minus 10?\n";
	cout << endl;
	cout << "\t\t====================================================================================================" << endl;
	
	cout << "\t\t                                      ANSWER FOR QUESTION NO. 10\n";
	cout << endl;
	cout << "\t\t                                               >> ";
	getValidatedAnswer(answer);
	cout << endl;
	
		
    
    	if (answer == pow(3, 3) - 10) {
			cout << endl;
	    	cout << "\t\t                                         CORRECT! GREAT JOB!\n";
	        adventurous++;
		    } else {
		    	cout << endl;
				cout << "\t\t                                       BETTER LUCK NEXT TIME!\n";
		        cautious++;
		    }
    
    cout << "\t\t                                  << PRESS 'ENTER' TO CONTINUE >>\n";
    cout << "\t\t                                               ";
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
 		
	
	system ("cls");
	cout << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |                     o   _                  ______                 _                        |  *" << endl;
	cout << "\t\t*  |  o       _|_           |                                           |     o    _|_          |  *" << endl;
	cout << "\t\t*  |           |            |           ~ your result is here!          |       o   |           |  *" << endl;
	cout << "\t\t*  |        o    _|_        |_                  ______                 _|             _|_       |  *" << endl;
	cout << "\t\t*  |              |                                                        o           |        |  *" << endl;
	cout << "\t\t*  |                                                                                            |  *" << endl;
	cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                  *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	
	if (adventurous > cautious) {
		
        system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                           HI, " << name << "!\n";
		cout << "\t\t                                         YOU ARE AN  ...." << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                   << ADVENTUROUS ADVENTURER >>                                   *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |  You're the bold trailblazer, diving headfirst into challenges and seeking thrills at  | |  *" << endl;
		cout << "\t\t*  | |   every turn. Risks don't scare you; they excite you! You're fueled by curiosity and   | |  *" << endl;
		cout << "\t\t*  | |    a passion for exploring the unknown, always looking for the next adrenaline rush.   | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |  _________________________________________    ___________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                         |  |                                           | |  *" << endl;
		cout << "\t\t*  | |             S T R E N G T H S           |  |             C H A L L E N G E S           | |  *" << endl;
		cout << "\t\t*  | |_________________________________________|  |___________________________________________| |  *" << endl;
		cout << "\t\t*  | |                                         |  |                                           | |  *" << endl;
		cout << "\t\t*  | | + High energy and enthusiasm.           |  | + Might overlook important details in     | |  *" << endl;
		cout << "\t\t*  | | + Quick decision-making in dynamic      |  |   haste.                                  | |  *" << endl;
		cout << "\t\t*  | |   situations.                           |  | + Risk of burnout or dangerous            | |  *" << endl;
		cout << "\t\t*  | | + Inspires others with confidence and   |  |   situations.                             | |  *" << endl;
		cout << "\t\t*  | |   charisma.                             |  |                                           | |  *" << endl;
		cout << "\t\t*  | |_________________________________________|  |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
	
    } else if (cautious > adventurous) {
        
        system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                           HI, " << name << "!\n";
		cout << "\t\t                                          YOU ARE A  ...." << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                     << CAUTIOUS ADVENTURER >>                                    *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | | You're a careful srategists, ensuring every step is measured and every risk minimized. | |  *" << endl;
		cout << "\t\t*  | |    You value stability and want to enjoy the journey without unnecessary surprises.    | |  *" << endl;
		cout << "\t\t*  | |         Planning is your superpower, and you find comfort in having a roadmap.         | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |  _________________________________________    ___________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                         |  |                                           | |  *" << endl;
		cout << "\t\t*  | |             S T R E N G T H S           |  |             C H A L L E N G E S           | |  *" << endl;
		cout << "\t\t*  | |_________________________________________|  |___________________________________________| |  *" << endl;
		cout << "\t\t*  | |                                         |  |                                           | |  *" << endl;
		cout << "\t\t*  | | + Excellent planner and problem solver. |  | + May miss out on spontaneous             | |  *" << endl;
		cout << "\t\t*  | | + Avoids unnecessary risks and          |  |   opportunities.                          | |  *" << endl;
		cout << "\t\t*  | |   mistakes.                             |  | + Can overthink and delay decisions.      | |  *" << endl;
		cout << "\t\t*  | | + Reliable and prepared for unexpected  |  |                                           | |  *" << endl;
		cout << "\t\t*  | |   challenges.                           |  |                                           | |  *" << endl;
		cout << "\t\t*  | |_________________________________________|  |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		
    } else {
    	
       	system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t                                            HI, " << name << "!\n";
		cout << "\t\t                                          YOU ARE A  ...." << endl;
		cout << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t*                                     << BALANCED ADVENTURER >>                                    *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		cout << "\t\t*   ____________________________________________________________________________________________   *" << endl;
		cout << "\t\t*  |  ________________________________________________________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                                                                        | |  *" << endl;
		cout << "\t\t*  | |  You're the adatable explorer who blends boldness with caution. You know when to take  | |  *" << endl;
		cout << "\t\t*  | |   risks and when to hold back, thriving in a sweet spot between adventure and safety.  | |  *" << endl;
		cout << "\t\t*  | |     Your balanced approach makes you a great team player and a dependable leader.      | |  *" << endl;
		cout << "\t\t*  | |________________________________________________________________________________________| |  *" << endl;
		cout << "\t\t*  |  _________________________________________    ___________________________________________  |  *" << endl;
		cout << "\t\t*  | |                                         |  |                                           | |  *" << endl;
		cout << "\t\t*  | |             S T R E N G T H S           |  |             C H A L L E N G E S           | |  *" << endl;
		cout << "\t\t*  | |_________________________________________|  |___________________________________________| |  *" << endl;
		cout << "\t\t*  | |                                         |  |                                           | |  *" << endl;
		cout << "\t\t*  | | + Combines creativity with logic for    |  | + Might struggle with indecision when     | |  *" << endl;
		cout << "\t\t*  | |   well-rounded decisions.               |  |   risks and safety seem equally viable.   | |  *" << endl;
		cout << "\t\t*  | | + Can thrive in both structured and     |  | + Can feel torn between adventure and     | |  *" << endl;
		cout << "\t\t*  | |   dynamic environments.                 |  |   over-caution.                           | |  *" << endl;
		cout << "\t\t*  | | + Encourages teamwork and harmony in    |  |                                           | |  *" << endl;
		cout << "\t\t*  | |   groups.                               |  |                                           | |  *" << endl;
		cout << "\t\t*  | |_________________________________________|  |___________________________________________| |  *" << endl;
		cout << "\t\t*  |____________________________________________________________________________________________|  *" << endl;
		cout << "\t\t*                                                                                                  *" << endl;
		cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~*" << endl;
		
    }
}


void credits(string& decisionCredits) {
	cout << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
	cout << "\t\t*   _________________________________________________________________________________________________________   *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |                                            << ABOUT THE GAME >>                                         |  *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |   Welcome to SHAMI PRODUCTIONS where you can play quizzes to know your personality mixed with adventure |  *" << endl;
	cout << "\t\t*  |     games! Through these personality quizzes, you can know yourself better and what events or things    |  *" << endl;
	cout << "\t\t*  |                                           you can be compared to!                                       |  *" << endl;
	cout << "\t\t*  |_________________________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |                                         THIS IS A PROJECT MADE BY                                       |  *" << endl;
	cout << "\t\t*  |                                        << TRISHA MIA G. MORALES >>                                      |  *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |                                                    OF                                                   |  *" << endl;
	cout << "\t\t*  |                                           << BSIT-S-T-1A-T >>                                           |  *" << endl;
	cout << "\t\t*  |_________________________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |                                                DESIGN BY                                                |  *" << endl;
	cout << "\t\t*  |                                        << TRISHA MIA G. MORALES >>                                      |  *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |                                               PROGRAMMING                                               |  *" << endl;
	cout << "\t\t*  |                                        << TRISHA MIA G. MORALES >>                                      |  *" << endl;
	cout << "\t\t*  |_________________________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |                                  QUIZZES AND GAMES ARE INSPIRED FROM                                    |  *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |          >> https://sophie006liu.github.io/vegetal/#                                                    |  *" << endl; 
	cout << "\t\t*  |          >> https://uquiz.com/quiz/4waRWY/what-type-of-adventurer-are-you                               |  *" << endl;
	cout << "\t\t*  |          >> https://www.proprofs.com/quiz-school/story.php?title=pq-what-season-is-your-personality     |  *" << endl;
	cout << "\t\t*  |          >> https://www.proprofs.com/quiz-school/story.php?title=which--four-elements-are-you           |  *" << endl;
	cout << "\t\t*  |                                                                                                         |  *" << endl;
	cout << "\t\t*  |_________________________________________________________________________________________________________|  *" << endl;
	cout << "\t\t*                                                                                                               *" << endl;
	cout << "\t\t* ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ *" << endl;
	
	cout << endl;
	cout << endl;
	cout << "\t\t                            ENTER THE NUMBER OF THE OPTION YOU WOULD LIKE TO SELECT\n";	
	cout << endl;
	cout << "\t\t                                           1. BACK TO THE MENU\n";
	cout << "\t\t                                           2. EXIT\n";
	cout << endl;
	cout << "\t\t                                           >> ";
	cin >> decisionCredits;
	
}


void exit(string& decisionExit) {
	
	cout << endl;
	cout << "\t\t                                     ARE YOU SURE YOU'RE EXITING THE PROGRAM?\n";
	cout << "\t\t                                                  (YES OR NO)\n";
	cout << endl;
	cout << "\t\t                                                     >> ";
	cin >> decisionExit;
	cout << endl;

}