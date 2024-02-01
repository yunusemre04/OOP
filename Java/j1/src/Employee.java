public class Employee implements Comparable {
   private String fullname;
   private double salary;

public String getFullname() {
    return fullname;
}

public void setFullname(String fullname) {
    this.fullname = fullname;
}

public double getSalary() {
    return salary;
}

public void setSalary(double salary) {
    this.salary = salary;
}

Employee(String fullname,double salary){
    this.fullname=fullname;
    this.salary=salary;
}
@Override
public String  toString(){
return fullname +" "+salary ;
}

@Override
public int compareTo(Object other) {
    if(other instanceof Employee){
        Employee emp =(Employee)other;
       // return this.getFullname().compareTo(emp.fullname);
       return (int)Math.round(this.getSalary()-emp.salary);
    }
    throw new UnsupportedOperationException("Unimplemented method 'compareTo'");
}

    

}


