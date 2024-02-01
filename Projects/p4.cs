using System;
using System.Collections.Generic;
public static class Account{
    protected string accountNumber;
    protected string owner;
    protected double balance;
    public Account(string accountNumber, string owner, double balance){
         this.accountNumber=accountNumber;
         this.owner=owner;
         this.balance=balance;
    }
    public void deposit(double amount){
        balance+=amount;
        Console.WriteLine($"{amount} has been added to your balance");
      }

    public void withdraw(double amount){
        if (amount > balance)
        {
            Console.WriteLine("Your balance is not enough");
        }
        else
        {
            balance -= amount;
            Console.WriteLine($"${amount} has been withdraw");
        }
    }
    public void viewBalance(){
        Console.WriteLine($"Owner name: {owner}");
        Console.WriteLine($"Account Number: {accountNumber}");
        Console.WriteLine($"Balance: ${balance}");
    }
    public static List<Account> Accounts = new List<Account>();
}



public static class Bank{ 
    public static void displayBankInfo(){
            Console.WriteLine("Bank information is ...");
    }
}
public class Program{ 
public static void Main(){
        Account account1 = new Account("123456", "Ahmet Gediz", 1000);
        Account account2 = new Account("789012", "Mehmet Acar", 500);

        
        Account.Accounts.Add(account1);
        Account.Accounts.Add(account2);

       
        account1.deposit(300);
        account2.withdraw(250);

        Bank.displayBankInfo();
        account1.viewBalance();
        account2.viewBalance();
}
}