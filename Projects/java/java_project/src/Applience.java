public class Applience implements Controllable{

    @Override
    public void turnOn() {
       System.out.println("The device has been turn on");
    }

    @Override
    public void turnOff() {
        System.out.println("The device has been turn off");
    }

    @Override
    public boolean isOn() {
       return true;
    }
    
}