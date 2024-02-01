
using StackApp.Models;

var array = new int[] {6,9,5};

var stack_numbers= new LinkedListS(array);
Console.WriteLine(stack_numbers.peek());

var cities =new List<string>(){
 "ankara","istanbul", "sakarya"
};
var stack_cities= new LinkedListS(cities);
Console.WriteLine(stack_cities.peek());