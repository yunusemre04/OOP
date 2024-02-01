public class Orchestra {
        private  Instrument[] instruments={new Guitar(),new Piano()};
        public void playall(){
            for (Instrument instrument : instruments) {
                instrument.play();
            }
        }
}
