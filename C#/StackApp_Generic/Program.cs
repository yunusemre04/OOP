
using StackApp_Generic.Models;

var array = new int[] {6,9,5};

var stack_numbers= new StackApp.Models.Stack<int>(array);
Console.WriteLine(stack_numbers.peek());

var stack_cities =new StackApp.Models.Stack<string>(new List<string>(){
 "ankara","istanbul", "sakarya"
});
Console.WriteLine(stack_cities.peek());
var stack_employees=new StackApp.Models.Stack<Employee>(new Employee[]{
    new Employee("Kerem","Deniz",85),
    new Employee("Mehmet","Ekin ",62),
});

Console.WriteLine(stack_employees.peek());