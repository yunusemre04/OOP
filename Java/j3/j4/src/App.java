public class App {
    public static void main(String[] args) throws Exception {
       System.out.println(Math.add(6,20));
       System.out.println(Math.subtract(6,20));
       System.out.println(Math.multiply(6,20));
       System.out.println(Math.divide(6,20));
    }
    public class Math{
        public static double add(double a,double b){
            return a+b;
        }
        public static double subtract(double a,double b){
            return a-b;
        }
        public static double multiply(double a,double b){
            return a*b;
        }
        public static double divide(double a,double b){
            return a/b;
        }
        
    }
}
