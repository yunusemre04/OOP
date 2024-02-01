from datetime import datetime
class BaseProduct:
    def __init__(self,name="default",price=1,quantity=1):
      self._name=name
      self._price=price
      self._quantity=quantity
    
    @property
    def getname(self):
        if(8>len(self._name)>=3):return self._name
        else:print("range of the strings must be 3 to 8")
    
    @getname.setter
    def setname(self,value):
        self._name=value
    
    @property
    def getprice(self):
        if(self._price>0):
            return self._price
        else:print("price must be bigger than zero")
        
    
    @getprice.setter
    def setprice(self,value):
        self._price=value
    
    @property
    def getquantity(self):
        if(self._quantity>=1):
            return self._quantity
        else: print("quantity must be one or bigger than one")  
         
    @getquantity.setter
    def setquantity(self,value):
        self._quantity=value        
    
    def  __repr__(self)->str :
     return f"BaseProduct {self.getname}-{self.getprice}-{self.getquantity} - C.T:{datetime.now()}"
        
    def get_total_balance(self):
     return self._quantity*self._price 
 
class Product(BaseProduct):
    def __repr__(self) -> str:
        return f"Product({self._name}, {self._price}, {self._quantity},C.T:{datetime.now()}"


product1= Product("mehmet",50,65)
product2=Product()
print(product1)
print(product2)
      
