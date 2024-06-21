/*
Program Name: Banking System Simulation

Description:
This program simulates a banking system using C++. It defines various types of bank accounts including 
Service Charge Checking Accounts, No Service Charge Checking Accounts, High Interest Checking Accounts, 
Savings Accounts, High Interest Savings Accounts, and Certificate of Deposit Accounts. Each account type 
is represented by a class that inherits from a base class BankAccount.

Classes and Objects Relationship:
- The program uses inheritance to represent a hierarchical relationship between the classes.
- The base class is BankAccount, which provides common properties and methods for all account types.
- The derived classes (ServiceChargeChecking, NoServiceChargeChecking, HighInterestChecking, SavingAccount, 
  HighInterestSaving, and CertificateOfDeposit) inherit from BankAccount and add specific features and behaviors.
- This relationship is called inheritance in object-oriented programming.

The inheritance hierarchy in this program is as follows:
  BankAccount
      |
      ├── ServiceChargeChecking
      ├── NoServiceChargeChecking
      ├── HighInterestChecking
      ├── SavingAccount
      ├── HighInterestSaving
      └── CertificateOfDeposit

The objects of each class are created and used to demonstrate the functionality of each account type.

The main function creates objects of each derived class and demonstrates how to set account information 
and generate a monthly statement for each account type.
*/

#include <iostream>
using namespace std;

// Abstract base class for all bank accounts
class BankAccount
{
protected:
    string account_number;
    string name_of_owner;
    double Balance;

public:
    // Default constructor
    BankAccount() {}

    // Parameterized constructor
    BankAccount(string account_no, string nameofowner, double balance)
        : account_number(account_no), name_of_owner(nameofowner), Balance(balance) {}

    void set_account_info(string ac_no, string nameofowner, double balance)
    {
        account_number = ac_no;
        name_of_owner = nameofowner;
        Balance = balance;
    }

    string get_account()
    {
        return account_number;
    }

    string get_name_of_owner()
    {
        return name_of_owner;
    }

    double get_balance()
    {
        return Balance;
    }

    // Pure virtual function to create a monthly statement
    virtual void createMonthlyStatement() = 0;
};

// Abstract class for checking accounts, inheriting from BankAccount
class CheckAccount : public BankAccount
{
public:
    // Default constructor
    CheckAccount() {}

    // Pure virtual function to write a check
    virtual void writeCheck() = 0;
};

// Concrete class for a checking account with service charges
class ServiceChargeChecking : public CheckAccount
{
protected:
    double service_charges;
    int limited_Number_of_Checks;

public:
    // Default constructor
    ServiceChargeChecking() {}

    // Parameterized constructor
    ServiceChargeChecking(double serviccharges, int limitnumberofaccount, string account_no, string nameofowner, double balance)
    {
        service_charges = serviccharges;
        limited_Number_of_Checks = limitnumberofaccount;
    }

    void set_service_provider(double serviceCharges, int limitedNumberOfCheck)
    {
        service_charges = serviceCharges;
        limited_Number_of_Checks = limitedNumberOfCheck;
    }

    double get_service_charges()
    {
        return service_charges;
    }

    int get_limited_number_of_check()
    {
        return limited_Number_of_Checks;
    }

    // Concrete implementation of writeCheck
    void writeCheck()
    {
        // Placeholder logic for writing a check
        cout << "Writing a check." << endl;
    }

    // Placeholder logic for deducting monthly statement
    void deductMonthlyStatement()
    {
        cout << "Deducting monthly statement." << endl;
    }

    // Placeholder logic for creating a monthly statement
    void createMonthlyStatement()
    {
        cout << " -- Creating monthly statement -- " << endl;
        cout << "Name: " << get_name_of_owner() << endl;
        cout << "Account number: " << get_account() << endl;
        cout << "Current Balance: " << get_balance() << endl;
    }
};

// Concrete class for a checking account with no service charges
class NoServiceChargeChecking : public CheckAccount
{
protected:
    int interest_rate;
    double minimum_balance;

public:
    // Default constructor
    NoServiceChargeChecking() {}

    // Parameterized constructor
    NoServiceChargeChecking(int interestrate, double minimumbalance, string account_no, string nameofowner, double balance)
    {
        interest_rate = interestrate;
        minimum_balance = minimumbalance;
    }

    void set_balance(int interestRate)
    {
        interest_rate = interestRate;
    }
    void set_interest(double minimumBalance)
    {
        minimum_balance = minimumBalance;
    }

