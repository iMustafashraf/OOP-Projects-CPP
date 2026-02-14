#include <iostream>
#include "ContactManager.h"
using namespace std;

int main () {
        cout << "================= Developers Contact ===================\n";
        // FrontEnd-Developer
    User FrontDeveloper(1122, "Ahmed", "Kamal", true, "Aswan", "2026-02-14");
    FrontDeveloper.setPhone(1117);
    FrontDeveloper.setEmail("mostafa@gmail.com");

        // Backend developer
    User BackendDeveloper(1123, "Mostafa", "Mahmoud", true, "Cairo", "2026-02-14");
    BackendDeveloper.setPhone(2228);
    BackendDeveloper.setEmail("mostafa@back.com");

        // 2. Security Engineer
    User SecurityEngineer(1124, "Omar", "Ali", true, "Alex", "2026-02-14");
    SecurityEngineer.setPhone(3339);
    SecurityEngineer.setEmail("omar@security.com");

        // 3. AI Engineer
    User AiEngineer(1125, "Samy", "Hassan", true, "Giza", "2026-02-14");
    AiEngineer.setPhone(4440);
    AiEngineer.setEmail("samy@ai.com");
    FrontDeveloper.show();
    BackendDeveloper.show();
    SecurityEngineer.show();
    AiEngineer.show();

    cout << "\n\n----------------- or show by one code ------------------\n\n";


    Contact Developer;
    Developer.AddUser(FrontDeveloper);
    Developer.AddUser(BackendDeveloper);
    Developer.AddUser(SecurityEngineer);
    Developer.AddUser(AiEngineer);
    
    Developer.ShowAll();
    // Developer.EditUser(FrontDeveloper); 
    // Developer.DeleteUser(FrontDeveloper); 
    
    // ------------------------- antoher features "next versions guy hehehe"

    // Phone CompanyCar, Secratery, DoorGaurd, TeamManagersOffice;
    // here you can put attributes for each of these persons, because they may not be put in any contact or system but it's essential to keet contact with them

    // Email ContactCompanyMail; // etc..
    // Address firstStoreHouse, SecondStoreHouse, NewYorkDeliveryCenter; // etc

    // here you can make another Contact for, managers, gardners, gaurds..etc
}

