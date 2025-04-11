#include <iostream>//for input/output
#include <string>// for strings
#include <fstream>// for file handling
#include <ctime>//for date and time
using namespace std;
 
 
//DOCUMENTS REQUIRED FOR CNIC,SMART CARD;
void documents()
{
	cout<<"\t\t\t\t\n\nRequired Documents: ";
	cout<<"\n\nScanned photo of your birth certificate";
	cout<<"\nScanned photo of your B-form";
	cout<<"\nRecent photograph with white background";
	cout<<"\nScanned photo of your Father's CNIC";
	cout<<"\nScanned photo of your Mother's CNIC";
}

//APPLICANT DETAILS FOR FAMILY REGISTRATION CERTIFICATE , CNIC , SMART CARD    
class Applicant_details
{
	public: 
	int month = 0;
    int year = 0;
	int day = 0;
	string fn="UNKNOWN";   // fn=name
    string bcnum="0";      // bcnum=number that is written on your b-form
    string dobapplicant = "UNKNOWN";
    void set_applicant(){
    	cin.ignore();
    	cout << "\n\n\t\t\t\tApplicant's Information: ";
		cout << "\nEnter your name: ";
		getline(cin,fn);
		cout << "\nEnter Your National Identity Number(The Number that is written on your b-form) : ";
		getline(cin,bcnum);
		if(bcnum.length() == 15)
			{
	      		
		cout << "\nEnter Applicants Date Of Birth: DD/MM/YYYY\n";
		getline(cin,dobapplicant);			
    } }
    
    void get_applicant(){
        cout << "\nApplicant's Name: " << fn;
        cout << "\nApplicant's National Identity number: " << bcnum;
	    cout << "\nApplicant's Date Of Birth is: " << dobapplicant;
	}
};



//PARENTS DETAILS FOR CNIC AND SMART CARD
class Parent_details{
		public:
		string fathername = "UNKNOWN" , dobfather = "UNKNOWN" , mothername = "UNKNOWN" , dobmother = "UNKNOWN" , fathercnic = "0", mothercnic = "0";
		void set_family(){
		cout << "\n\n\t\t\t\tParent's Information :";	
		cout << "\nEnter your Father's name: ";
		getline(cin,fathername);
		cout << "\nEnter your Father's CNIC number: ";
		getline(cin,fathercnic);
		if(fathercnic.length() == 15)
			{
			
		cout << "\nEnter your Father's Date Of Birth in: dd/mm/yyyy\n";
        getline(cin,dobfather);
        
		cout << "\nEnter your Mother's name: ";
		getline(cin,mothername);
		cout << "\nEnter your Mother's CNIC number: ";
		getline(cin,mothercnic);
		if(mothercnic.length() == 15)
			{
			
		cout << "\nEnter your Mother's Date Of Birth in: dd/mm/yyyy\n";
        getline(cin,dobmother);
	}}}
	 
virtual	void get_family(){
		cout << "\nFather's Name: "<<fathername;
        cout << "\nFather's Identity Number: "<<fathercnic;
        cout << "\nFather's Date Of Birth is: " << dobfather;
	    cout << "\nMother's Name: "<<mothername;
        cout << "\nMother's Identity Number: "<<mothercnic;
        cout << "\nMother's Date Of Birth is: " << dobmother;
		}
};



 



//FAMILY REGISTRATION CERTIFICATE
class Family_member_details:public Applicant_details{
	public:
string father_name = "UNKNOWN" , mother_name = "UNKNOWN" , wife_name = "UNKNOWN"; 	
char op1;
string father_id = "0" , mother_id = "0" , wife_id = "0";
string F_father_name = "UNKNOWN" , F_mother_name = "UNKNOWN" , M_father_name = "UNKNOWN" , M_mother_name = "UNKNOWN" , W_mother_name = "UNKNOWN" , W_father_name = "UNKNOWN";
string dobfather = "UNKNOWN" , dobmother = "UNKNOWN" , dobwife = "UNKNOWN";
int i, j, son = 0, daughter = 0, bro = 0, sis = 0 , total_fm = 0;  //fm=family member
			string sister_name[10] ={ "Unknown"}, brother_name[10] = {"Unknown"};
			string sister_id[10] = {"Unknown"} , brother_id[10] = {"Unknown"};
			string dobsister[10] = {"Unknown"}, dobbrother[10] = {"Unknown"};
            