    int get_interest_rate()
    {
        return interest_rate;
    }

    double get_minimum_balance()
    {
        return minimum_balance;
    }

    // Concrete implementation of writeCheck
    void writeCheck()
    {
        // Placeholder logic for writing a check
        cout << "Writing a check." << endl;
    }

    // Placeholder logic for creating a monthly statement
    void createMonthlyStatement()
    {
        cout << " -- Creating monthly statement for no service check --" << endl;
        cout << "Name: " << get_name_of_owner() << endl;
        cout << "Account number: " << get_account() << endl;
        cout << "Current Balance: " << get_balance() << endl;
    }
};

// Concrete class for a checking account with high interest
class HighInterestChecking : public NoServiceChargeChecking
{
protected:
    double high_Interest_rate;
    double high_Minimum_Balance;

public:
    // Default constructor
    HighInterestChecking() {}

    // Parameterized constructor
    HighInterestChecking(double highInterestRate, double highMinimumBalance, string account_no, string nameofowner, double balance)
        : NoServiceChargeChecking(0, 0, account_no, nameofowner, balance), high_Interest_rate(highInterestRate), high_Minimum_Balance(highMinimumBalance) {}

    void set_highMinimumBalance(double highMinimumBalance)
    {

        high_Minimum_Balance = highMinimumBalance;
    }
    void set_high_interest_rate(double highInterestRate)
    {

        high_Interest_rate = highInterestRate;
    }

    double get_high_interest_rate()
    {
        return high_Interest_rate;
    }

    double get_high_minimum_balance()
    {
        return high_Minimum_Balance;
    }

    // Placeholder logic for creating a monthly statement for high-interest checking
    void createMonthlyStatement()
    {
        double interestRate = 0.75;
        double temp_balance = get_balance();

        cout << " -- Creating monthly statement for high-interest checking -- " << endl;
        cout << "Name: " << get_name_of_owner() << endl;
        cout << "Account number: " << get_account() << endl;
        cout << "Current Balance: " << get_balance() << endl;
        cout << "Interest rate: " << get_high_interest_rate() << endl;

        // calculating Interest Rate
        interestRate *= get_balance();
        interestRate = interestRate + temp_balance;
        cout << "Balance after Including Interest rate: " << interestRate << endl;
    }
};

// Concrete class for a savings account
class SavingAccount : public BankAccount
{
protected:
    double interest_rate;

public:
    // Default constructor
    SavingAccount() {}

    // Parameterized constructor
    SavingAccount(double interestrate, string account_no, string nameofowner, double balance)
        : BankAccount(account_no, nameofowner, balance), interest_rate(interestrate) {}

    // Getter and Setter
    void set_interest_rate(double interestRate)
    {
        interest_rate = interestRate;
    }

    double get_interest_rate()
    {
        return interest_rate;
    }

    // Placeholder logic for creating a monthly statement for savings account
    void createMonthlyStatement()
    {
        double interestRate = get_interest_rate();
        double temp_balance = get_balance();

        cout << " -- Creating monthly statement for savings account -- " << endl;
        cout << "Name: " << get_name_of_owner() << endl;
        cout << "Account number: " << get_account() << endl;
        cout << "Current Balance: " << get_balance() << endl;
        cout << "Interest rate: " << get_interest_rate() << endl;

        // calculating intererst rate
        interestRate *= get_balance();
        interestRate = interestRate + temp_balance;
        cout << "Balance after Including Interest rate: " << interestRate << endl;
    }
};

// Concrete class for a high-interest savings account
class HighInterestSaving : public SavingAccount
{
protected:
    double minimum_balance;

public:
    // Default constructor
    HighInterestSaving() {}

    // Parameterized constructor
    HighInterestSaving(double minimumbalance, string account_no, string nameofowner, double balance)
        : SavingAccount(0, account_no, nameofowner, balance), minimum_balance(minimumbalance) {}

    // Getter and Setter
    void set_minimum_balance(double minimumBalance)
    {
        minimum_balance = minimumBalance;
    }

    double get_minimum_balance()
    {
        return minimum_balance;
    }

    // Placeholder logic for creating a monthly statement for high-interest savings
    void createMonthlyStatement()
    {
        double interestRate = get_interest_rate();
        double temp_balance = get_balance();

        cout << " -- Creating monthly statement for high-interest savings -- " << endl;
        cout << "Name: " << get_name_of_owner() << endl;
        cout << "Account number: " << get_account() << endl;
        cout << "Current Balance: " << get_balance() << endl;
        cout << "Interest rate: " << get_interest_rate() << endl;
        cout << "Minimum balance: " << get_minimum_balance() << endl;

        // calculating Interest Rate
        interestRate *= get_balance();
        interestRate = interestRate + temp_balance;
        cout << "Balance after Including Interest rate: " << interestRate << endl;
    }
};

