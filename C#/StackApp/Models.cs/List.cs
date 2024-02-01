using StackApp.Contract;


public class ListStack : IStack
{
    
   private List<Object>_collection;
   
   ListStack(){
   _collection=new List<Object>();
   }
    private int last_index=>_collection.Count-1;
    public object peek()
    {
      return _collection[last_index];
    }

    public object pop()
    {
        Object temp = _collection[last_index];
        _collection.RemoveAt(last_index);
        return temp;
        
    }

    public void push(object item)
    {
        _collection.Add(last_index);

    }
}