			string daughter_name[10] = {"Unknown"}, son_name[10] = {"Unknown"};
			string daughter_id[10] = { "Unknown" }, son_id[10] = {"Unknown"};
			string dobdaughter[10] = {"Unknown" }, dobson[10] = {"Unknown"};
		
public:
	
	  void type(){  
		cout << "\nPlease choose FRC type:\nA.Parents and Siblings\nB.Wife and children\n";
		cin >> op1;


	switch(op1){
			
			case 'A':
			case 'a':{
				
 	        cout << "\nYou have choosen FRC typpe of Parents and Siblings";	
		    cout << "\n\n\t\t\t\tFamily's Information: \n";	
	        cin.ignore();
			cout << "\nEnter your Father's name: ";
		    getline(cin,father_name);
		    cout << "\nEnter your Father's Identity Number: ";
		    getline(cin,father_id);
		    if(father_id.length() == 15)
			{
}
		    cout << "\nEnter your Father's Father name: ";
		    getline(cin,F_father_name);
            cout << "\nEnter your Father's Mother name: ";
            getline(cin,F_mother_name);
			cout << "\nEnter your Father's Date Of Birth in: dd/mm/yyyy\n";
            getline(cin,dobfather);

	        cout << "\nEnter your Mother's name: ";
		    getline(cin,mother_name);
		    cout << "\nEnter your Mother's Identity Number: ";
		    getline(cin,mother_id);
		    if(mother_id.length() == 15)
			{
}
		    cout << "\nEnter your Mother's Father name: ";
		    getline(cin,M_father_name);
            cout << "\nEnter your Mother's Mother name: ";
            getline(cin,M_mother_name);
			cout << "\nEnter your Mother's Date Of Birth in: dd/mm/yyyy\n";
            getline(cin,dobmother);
	 
            cout << "\nEnter how many Brothers are there: ";
            cin >> bro;
            
			cout << "\nEnter how many Sisters are there: ";
            cin >> sis;
            

		cin.ignore();
	
	        for(i=0 ; i < bro ; i++)
	        {
			cin.ignore();
			cout << "\nEnter Brother "<< i+1 <<"'s name: ";
			getline(cin,brother_name[i]);
		    cout << "\nEnter Brother "<< i+1 <<"'s Identity number: ";
		    getline(cin,brother_id[i]);
		    if(brother_id[i].length() == 15)
			{
}
			cout << "\nEnter Brother "<< i+1 <<"'s Date Of Birth in: dd/mm/yyyy\n";
          	getline(cin,dobbrother[i]);
        }
        

			for(j=0 ; j < sis ; j++){

	        cin.ignore();
			cout << "\nEnter Sister "<< j+1 <<"'s name: ";
		    getline(cin,sister_name[j]);
		    cout << "\nEnter Sister "<< j+1 <<"'s Identity number: ";
		    getline(cin,sister_id[j]);
		    if(sister_id[j].length() == 15)
			{
}
			cout << "\nEnter Sister "<< j+1 <<"'s Date Of Birth in: dd/mm/yyyy\n";
            getline(cin,dobsister[j]);
}

break;
}

        case 'B':
		case 'b':
		{
		cin.ignore();
	        cout << "\nEnter your Wife's name: ";
		    getline(cin,wife_name);
		    cout << "\nEnter your Wife's Identity Number: ";
		    getline(cin,wife_id);
		    if(wife_id.length() == 15)
			{
}
		    cout << "\nEnter your Wife's Father name: ";
		    getline(cin,W_father_name);
            cout << "\nEnter your Wife's Mother name: ";
            getline(cin,W_mother_name);
			cout << "\nEnter your Wife's Date Of Birth in: dd/mm/yyyy\n";
            getline(cin,dobwife);
            
			cout << "\nEnter how many Sons are there: ";
            cin >> son;
            cout << "\nEnter how many Daughters are there: ";
            cin >> daughter;
			cin.ignore();
	
	        for(i=0 ; i < son ; i++)
	        {
			cin.ignore();
			cout << "\nEnter Son "<< i+1 <<"'s name: ";
			getline(cin,son_name[i]);
		    cout << "\nEnter Son "<< i+1 <<"'s Identity number: ";
		    getline(cin,son_id[i]);
		    if(son_id[i].length() == 15)
			{
		}
			cout << "\nEnter Son "<< i+1 <<"'s Date Of Birth in: dd/mm/yyyy\n";
          	getline(cin,dobson[i]);
        }
        
			for(j=0 ; j < daughter ; j++){

	        cin.ignore();
			cout << "\nEnter Daughter "<< j+1 <<"'s name: ";
		    getline(cin,daughter_name[j]);
		    cout << "\nEnter Daughter "<< j+1 <<"'s Identity number: ";
		    getline(cin,daughter_id[j]);
		    if(daughter_id[j].length() == 15)
			{
		}
			cout << "\nEnter Daughter "<< j+1 <<"'s Date Of Birth in: dd/mm/yyyy\n";
            getline(cin,dobdaughter[j]);

}
 break;
}
}
}

void get_familyinfo_A(){

            cout << "\nEnter how many Brothers are there: ";
            cin >> bro;
            cout << "\nnEnter how many Sisters are there: ";
            cin >> sis;
            
			cout << "\n\n\t\t\t\t Review Information\n";

            total_fm = total_fm + sis + bro + 2;
            
            cout << "\n Total family members = " << total_fm;
            
			cout << "\nFather Details:\n";
			cout << "\nFather's name is: " << father_name;
			cout << "\nFather's Father name is: " << F_father_name;
			cout << "\nFather's CNIC number is: " << father_id;
			cout << "\nFather's Mother name is: " << F_mother_name;
			cout << "\nFather's Date Of Birth is: " << dobfather;
			cout << "\nMother's Details:\n";

			cout << "\n\nMother's name is: " << mother_name;
			cout << "\nMother's Father name is: " << M_father_name;
			cout << "\nMother's CNIC number is: " << mother_id;
			cout << "\nMother's Mother name is: " << M_mother_name;
			cout << "\nMother's Date Of Birth is: " << dobmother;

			cout << "\n\nBrother(s) Details:\n";
			for(i=0 ; i < bro ; i++)
			{	
				cout << "\n\nBrother's " << i + 1 << " CNIC number is: " << brother_id[i];
				cout << "\nBrother's " << i + 1 << " DOB is: " << dobbrother[i];
				cout << "\nBrother's " << i + 1 << " father's name is: " << father_name;
				cout << "\nBrother's " << i + 1 << " Mother's name is: " << mother_name;
			}
			
			cout << "\n\nSister(s) Details:\n";
			for(j=0 ; j < sis ; j++)
			{	
				cout << "\n\nSister's " << j+1 << " CNIC number is: "<< sister_id[j];
				cout << "\nSister's " << j+1 << " DOB is: "<< dobsister[j];
				cout << "\nSister's " << j+1 << " father's name is: " << father_name;
				cout << "\nsister's " << j + 1 << " Mother's name is: " << mother_name;
			}
}	
		
			
void get_familyinfo_B(){
            cout << "\nEnter how many Sons are there: ";
            cin >> son;
            cout << "\nEnter how many Daughters are there: ";
            cin >> daughter;
            cout << "\n\n\t\t\t\t Review Information\n";

            total_fm = total_fm + son + daughter + 2;
            
            cout << "\n Total family members = " << total_fm;
            
			cout << "\n\nWifes Details:";
			cout << "\n\nWife name is: " << wife_name;
			cout << "\nWife's Father name is: " << W_father_name;
			cout << "\nWife's CNIC number is: " << wife_id;
			cout << "\nWife's Mother name is: " << W_mother_name;
			cout << "\nWife's Date Of Birth is: " << dobwife;

			cout << "\n\nSon(s) Details:\n";
			for(i=0 ; i < son ; i++)
			{	
				cout << "\n\nSon's "<< i + 1 << " CNIC number is: "<< son_id[i];
				cout << "\nSon's "<< i + 1 << " DOB is: "<< dobson[i];
				cout << "\nSon's "<< i + 1 << " father's name is: " << fn;
				cout << "\nSon's " << i + 1 << " Mother's name is: " << wife_name;
			}
			
			cout << "\n\nDaughter(s) Details:\n";
			for(j=0 ; j <daughter ; j++)
			{	
				cout << "\n\nDaughter's " << j + 1 << " CNIC number is: " << daughter_id[j];
				cout << "\nDaughter's " << j + 1 << " DOB is: " << dobdaughter[j];
				cout << "\nDaughter's " << j + 1 << " father's name is: " << fn;
				cout << "\nDaughter's " << j + 1 << " Mother's name is: " << wife_name;
			}
}				
};





