public class Applience extends Security_System implements Controllable {

    public static void main(String[] args) throws Exception {
       Controllable device1 = new Applience();
       Controllable device2 = new Light_System();
       device1.turnOn();
       device2.turnOff();
    }
    
    public class Light_System extends Applience{
        void light_turnOn(){}
        void light_turnOff(){}
        @Override
    public void turnOn() {
       System.out.println("The device has been opened"); 
    }

    @Override
    public void turnOff() {
        System.out.println("The device has been closed"); 
    }

    @Override
    public void isOpen() {

          }
    }

    public class Thermostat_System extends Applience {
        void low_heat(){}
        void high_heat(){}
        @Override
    public void turnOn() {
       System.out.println("The device has been opened"); 
    }

    @Override
    public void turnOff() {
        System.out.println("The device has been closed"); 
    }

    @Override
    public void isOpen() {

          }
    }

    @Override
    public void turnOn() {
       System.out.println("The device has been opened"); 
    }

    @Override
    public void turnOff() {
        System.out.println("The device has been closed"); 
    }

    @Override
    public void isOpen() {

          }
    
};


