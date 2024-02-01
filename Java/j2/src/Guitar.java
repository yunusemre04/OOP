public class Guitar implements Instrument,ElectronicInstruments{
    @Override
    public void play(){
        System.out.println("The Guitar using...");
       
    }
    public void setguitar(){
        System.out.println("Guitar has been set");
    }
    @Override
    public void tune() {
        System.out.println("The Guitar has been tuned");
        
    }
}
