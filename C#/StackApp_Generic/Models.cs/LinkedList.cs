using System.Collections;
using System.Security.Cryptography.X509Certificates;
using StackApp.Contract;

namespace StackApp_Generic.Models;

public class LinkedListS<T> : IStack<T>
{
    private LinkedList<T>_collentions;
    public LinkedListS(){
           _collentions=new LinkedList<T>();           
    }
    public LinkedListS(IEnumerable<T> collection):this(){
       foreach (var item in collection)
       {
        push(item);
       }              
    }
    
    public T peek()
    {
        return _collentions.First.Value;
    }

    public T pop()
    {
        var temp = _collentions.First.Value;
        _collentions.RemoveFirst();
        return temp;
    }

    public void push(T item)
    {
        _collentions.AddFirst(item);
    }
}

public class T
{
}