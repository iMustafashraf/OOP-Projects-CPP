#include <iostream>
#include "ContactManager.h"
#include <string>
#include <vector>
using namespace std;

Contact::Contact() {
    
}

void Contact::AddUser(User &UserToAdd) {
    users.push_back(UserToAdd);
}
void Contact::EditUser(User &UserToEdit){
for(int i=0; i < users.size(); i++) {
        if(users.at(i).getName() == UserToEdit.getName()) {
            string first, last; 
            
            cout << "Editing: " << UserToEdit.getName() << "\n";
            cout << "Enter New First Name: ";
            cin >> first;
            cout << "Enter New Last Name: ";
            cin >> last;
            
            users.at(i).setName(first, last); 
            UserToEdit.setName(first, last); 

            cout << "Name updated successfully!\n";
            return;
        }
    }
    cout << "User not found!\n";
}
void Contact::DeleteUser(User &UserToDelete) {
    for(int i=0; i < users.size(); i++){
        if(users.at(i).getName() == UserToDelete.getName()) {
            users.erase(users.begin() + i);
            cout << "The User Deleted\n";
            return;
        }
    }
}

int Contact::CountUser() {
    return users.size();
}

void Contact::SearchUser(User &UserToSearchFor) {
    bool found = false;
    for(int i=0; i < users.size(); i++) {
        if(users.at(i).getName() == UserToSearchFor.getName()) {
            cout << "The User exists.\n";
            users.at(i).show(); 
            found = true;
            break;
        }
    }
    if(!found) cout << "The User doesn't exist.\n";
}

void Contact::ShowAll() {
    if(users.empty()) return;

    for(int i=0; i < users.size(); i++) {
        cout << "User #" << (i + 1) << ":\n";
        users.at(i).show(); 
        cout << "--------------------\n";
    }
}

// ================= Class User =================

User::User(int i = 001122, string first = "Firstname", string last = "Lastname", bool gen = true, string cty = "Egypt, ..", string addDate = "2026"){
    id = i;
    firstname = first;
    lastname = last;
    gender = gen;
    city = cty;
    addedDate = addDate;
}
void User::search(string searchfirstname, string searchlastname) {
    if(firstname == searchfirstname && lastname == searchlastname) {
        cout << "User Found!" << endl;
        show(); 
    } else {
        cout << "User Not Found." << endl;
    }
}
void User::setEmail(string mail){
        contacts.UserEmail.setEmail(mail); 
}
void User::setAddress(string Address){
        contacts.UserAddress.setAddress(Address);
}
void User::setPhone(int Phony){
    contacts.UserPhone.setPhone(Phony);
}

void User::setName(string NewfirstName, string NewlastName){
    firstname = NewfirstName;
    lastname = NewlastName;
}
void User::show(){
    cout << "ID: " << id << endl;
    cout << "Name: " << getName() << endl;
    cout << "City: " << city << " | Gender: " << (gender ? "Male" : "Female") << endl;
    cout << "Added Date: " << addedDate << endl;
    
    cout << "--- Contacts Info ---" << endl;
        cout << "  Email: " << contacts.UserEmail.get() << endl;
        cout << "  Phone: " << contacts.UserPhone.get() << endl;
        cout << "  Address: " << contacts.UserAddress.get() << endl;
        cout << "--------------------" << endl;
}

// ================= Class Phone =================

Phone::Phone(int ph, string typ, string descrip) {
    phone = ph;
    type = typ;
    description = descrip;
}

void Phone::setPhone(int newPhone) {
    phone = newPhone;
}

void Phone::setType(string PhoneType) {
    type = PhoneType;
}

void Phone::setDescription(string PhoneDescription) {
    description = PhoneDescription;
}

int Phone::get() {
    return phone;
}

// ================= Class Email =================

// Email.cpp
Email::Email(string mail, string typ, string descrip) {
    email = mail;
    type = typ;
    description = descrip;
}

void Email::setEmail(string newEmail) {
    email = newEmail;
}

void Email::setType(string EmailType) {
    type = EmailType;
}

void Email::setDescription(string EmailDescription) {
    description = EmailDescription;
}

string Email::get() {
    return email;
}

// ================= Class Address =================

Address::Address(string addr, string typ, string descrip) {
    address = addr;
    type = typ;
    description = descrip;
}

void Address::setAddress(string newAddress) {
    address = newAddress;
}

void Address::setType(string AddressType) {
    type = AddressType;
}

void Address::setDescription(string AddressDescription) {
    description = AddressDescription;
}

string Address::get() {
    return address;
}
