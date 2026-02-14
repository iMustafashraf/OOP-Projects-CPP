#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ================= Class Address =================

class Address {
    private:
        string address;
        string type;
        string description;
    public:
        Address() : address("where is your house ?"), type("house location"), description("this is our employer house : ") {}
        Address(string p, string typ, string descrip);
        void setAddress(string newAddress);
        void setType(string AddressType);
        void setDescription(string AddressDescription);
        string get(); 
};

// ================= Class Email =================

class Email {
    private:
        string email;
        string type;
        string description;
    public:
        Email() : email("name@gmail.com"), type("gmail"), description("this email is for our employee : ") {}
        Email(string mail, string typ, string descrip);
        void setEmail(string newEmail);
        void setType(string EmailType);
        void setDescription(string EmailDescription);
        string get(); 
};

// ================= Class Phone =================

class Phone {
    private:
        int phone;
        string type;
        string description;
    public:
    Phone() : phone(01115007440), type("phone number"), description("this is a phone number for our employer : ") {}
    Phone(int ph, string typ, string descrip);
    void setPhone(int newPhone);
    void setType(string PhoneType);
    void setDescription(string PhoneDescription);
    int get(); 
};

// ================= Class User =================

struct UserInfo { 
    Address UserAddress;
    Phone UserPhone;
    Email UserEmail;
    UserInfo() : UserAddress("", "", ""), UserPhone(0, "", ""), UserEmail("", "", "") {}
};

class User {
    private:
        int id;
        string firstname;
        string lastname;
        bool gender; // male or female
        string city;
        string addedDate;
        UserInfo contacts; 
    public:
    string getName() { 
            return firstname + " " + lastname; // يرجع الاسم الكامل
        }
    User () : id(001122), firstname("Firstname"), lastname("Lastname"), gender(true), city("Egypt, .."), addedDate("0 / 0 / 2026") {

    }
    User(
        int i, string first, string last, bool gen, string cty, string addDate
        ) ;
    void search(string searchfirstname, string searchlastname); 

    void setEmail(string mail);   
    void setAddress(string Address);  
    void setPhone(int Phony);
    void setName(string NewfirstName, string NewlastName);

    void show(); 
};
// ================= Class Contact =================

class Contact {
    private: 
        vector <User> users = {};
    public:
        Contact();

        void AddUser(User &UserToAdd); 
        void EditUser(User &UserToEdit); 
        void DeleteUser(User &UserToDelete); 

        int CountUser();
        void SearchUser(User &UserToSearchFor); 

        void ShowAll();
};

