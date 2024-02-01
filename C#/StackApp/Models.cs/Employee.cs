public class Employee
{
    public Employee(string firstname, string lastname, int salary)
    {
        Firstname = firstname;
        Lastname = lastname;
        Salary = salary;
    }

  public String Firstname { get; set; }="default";
  public String Lastname { get; set; } ="default lastname";

  public Decimal Salary { get; set; }=0;

    public override string ToString()=> Firstname +" "+ Lastname;
 /* public override string ToString(){
    return string.ConCat(Firstname," ",Lastname);
 }*/

}