// digits of e


import java.math.BigDecimal;
import java.math.MathContext;
 
public class Main {
    public static void main(String[] args) {
        MathContext P = new MathContext(1550);
        BigDecimal MAX = BigDecimal.valueOf(750);
        BigDecimal sum = BigDecimal.ONE;
        for(BigDecimal n=BigDecimal.ONE; n.compareTo(MAX) < 1; n=n.add(BigDecimal.ONE))
            sum = sum.add(BigDecimal.ONE.divide(fact(n), P));
        System.out.println(sum.toString());
    }
 
    static BigDecimal fact(BigDecimal n) {
        BigDecimal sum = BigDecimal.ONE;
        for(BigDecimal i=BigDecimal.ONE; i.compareTo(n) < 1; i=i.add(BigDecimal.ONE))
            sum = sum.multiply(i);
        return sum;
    }
} 
