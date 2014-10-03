// value of root 2


import java.math.BigDecimal;
import java.math.MathContext;
import java.math.BigInteger;

public class SQRT2 {
 
    public static void main(String[] args) {
        BigInteger H = BigInteger.valueOf(100);
        BigInteger TEN = BigInteger.valueOf(10);
        BigInteger TOW = BigInteger.valueOf(2);
 
        BigInteger x = BigInteger.valueOf(2);
        BigInteger s = BigInteger.ONE;
 
        StringBuilder sb = new StringBuilder();
        for(int i=0, len=0; len < 23900;) {
            if(x.compareTo(s) < 1) {
                x = x.multiply(H);
                sb.append(i);
                len++;
                i = 0;
                s = s.subtract(BigInteger.ONE).multiply(TEN).add(BigInteger.ONE);
            } else {
                x = x.subtract(s);
                i++;
                s = s.add(TOW);
            }
        }
        System.out.println("1."+(sb.delete(0, 1)).toString());
    }
}
