#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class car {
private:
	int model, price, select;
	string color, name; ;


public:

	int choice, userchoice;
	int total;
	int user;

	void city() { // car name store for honda city
		name = "Honda City";
	}


	void cevic() { //  honda civic name set
		name = "Honda Civic";
	}




	void getData() { // for honda
		cout << "\n\tChoose the car :: ";
		cin >> select;
		Carcolor();
		if (select == 1 && user == 2) {
			city();
		}
		else if (select == 2 && user == 2) {
			cevic();

		}
	}


	void setcoralla() {

		name = "Toyota Corolla";

	}


	void setfortuner() {

		name = "Toyota Fortuner";

	}



	void toyotaData() { // for toyota
		cout << "\n\tChoose the car :: ";
		cin >> select;
		Carcolor();
		if (select == 1 && user == 3) {
			setcoralla();
		}
		else if (select == 2 && user == 3) {
			setfortuner();

		}
	}

	void setAudi() {
		name = "Audi A5";
	}

	void setAudietron() {
		name = "Audi E-Tron";
	}


	void audiData() { // for AUDI 
		cout << "\n\tChoose the car :: ";
		cin >> select;
		Carcolor();
		if (select == 1 && user == 4) {
			setAudi();
		}
		else if (select == 2 && user == 4) {
			setAudietron();


		}
	}


	void alto() { // alto name set
		name = "Suzuki alto";
	}
	void wagonR() { // wagon r set name
		name = "Suzuki wagon R";
	}


	void getInfo() {
		cout << "\n\tChoose the car :: ";
		cin >> model;
		if (model == 1) {
			alto();
		}
		else if (model == 2) {
			wagonR();

		}
	}


	void Carcolor() {
		cout << "\n\tEnter the Car color :: ";
		cin >> color;
	}


	void display() {
		cout << "\n\n\tCar Name      : " << name;
		cout << "\n\n\tColor         : " << color;
		cout << "\n\n\tCar Price     : " << price;
		cout << "\n\n\tTotal Price   : " << total << endl;
		cout << "\n\t" << __DATE__;
		cout << " " << __TIME__ << endl;
		cout << "\n\n\t*****YOUR CAR IS BOOKED*****  " <<endl;
		cout << "\n  You will be sent confirmation message for payment "<<endl;


	}

	void brforPurchase() {
		if (user == 1 || user == 2 || user == 3 || user == 4) {

			cout << "\n\n\t Car Price    : " << price;
			cout << "\n\n\t Total Price  : " << total << endl;
		}

	}

	car() {
		cout << "\n ********DREAM CAR BOOKING***********" << endl;
		cout << "\n ************************************" << endl;
		cout << "\t CHOSE THE CAR BRAND  " << endl;
		cout << "\n\t 1) SUZUKI\t 2) HONDA\n\n\t 3) TOYOTA\t 4) AUDI " << endl;

		cout << "\n\t Select the Brand Name :: ";
		cin >> user;
		if (user == 1 || user == 2 || user == 3 || user == 4) {
			if (user == 1) {

				cout << "\n\t Available Cars" << endl;
				cout << "\n\t 1) Suzuki alto\t 2) Suzuki WagonR " << endl;
				getInfo();
				Carcolor();
			}
			if (user == 2) {
				cout << "\n\t Available Cars" << endl;
				cout << "\n\t 1) Honda City\t 2) Honda Civic " << endl;
				getData();
			}

			if (user == 3) {
				cout << "\n\t Available Cars" << endl;
				cout << "\n\t 1) Toyota Corolla\t 2) Toyota Fortuner " << endl;
				toyotaData();
			}
			if (user == 4) {
				cout << "\n\t Available Cars" << endl;
				cout << "\n\t 1) Audi A5\t 2) Audi E-Tron" << endl;
				audiData();
			}

			//                 for suzuki alto
			if (user == 1 && model == 1) {
				cout << "\n\tDo you want to see car's specs" << endl;
				cout << "\n\t 1) YES  OR  2) NO : ";
				int choice;
				cin >> choice;
				if (choice == 1) {
					cout << "\n\tCar Basic Information" << endl;
					cout << "\n *********************************" << endl;
					suzukiAltoinfo();
					carModification();

				}


				else {
					carModification();
				}
			}


			// for wagon R
			else if (user == 1 && model == 2) {
				cout << "\n\tDo you want to see car's specs" << endl;
				cout << "\n\t 1) YES  OR  2) NO : ";
				int choice;
				cin >> choice;
				if (choice == 1) {
					cout << "\n\tCar Basic Information" << endl;
					cout << "\n *********************************" << endl;
					suzukiWagonRinfo();
					carModification();
				}

				else {
					carModification();

				}

			}

			// for honda city

			else if (user == 2 && select == 1) {
				cout << "\n\tDo you want to see car's specs" << endl;
				cout << "\n\t 1) YES  OR  2) NO : ";
				int choice;
				cin >> choice;
				if (choice == 1) {
					cout << "\n\tCar Basic Information" << endl;
					cout << "\n *********************************" << endl;
					hondaCity();
					carModification();
				}

				else {
					carModification();

				}
			}


			// for Honda civic


			if (user == 2 && select == 2) {
				cout << "\n\tDo you want to see car's specs" << endl;
				cout << "\n\t 1) YES  OR  2) NO : ";
				int choice;
				cin >> choice;
				if (choice == 1) {
					cout << "\n\tCar Basic Information" << endl;
					cout << "\n *********************************" << endl;
					hondaCivic();
					carModification();
				}

				else {
					carModification();

				}
			}


			// toyota corolla 
			if (user == 3 && select == 1) {
				cout << "\n\tDo you want to see car's specs" << endl;
				cout << "\n\t 1) YES  OR  2) NO : ";
				int choice;
				cin >> choice;
				if (choice == 1) {
					cout << "\n\tCar Basic Information" << endl;
					cout << "\n *********************************" << endl;
					toyotaCrolla();
					carModification();
				}

				else {
					carModification();

				}
			}


			// fortuner

			if (user == 3 && select == 2) {
				cout << "\n\tDo you want to see  car specs" << endl;
				cout << "\n\t 1) YES  OR  2) NO : ";
				int choice;
				cin >> choice;
				if (choice == 1) {
					cout << "\n\tCar Basic Information" << endl;
					cout << "\n *********************************" << endl;
					Toyotafortuner();
					carModification();
				}

				else {
					carModification();

				}
			}


			//Audi A5
			if (user == 4 && select == 1) {
				cout << "\n\tDo you want to see car's specs" << endl;
				cout << "\n\t 1) YES  OR  2) NO : ";
				int choice;
				cin >> choice;
				if (choice == 1) {
					cout << "\n\tCar Basic Information" << endl;
					cout << "\n *********************************" << endl;
					audiA5();
					carModification();
				}

				else {
					carModification();

				}
			}


			//Audi Etron
			if (user == 4 && select == 2) {
				cout << "\n\tDo you want to see car's specs" << endl;
				cout << "\n\t 1) YES  OR  2) NO : ";
				int choice;
				cin >> choice;
				if (choice == 1) {
					cout << "\n\tCar Basic Information" << endl;
					cout << "\n *********************************" << endl;
					Audietron();
					carModification();
				}

				else {
					carModification();

				}
			}


		}
		else {
			cout << "\n\t  wrong Input" << endl;


		}


	}

	void suzukiAltoinfo() {
		fstream Myfile;
		Myfile.open("suzuki.txt", ios::in); //read file for ALto specs
		if (Myfile.is_open()) {
			string line;
			while (getline(Myfile, line)) {

				cout << "\n\t" << line << endl;
			}
			Myfile.close();
		}
	}


	void suzukiWagonRinfo() {
		fstream Myfile;
		Myfile.open("suzuk Wagon R.txt", ios::in); //read file for wagon R specs
		if (Myfile.is_open()) {
			string line;
			while (getline(Myfile, line)) {

				cout << "\n\t" << line << endl;
			}
			Myfile.close();
		}
	}


	// read file for Honda city specs

	void hondaCity() {
		fstream Myfile;
		Myfile.open("hondacity.txt", ios::in);
		if (Myfile.is_open()) {
			string line;
			while (getline(Myfile, line)) {

				cout << "\n\t" << line << endl;
			}
			Myfile.close();
		}
	}

	// read for honda civic specs


	void hondaCivic() {
		fstream Myfile;
		Myfile.open("hondacivic.txt", ios::in);
		if (Myfile.is_open()) {
			string line;
			while (getline(Myfile, line)) {

				cout << "\n\t" << line << endl;
			}
			Myfile.close();
		}
	}

	// file handling for Toyota crolla


	void toyotaCrolla() {
		fstream Myfile;
		Myfile.open("corolla.txt", ios::in);
		if (Myfile.is_open()) {
			string line;
			while (getline(Myfile, line)) {

				cout << "\n\t" << line << endl;
			}
			Myfile.close();
		}
	}

	// read for fortuner



	void Toyotafortuner() {
		fstream Myfile;
		Myfile.open("fortuner.txt", ios::in);
		if (Myfile.is_open()) {
			string line;
			while (getline(Myfile, line)) {

				cout << "\n\t" << line << endl;
			}
			Myfile.close();
		}
	}

	// read for audi A5


	void audiA5() {
		fstream Myfile;
		Myfile.open("audi.txt", ios::in);
		if (Myfile.is_open()) {
			string line;
			while (getline(Myfile, line)) {

				cout << "\n\t" << line << endl;
			}
			Myfile.close();
		}
	}


	// read for audi E-Tron


	void Audietron() {
		fstream Myfile;
		Myfile.open("audiEtron.txt", ios::in);
		if (Myfile.is_open()) {
			string line;
			while (getline(Myfile, line)) {

				cout << "\n\t" << line << endl;
			}
			Myfile.close();
		}
	}



	void carModification() {
		cout << "\n\t*************************************" << endl;
		cout << "\n\t Do you want car modifications?" << endl;
		cout << "\n\t 1) YES  OR  2) NO : ";

		cin >> choice;
		if (choice == 1) {
			while (true) {
				cout << "\n\t 1) Leather seat cover\t 2) Alloy rims :: ";
				cin >> choice;
				if (choice == 1) {
					cout << "\n\t Leather seat cover price 5000" << endl;
					cout << "\n\t Do you want to install" << endl;
					cout << "\n\t 1) YES  OR 2) NO :: ";

					cin >> userchoice;
					if (userchoice == 1) {
						cout << "\n\t Leather seat cover installed" << endl;
						if (model == 1) { // alto
							ALtoprice();

						}

						if (model == 2) { // wagon r
							WagonRprice();

						}



					}
					if (select == 1 && user == 2) { // city

						cityprice();
					}

					if (select == 2 && user == 2) { // civic       

						civicprice();
					}



					if (select == 1 && user == 3) {   // corolla      

						corollaprice();
					}



					if (select == 2 && user == 3) {   // Fortuner      

						foruneraprice();
					}



					if (select == 1 && user == 4) {   // Audi A5       

						Audiprice();
					}


					if (select == 2 && user == 4) {   // Audi Etron        

						Audi_Etron();
					}



				}

				
				
				if (choice == 2) {

					cout << "\n\t Alloy wheel price 15000" << endl;
					cout << "\n\t Do you want to install" << endl;
					cout << "\n\t 1) YES  OR 2) NO :: ";
					cin >> userchoice;
					if (userchoice == 1) {
						cout << "\n\t rim installed" << endl;
						if (model == 1 && user == 1) { // alto
							ALtoprice();

						}



						if (model == 2 && user == 1) { // wagon r  
							WagonRprice();

						}

						if (select == 1 && user == 2) {  // city
							cityprice();

						}

						if (select == 2 && user == 2) { // civic
							civicprice();

						}

						if (select == 1 && user == 3) { // corolla  
							corollaprice();

						}


						if (select == 2 && user == 3) { // Fortuner   
							foruneraprice();

						}


						if (select == 1 && user == 4) { // Audi  A5  
							Audiprice();

						}

						if (select == 2 && user == 4) { // Audi E tron   
							Audi_Etron();

						}


					}


				}


				
				cout << "\n\t DO you Want Another modification\n \t 1) yes   or  2) no" << endl;
				int userAnswer; cin >> userAnswer;
				if (userAnswer !=1) {
					goto anotehr;
				}

			}
		}/// bracket
		anotehr:

		if (model == 1) {
			ALtoprice();


		}


		if (model == 2) {
			WagonRprice();


		}

		if (select == 1) {
			cityprice();
		}
		if (select == 2) {
			civicprice();
		}

		if (select == 1 && user == 3) {
			corollaprice();

		}

		if (select == 2 && user == 3) { //
			foruneraprice();

		}

		if (select == 1 && user == 4) { //
			Audiprice();

		}

		if (select == 2 && user == 4) { //
			Audi_Etron();

		}

	}


	// ##########################

	// CAR PRICES  

	void ALtoprice() {  // alto prices set

		price = 210000;

		if (choice == 1 && userchoice == 1) {
			total = price + 5000;

		}
		else if (choice == 2 && userchoice == 1) {
			total = price + 20000;
		}

		else if (choice != 1 || userchoice != 1) {
			total = price;
		}
	}

	void 	WagonRprice() { // wagon R price set

		price = 219900;

		if (choice == 1 && userchoice == 1) {
			total = price + 5000;


		}
		else if (choice == 2 && userchoice == 1) {
			total = price + 20000;
		}

		else if (choice != 1 || userchoice != 1) {
			total = price;
		}
	}

	// honda price


	void cityprice() {   // honda  city price set

		price = 219900;

		if (choice == 1 && userchoice == 1) {
			total = price + 5000;


		}
		else if (choice == 2 && userchoice == 1) {
			total = price + 20000;
		}

		else if (choice != 1 || userchoice != 1) {
			total = price;
		}
	}
	// honda civic price set

	void civicprice() {

		price = 400000;

		if (choice == 1 && userchoice == 1) {
			total = price + 5000;



		}
		else if (choice == 2 && userchoice == 1) {
			total = price + 20000;
		}

		else if (choice != 1 || userchoice != 1) {
			total = price;
		}
	}


	// toyota price 

	//toyota corolla set

	void corollaprice() {

		price = 2800000;

		if (choice == 1 && userchoice == 1) {
			total = price + 5000;



		}
		else if (choice == 2 && userchoice == 1) {
			total = price + 20000;
		}

		else if (choice != 1 || userchoice != 1) {
			total = price;
		}
	}


	// fortuner price set


	void foruneraprice() {

		price = 15000000;

		if (choice == 1 && userchoice == 1) {
			total = price + 5000;


		}
		else if (choice == 2 && userchoice == 1) {
			total = price + 20000;
		}

		else if (choice != 1 || userchoice != 1) {
			total = price;
		}
	}


	// audi price set

	void Audiprice() { // audi A5

		price = 15000000;

		if (choice == 1 && userchoice == 1) {
			total = price + 5000;



		}
		else if (choice == 2 && userchoice == 1) {
			total = price + 20000;
		}

		else if (choice != 1 || userchoice != 1) {
			total = price;
		}
	}


	void Audi_Etron() { // audi E tron

		price = 17000000;

		if (choice == 1 && userchoice == 1) {
			total = price + 5000;

		}
		else if (choice == 2 && userchoice == 1) {
			total = price + 20000;
		}

		else if (choice != 1 || userchoice != 1) {
			total = price;
		}
	}


};



class Invoice :public car { //recepit for the person who purchase the car 
private:
	string name;
	int idCard;
	int phoneNumber;
public:
	void getInvoice() {

		if (user != 1 && user != 2 && user != 3 && user != 4) {
			goto car;
		}
		else {

			cout << "\n\n\t Do you want to Buy This Car " << endl;
			cout << "\n\t press 1 : YES  press 2 :  No ::";
			int user;
			cin >> user;
			switch (user) {
			case 1:

				cout << "\n\t please Enter Your Name   : ";
				cin >> name;
				cout << "\n\t Enter the ID Card No     : ";
				cin >> idCard;
				cout << "\n\t Enter the Phone Number   : ";
				cin >> phoneNumber;



				cout << "\n\t******************************" << endl;
				cout << "\n\tName          : " << name << endl;
				cout << "\n\tIdCard        : " << idCard << endl;
				cout << "\n\tPhone Number  : " << phoneNumber;

				Invoice::display();

			case 2:
			car:
				break;

			}






		}



	}



};


int main() {

	Invoice recepit;
	recepit.brforPurchase();
	recepit.getInvoice();

	return 0;
}

