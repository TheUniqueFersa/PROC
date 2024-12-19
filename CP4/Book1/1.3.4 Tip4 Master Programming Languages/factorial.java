import java.util.Scanner;
import java.math.BigInteger;
class Main{
    public static void main(String[] args){
        BigInteger fac = BigInteger.ONE;
        for(int i = 2; i <= 40; i++){
            fac = fac.multiply(BigInteger.valueOf(i)); //it is important to use BigInteger.valueOf() to convert int to BigInteger
        }
        System.out.println(fac);
    }
}