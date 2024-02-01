namespace StackApp.Contract;


public interface IStack<T>
 //where T :IComparable
 {

void push(T item);
T pop();

T peek();



}