class FRC : public Family_member_details{
	public:
		
};

/*   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   */ 

class CNIC : public Applicant_details , public Parent_details{
	public:
		
};


/*   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   */ 


class Smart_card : public Applicant_details , public Parent_details{
	public:
		
};

  
  
  
  
int main(){
    fstream nadra;
	nadra.open("nadra",ios::app);
	int age;
	char op1 , op2;
	string cardnum;	
	cout << "\t\t\t\t\t Welcome to NADRA \n\n";
	cout << "Please enter your age: ";
	cin >> age;
	if (age >= 18 ){
		cout << "Do you want to make a CNIC or a Smart Card or an FRC(Family Registration Certificate)\n\t\t\t OR\nDo you want to see the information stored in Nadra?\n";
		cout << "Type C/c for CNIC , S/s for Smart Card , F/f for FRC and G/g to see the information stored in Nadra: ";
		cin >> op1;
		switch(op1){
			
			
			
			                     /*  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&  INFORMATION FOR CNIC  &&&&&&&&&&&&&&&&&&&&&&&&&&&& */
			case 'C':
			case 'c':
				{
				cout << "\n\t\t Application for CNIC: \n";
				nadra << "\n\t\t" << "Application for CNIC: \n";
				
	    CNIC a1;
    	a1.set_applicant();
    	nadra << "Age Is: " << age << "\n";
    	nadra << "Name Is: " <<  a1.fn << "\n";
    	nadra << "CNIC/B-form Number Is: " << a1.bcnum << "\n";
    	nadra << "Date of Birth Is: " << a1.dobapplicant << "\n";
		a1.set_family();
		nadra << "Father Name Is: " << a1.fathername << "\n";
		nadra << "Father CNIC Is: " << a1.fathercnic << "\n";
		nadra << "Father Date if Birth Is: " << a1.dobfather << "\n";
		nadra << "Mother Name Is: " << a1.mothername << "\n";
		nadra << "Mother CNIC Is: " << a1.mothercnic << "\n";
		nadra << "Mother Date if Birth Is: " << a1.dobmother << "\n";
		documents();
		cout << "\n\n\t\t\t\t Billing Information: ";
		cout << "\nDo you want the National Identity card in:\nA. 7 Days for 2500 Rs\nB. 20 Days for 1500 Rs\nC. 40 Days for 750 Rs\n";
	    cin >> op2;
	    
		switch(op2){
			
			case 'A':
			case 'a':
					cin.ignore();
			cout << "\nYou have selected Option A of 7 days for Rs 2,500";
			cout << "\nEnter your Credit/Debit card number : ";
			getline(cin , cardnum);
		   	if(cardnum.length() == 19)
			{
			cout << "\nCard is valid\n Rs 2,500 will be deducted from your card";
			nadra << "Card Number Is: " << cardnum << "\n";
			nadra << "Option " << op2 << " Is Selected of 7 days In Rs 2,500";
			cout << "\n\n\t\t\t\tReveiw Information:\n";
			a1.get_applicant();
			a1.get_family();
			cout << "\n\n\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n\t\t\t Thank You For Choosing Nadra\n\t\t\t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\t\t\n";
				break;
			}
			else
			{
				cout << "\nCard is Invalid\nTry Again by inserting right deibt/credit card number";
				break;
			}
			case 'B':
			case 'b':
					cin.ignore();
			cout << "\nYou have selected Option B of 15 days for Rs 1,500";
			cout << "\nEnter your Credit/Debit card number: ";
			getline(cin , cardnum);
			if(cardnum.length() == 19)
			{
			cout << "\nCard is valid\n Rs 1,500 will be deducted from your card";
			nadra << "Card Number Is: " << cardnum << "\n";
			nadra << "Option " << op2 << " Is Selected of 15 days In Rs 1,500";
			cout << "\n\n\t\t\t\tReveiw Information:\n";
			a1.get_applicant();
			a1.get_family();
		    cout << "\n\n\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n\t\t\t Thank You For Choosing Nadra\n\t\t\t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\t\t\n";
				break;
			}
			else
			{
					cout << "\nCard is Invalid\nTry Again by inserting right deibt/credit card number";
					break;
			}
			case 'C':
			case 'c':
					cin.ignore();
			cout << "\nYou have selected Option C of 40 days for Rs 750";
			cin.ignore();
			cout << "\nEnter your Credit/Debit card number: ";
			getline(cin , cardnum);
			if(cardnum.length() == 19)
			{
			
			cout << "\nCard is valid\n Rs 750 will be deducted from your card";
			nadra << "Card Number Is: " << cardnum << "\n";	
			nadra << "Option " << op2 << " Is Selected of 40 days In Rs 750";
			cout << "\n\n\t\t\t\tReveiw Information:\n";
			a1.get_applicant();
			a1.get_family();
			cout << "\n\n\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n\t\t\t Thank You For Choosing Nadra\n\t\t\t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\t\t\n";
			cardnum;
			break;
		}
		else
		{
		cout << "\nCard is Invalid\nTry Again by inserting right deibt/credit card number";
		break;
		}	
				
		}
				break;
			}
			
			
			
			
			
			                     /*  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&  INFORMATION FOR SMART CARD  &&&&&&&&&&&&&&&&&&&&&&&&&&&& */			
			case 'S':
			case 's':
				{
				
				cout << "\n\t\t Application for Smart Card: \n";
				nadra << "\n\t\t" << "Application for Smart Card: \n";
		Smart_card a1;
    	a1.set_applicant();
		nadra << "Age Is: " << age << "\n";
    	nadra << "Name Is: " <<  a1.fn << "\n";
    	nadra << "CNIC/B-form Number Is: " << a1.bcnum << "\n";
    	nadra << "Date of Birth Is: " << a1.dobapplicant << "\n";
		a1.set_family();	
		nadra << "Father Name Is: " << a1.fathername << "\n";
		nadra << "Father CNIC Is: " << a1.fathercnic << "\n";
		nadra << "Father Date if Birth Is: " << a1.dobfather << "\n";
		nadra << "Mother Name Is: " << a1.mothername << "\n";
		nadra << "Mother CNIC Is: " << a1.mothercnic << "\n";
		nadra << "Mother Date if Birth Is: " << a1.dobmother << "\n";
		documents();
		cout << "\n\n\t\t\t\t Billing Information: ";
		cout << "\nDo you want the Smart card in:\nA. 7 Days for 2500 Rs\nB. 20 Days for 1500 Rs\nC. 40 Days for 750 Rs\n";
	    cin >> op2;
	    
		switch(op2){
			
			case 'A':
			case 'a':
					cin.ignore();
			cout << "\nYou have selected Option A of 7 days for Rs 2,500";
			cout << "\nEnter your Credit/Debit card number : ";
			getline(cin , cardnum);
			if(cardnum.length() == 19)
			{
			cout << "\nCard is valid\n Rs 2,500 will be deducted from your card";
			nadra << "Card Number Is: " << cardnum << "\n";
			nadra << "Option " << op2 << " Is Selected of 7 days In Rs 2,500";
			cout << "\n\n\t\t\t\tReveiw Information:\n";
			a1.get_applicant();
			a1.get_family();
		    cout << "\n\n\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n\t\t\t Thank You For Choosing Nadra\n\t\t\t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\t\t\n";
				break;
			}
			else
			{
				cout << "\nCard is Invalid\nTry Again by inserting right deibt/credit card number";
				break;
			}
			case 'B':
			case 'b':
				cin.ignore();
			cout << "\nYou have selected Option B of 15 days for Rs 1,500";
			cout << "\nEnter your Credit/Debit card number: ";
			getline(cin , cardnum);
			if(cardnum.length() == 19)
			{
			cout << "\nCard is valid\n Rs 1,500 will be deducted from your card";
			nadra << "Card Number Is: " << cardnum << "\n";
			nadra << "Option " << op2 << " Is Selected of 15 days In Rs 1,500";
			cout << "\n\n\t\t\t\tReveiw Information:\n";
			a1.get_applicant();
			a1.get_family();
			cout << "\n\n\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n\t\t\t Thank You For Choosing Nadra\n\t\t\t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\t\t\n";
				break;
			}
			else
			{
				cout << "\nCard is Invalid\nTry Again by inserting right deibt/credit card number";
				break;
			}
			case 'C':
			case 'c':
				cin.ignore();
			cout << "\nYou have selected Option C of 40 days for Rs 750";
			cout << "\nEnter your Credit/Debit card number: ";
			getline(cin , cardnum);
			if(cardnum.length() == 19)
			{
			cout << "\nCard is valid\n Rs 750 will be deducted from your card";
			nadra << "Card Number Is: " << cardnum << "\n";	
			nadra << "Option " << op2 << " Is Selected of 40 days In Rs 750";
			cout << "\n\n\t\t\t\tReveiw Information:\n";
			a1.get_applicant();
			a1.get_family();
		    cout << "\n\n\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n\t\t\t Thank You For Choosing Nadra\n\t\t\t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\t\t\n";
			break;
			}
			else
			{
				cout << "\nCard is Invalid\nTry Again by inserting right deibt/credit card number";
				break;
			}
		}
		break;
			}
		
		
		
		
		
		
		
		
		
		                         /*  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&  INFORMATION FOR FAMILY REGISTRATION CERTIFICATE  &&&&&&&&&&&&&&&&&&&&&&&&&&&& */
			case 'F':
			case 'f':
				{
				char ch4;
				cout<<"\n\t\t Application for Family Registration Certificate: \n";
				nadra <<"\n\n\t\t Application for Family Registration Certificate: \n\n";
     			FRC f1;		
	            f1.set_applicant();
	            nadra << "Age Is: " << age << "\n";
    			nadra << "Name Is: " <<  f1.fn << "\n";
    			nadra << "CNIC/B-form Number Is: " << f1.bcnum << "\n";
    			nadra << "Date of Birth Is: " << f1.dobapplicant << "\n";
	            cin.ignore();
			    f1.type();	
				cout << "\n\n\t\t\t\t Billing Information: ";
				cout << "\nThe cost of FRC would be Rs.1000";
				cout << "\nEnter your Credit/Debit card number: ";
				getline(cin , cardnum);
				if(cardnum.length() == 19)
				{
				cout << "\nCard is valid";
				nadra << "Card Number Is: " << cardnum << "\n";
				cout << "\nType again which type of FRC had you choosen to review information\nA.Parents and Siblings\nB.Wife and Children:\n";
				cin.ignore();
					 cin >> ch4;
					 switch (ch4){
					 case 'A':
					 case 'a':{
						nadra << ch4 << " Option Is Selected That Is For Parents And Siblings";
					 
					f1.get_applicant(); 
					f1.get_familyinfo_A();
					nadra << "\nNumbers of Brothers Are: " << f1.bro;
					nadra << "\nNumbers of Sisters Are: "  << f1.sis;
					nadra << "\n\nFather Details:\n";
					nadra << "\nFather's name is: " << f1.father_name;
					nadra << "\nFather's Father name is: " << f1.F_father_name;
					nadra << "\nFather's CNIC number is: " << f1.father_id;
					nadra << "\nFather's Mother name is: " << f1.F_mother_name;
					nadra << "\nFather's Date Of Birth is: " << f1.dobfather;
					nadra << "\n\nMother's Details:\n";
					nadra << "\nMother's name is: " << f1.mother_name;
					nadra << "\nMother's Father name is: " << f1.M_father_name;
					nadra << "\nMother's CNIC number is: " << f1.mother_id;
					nadra << "\nMother's Mother name is: " << f1.M_mother_name;
					nadra << "\nMother's Date Of Birth is: " << f1.dobmother;
					cout << "\n\nBrother(s) Details:\n";
					nadra << "\n\nBrothers(s) Details:\n";
					for(int i=0 ; i < f1.bro ; i++)
					{	
					nadra << "\nBrother's " << i + 1 << " CNIC number is: " << f1.brother_id[i];
					nadra << "\nBrother's " << i + 1 << " DOB is: " << f1.dobbrother[i];
					nadra << "\nBrother's " << i + 1 << " father's name is: " << f1.father_name;
					nadra << "\nBrother's " << i + 1 << " Mother's name is: " << f1.mother_name;
					}
					nadra << "\n\nSister(s) Details:\n";
					for(int j=0 ; j < f1.sis ; j++)
					{	
					nadra << "\nSister's " << j+1 << " CNIC number is: "<< f1.sister_id[j];
					nadra << "\nSister's " << j+1 << " DOB is: "<< f1.dobsister[j];
					nadra << "\nSister's " << j+1 << " father's name is: " << f1.father_name;
					nadra << "\nsister's " << j + 1 << " Mother's name is: " << f1.mother_name;
				
                    nadra << "\n Total family members = " << f1.total_fm;
            
					}
					 break;
					 }
					 case 'B':
					 case 'b':{
						nadra << ch4 << " Option Is Selected That Is For Wife And Children";
					f1.get_applicant();
					f1.get_familyinfo_B();	
					nadra << "\nNumbers of Sons Are: " << f1.son;
					nadra << "\nNumbers of Daughters Are: "  << f1.daughter;
					nadra << "\n\nWifes Details:";
					nadra << "\n\nWife name is: " << f1.wife_name;
					nadra << "\nWife's Father name is: " << f1.W_father_name;
					nadra << "\nWife's CNIC number is: " << f1.wife_id;
					nadra << "\nWife's Mother name is: " << f1.W_mother_name;
					nadra << "\nWife's Date Of Birth is: " << f1.dobwife;
					nadra << "\n\nSon(s) Details:\n";
					for(int i=0 ; i < f1.son ; i++)
					{	
					nadra << "\n\nSon's "<< i + 1 << " CNIC number is: "<< f1.son_id[i];
					nadra << "\nSon's "<< i + 1 << " DOB is: "<< f1.dobson[i];
					nadra << "\nSon's "<< i + 1 << " father's name is: " << f1.fn;
					nadra << "\nSon's " << i + 1 << " Mother's name is: " << f1.wife_name;
					}
			
					cout << "\n\nDaughter(s) Details:\n";
					for(int j=0 ; j < f1.daughter ; j++)
					{	
					nadra << "\n\nDaughter's " << j + 1 << " CNIC number is: " << f1.daughter_id[j];
					nadra << "\nDaughter's " << j + 1 << " DOB is: " << f1.dobdaughter[j];
					nadra << "\nDaughter's " << j + 1 << " father's name is: " << f1.fn;
					nadra << "\nDaughter's " << j + 1 << " Mother's name is: " << f1.wife_name;
					}
					
                    nadra << "\n Total family members = " << f1.total_fm;
            		
					 break;
					 }}
					 
				break;
               }
               else
               {
               	cout << "\nCard is Invalid\nTry Again by inserting right deibt/credit card number";
				break;
			   }
		}
		
		
		
		
		
		
		
		
		                 /*  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&  INFORMATION STORE IN NEDRA   &&&&&&&&&&&&&&&&&&&&&&&&&&&& */
		case 'g':
		case 'G':
		{
			string line;
  ifstream myfile ("nadra");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
			
				
	}
}
	else
	{
		cout<<"\n\t\tAge is less than 18\n\t\tYou are Applicable for Smart Card\n\t\tApplication for Smart Card (SNIC):\n";
		nadra << "\n\t\t" << "\nApplication for Smart Card (Applicant Age Is Less than 18): \n";
		Smart_card a1;
    	a1.set_applicant();
		nadra << "Age Is: " << age << "\n";
    	nadra << "Name Is: " <<  a1.fn << "\n";
    	nadra << "CNIC/B-form Number Is: " << a1.bcnum << "\n";
    	nadra << "Date of Birth Is: " << a1.dobapplicant << "\n";
		a1.set_family();	
		nadra << "Father Name Is: " << a1.fathername << "\n";
		nadra << "Father CNIC Is: " << a1.fathercnic << "\n";
		nadra << "Father Date if Birth Is: " << a1.dobfather << "\n";
		nadra << "Mother Name Is: " << a1.mothername << "\n";
		nadra << "Mother CNIC Is: " << a1.mothercnic << "\n";
		nadra << "Mother Date if Birth Is: " << a1.dobmother << "\n";	
		cout << "\n\n\t\t\t\t Billing Information: ";
		documents();
		cout << "\n\n\t\t\t\t Billing Information:\n";
		cout << "\nDo you want the Smart card in:\nA. 7 Days for 2500 Rs\nB. 20 Days for 1500 Rs\nC. 40 Days for 750 Rs\n";
	    cin >> op2;
	    
		switch(op2){
			
			case 'A':
			case 'a':
					cin.ignore();
			cout << "\nYou have selected Option A of 7 days for Rs 2,500";
			cout << "\nEnter your Credit/Debit card number : ";
			getline(cin , cardnum);
				if(cardnum.length() == 19)
			{
			cout << "\nCard is valid\n Rs 2,500 will be deducted from your card";
			nadra << "Card Number Is: " << cardnum << "\n";
			nadra << "Option " << op2 << " Is Selected of 7 days In Rs 2,500";
			cout << "\n\n\t\t\t\tReveiw Information:\n";
			a1.get_applicant();
			a1.get_family();
			cout << "\n\n\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n\t\t\t Thank You For Choosing Nadra\n\t\t\t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\t\t\n";
				break;
			}
			else
			{
				cout << "\nCard is Invalid\nTry Again by inserting right deibt/credit card number";
				break;
			}
			case 'B':
			case 'b':
				cin.ignore();
			cout << "\nYou have selected Option B of 15 days for Rs 1,500";
			cout << "\nEnter your Credit/Debit card number: ";
			getline(cin , cardnum);
			if(cardnum.length() == 19)
			{
			cout << "\nCard is valid\n Rs 1,500 will be deducted from your card";
			nadra << "Card Number Is: " << cardnum << "\n";
			nadra << "Option " << op2 << " Is Selected of 15 days In Rs 1,500";
			cout << "\n\n\t\t\t\tReveiw Information:\n";
			a1.get_applicant();
			a1.get_family();
			cout << "\n\n\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n\t\t\t Thank You For Choosing Nadra\n\t\t\t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\t\t\n";
				break;
			}
				else
			{
				cout << "\nCard is Invalid\nTry Again by inserting right deibt/credit card number";
				break;
			}
			case 'C':
			case 'c':
				cin.ignore();
			cout << "\nYou have selected Option C of 40 days for Rs 750";
			cout << "\nEnter your Credit/Debit card number";
			getline(cin , cardnum);
			if(cardnum.length() == 19)
			{
			cout << "\nCard is valid\n Rs 750 will be deducted from your card";
			nadra << "Card Number Is: " << cardnum << "\n";
			nadra << "Option " << op2 << " Is Selected of 40 days In Rs 750";
			cout << "\n\n\t\t\t\tReveiw Information:\n";
			a1.get_applicant();
			a1.get_family();
			cout << "\n\n\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n\t\t\t Thank You For Choosing Nadra\n\t\t\t xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\t\t\n";
			break;
		}	
				else
			{
				cout << "\nCard is Invalid\nTry Again by inserting right deibt/credit card number";
				break;
			}
		}	
}

return 0;
}
