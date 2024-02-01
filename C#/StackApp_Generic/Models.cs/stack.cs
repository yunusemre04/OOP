using StackApp.Contract;
using StackApp_Generic.Models;

namespace StackApp.Models;


public class Stack<T> : IStack<T>
{   
    private IStack<T> _stack;
    public Stack(){
      _stack = new LinkedListS<T>();
    }
    public Stack(IEnumerable<T> collection): this(){
        foreach (var item in collection )
        {
             _stack.push(item);
        }
    }
    public T peek()
    {
       return _stack.peek();
    }

    public T pop()
    {
        return _stack.pop();

    }

    public void push(T item)
    {
        _stack.push(item);
    }
}
