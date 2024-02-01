public class App {
    public static void main(String[] args) throws Exception {
       Guitar guitar= new Guitar();
       Piano piano= new Piano();
       
       guitar.play();
       piano.play();
       guitar.setguitar();
       guitar.tune();
       piano.press();
       System.out.println("--");
       Orchestra orchestra = new Orchestra();
       orchestra.playall();

    }
}
