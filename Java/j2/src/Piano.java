public class Piano implements Instrument,KeyboardInstruments {

    @Override
    public void play() {
        System.out.println("The piano using...");
    }

    @Override
    public void press() {
        System.out.println("has been pressed");
    }
    
}