// Concrete class for a certificate of deposit account
class CertificateOfDeposit : public BankAccount
{
protected:
    double maturity_Months;
    double interest_Rate;
    int current_Cd_Month;

public:
    // Default constructor
    CertificateOfDeposit() {}

    //
    // Parameterized constructor
    CertificateOfDeposit(double maturityMonths, double interestrate, int currentcdmonth, string account_no, string nameofowner, double balance)
        : BankAccount(account_no, nameofowner, balance), maturity_Months(maturityMonths), interest_Rate(interestrate), current_Cd_Month(currentcdmonth) {}

    // Getter and Setter
    void set_maturity_interest_cd_month(double maturityMonth, double interestRate, int currentcdmonth)
    {
        maturity_Months = maturityMonth;
        interest_Rate = interestRate;
        current_Cd_Month = currentcdmonth;
    }

    double get_maturity_months()
    {
        return maturity_Months;
    }

    double get_interest_rate()
    {
        return interest_Rate;
    }

    int get_current_cd_month()
    {
        return current_Cd_Month;
    }

    // Placeholder logic for creating a monthly statement for certificate of deposit
    void createMonthlyStatement()
    {
        double interestRate = get_interest_rate();
        double temp_balance = get_balance();

        cout << "Creating monthly statement for certificate of deposit account." << endl;
        cout << "Account Number: " << get_account() << endl;
        cout << "Name of Owner: " << get_name_of_owner() << endl;
        cout << "Current Balance: " << get_balance() << endl;
        cout << "Interest Rate: " << get_interest_rate() << endl;
        cout << "Months to Maturity: " << get_maturity_months() << endl;
        cout << "Current CD Month: " << get_current_cd_month() << endl;

        // calculating Interest Rate
        interestRate *= get_balance();
        interestRate = interestRate + temp_balance;
        cout << "Balance after Including Interest rate: " << interestRate << endl;
    }
};

int main()
{
    // Example usage of the classes  ----  Test Sample

    // Service Charge Checking Account
    ServiceChargeChecking *serviceChargeAccount = new ServiceChargeChecking;
    serviceChargeAccount->set_account_info("123456", "John Doe", 1500.0);
    serviceChargeAccount->set_service_provider(5.0, 10);
    serviceChargeAccount->createMonthlyStatement();

    cout << "----------------------------------" << endl;

    // No Service Charge Checking Account
    NoServiceChargeChecking *noServiceChargeAccount = new NoServiceChargeChecking;
    noServiceChargeAccount->set_account_info("789012", "Jane Doe", 2000.0);
    noServiceChargeAccount->set_balance(1000.0);
    noServiceChargeAccount->set_interest(0.03);
    noServiceChargeAccount->createMonthlyStatement();

    cout << "----------------------------------" << endl;

    // High Interest Checking Account
    HighInterestChecking *highInterestAccount = new HighInterestChecking;
    highInterestAccount->set_account_info("345678", "Bob Smith", 3000.0);
    highInterestAccount->set_highMinimumBalance(2000.0);
    highInterestAccount->createMonthlyStatement();

    cout << "----------------------------------" << endl;

    // Savings Account
    SavingAccount *savingAccount = new SavingAccount;
    savingAccount->set_account_info("901234", "Alice Johnson", 5000.0);
    savingAccount->set_interest_rate(0.04);
    savingAccount->createMonthlyStatement();

    cout << "----------------------------------" << endl;

    // High Interest Savings Account
    HighInterestSaving *highInterestSavingAccount = new HighInterestSaving;
    highInterestSavingAccount->set_account_info("567890", "Charlie Brown", 8000.0);
    highInterestSavingAccount->set_interest_rate(0.5);
    highInterestSavingAccount->set_minimum_balance(6000.0);
    highInterestSavingAccount->createMonthlyStatement();

    cout << "----------------------------------" << endl;

    // Certificate of Deposit Account
    CertificateOfDeposit *cdAccount = new CertificateOfDeposit;
    cdAccount->set_account_info("112233", "Diana Ross", 10000.0);
    cdAccount->set_maturity_interest_cd_month(12, 0.8, 3);
    cdAccount->createMonthlyStatement();

    return 0;
}
