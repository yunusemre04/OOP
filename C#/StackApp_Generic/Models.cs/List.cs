using StackApp.Contract;
using StackApp_Generic.Models;


public class ListStack<T>: IStack<T>
{
    
   private List<T>_collection;
   
   ListStack(){
   _collection=new List<T>();
   }
    private int last_index=>_collection.Count-1;
    public T peek()
    {
      return _collection[last_index];
    }

    public T pop()
    {
        T temp = _collection[last_index];
        _collection.RemoveAt(last_index);
        return temp;
        
    }

    public void push(T item)
    {
        _collection.Add(item);

    }
}