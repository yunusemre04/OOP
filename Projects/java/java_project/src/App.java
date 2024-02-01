public class App {
    public static void main(String[] args) {
        Light_System light = new Light_System();
        Thermostat_System thermostat = new Thermostat_System();
        Security_System securitySystem = new Security_System();
        light.turnOn();
        thermostat.turnOff();
        System.out.println(light.isOn());
        System.out.println(securitySystem.isOn());
    }
}
