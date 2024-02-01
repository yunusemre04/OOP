using System.Collections;
using System.Security.Cryptography.X509Certificates;
using StackApp.Contract;

namespace StackApp.Models;

public class LinkedListS : IStack
{
    private LinkedList<Object>_collentions;
    public LinkedListS(){
           _collentions=new LinkedList<object>();           
    }
    public LinkedListS(IEnumerable collection):this(){
       foreach (var item in collection)
       {
        push(item);
       }              
    }
    
    public object peek()
    {
        return _collentions.First.Value;
    }

    public object pop()
    {
        var temp = _collentions.First.Value;
        _collentions.RemoveFirst();
        return temp;
    }

    public void push(object item)
    {
        _collentions.AddFirst(item);
    }
}