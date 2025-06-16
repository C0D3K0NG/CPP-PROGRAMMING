/*Write a program as per following details 
Create one base class DRUG with following data members 
Category- (i.e. stimulants, inhalants, cannabinoids) 
Date_of_manufacture, Company name 

Create one sub class TABLET derived from DRUG with following data members 
Tablet name, Price 

Create one sub class PainReliever derived from TABLET with data member 
Dosage_units: i.e( 1 or 2 or 3) 
Side_effects : i.e (Nausea, Drowsiness, Dizziness.) 
Use_within_days: i.e(10 or 20 or 30). 

Use appropriate member function for setting and Getting above details and display details in main function. 
*/

#include <iostream>
#include <string>
using namespace std;

// Base class DRUG
class DRUG {
protected:
    string category;
    string date_of_manufacture;
    string company_name;

public:
    void setDrugDetails(const string& cat, const string& date, const string& comp) {
        category = cat;
        date_of_manufacture = date;
        company_name = comp;
    }

    void getDrugDetails() const {
        cout << "Category: " << category << endl;
        cout << "Date of Manufacture: " << date_of_manufacture << endl;
        cout << "Company Name: " << company_name << endl;
    }
};

// Derived class TABLET
class TABLET : public DRUG {
protected:
    string tablet_name;
    float price;

public:
    void setTabletDetails(const string& name, float p) {
        tablet_name = name;
        price = p;
    }

    void getTabletDetails() const {
        cout << "Tablet Name: " << tablet_name << endl;
        cout << "Price: " << price << " INR" << endl;
    }
};

// Derived class PainReliever
class PainReliever : public TABLET {
private:
    int dosage_units;
    string side_effects;
    int use_within_days;

public:
    void setPainRelieverDetails(int dosage, const string& sideEff, int useDays) {
        dosage_units = dosage;
        side_effects = sideEff;
        use_within_days = useDays;
    }

    void getPainRelieverDetails() const {
        cout << "Dosage Units: " << dosage_units << endl;
        cout << "Side Effects: " << side_effects << endl;
        cout << "Use Within (days): " << use_within_days << endl;
    }

    // To display all information
    void displayAllDetails() const {
        cout << "\n--- Pain Reliever Details ---\n";
        getDrugDetails();
        getTabletDetails();
        getPainRelieverDetails();
    }
};

// Main function
int main() {
    PainReliever p1;

    // Setting data
    p1.setDrugDetails("Stimulants", "2024-05-10", "HealPharma Ltd.");
    p1.setTabletDetails("ReliefMax", 75.5);
    p1.setPainRelieverDetails(2, "Drowsiness, Nausea", 15);

    // Displaying data
    p1.displayAllDetails();

    return 0;
}
