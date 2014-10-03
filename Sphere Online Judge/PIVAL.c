// digits of PIE

import java.math.BigDecimal;
import java.math.MathContext;
 
 
public class Main {
 
    public static void main(String[] args) {
        MathContext P = new MathContext(270);
        BigDecimal TOW = BigDecimal.valueOf(2);
        BigDecimal FOUR = BigDecimal.valueOf(4);
 
        BigDecimal an = BigDecimal.ONE;
        BigDecimal a = BigDecimal.ONE;
        BigDecimal b = BigDecimal.ONE.divide(sqrt(TOW), P);
        BigDecimal t = BigDecimal.ONE.divide(FOUR, P);
        BigDecimal p = BigDecimal.ONE;
 
        for(int n=0; n<11; n++) {
            an = new BigDecimal(a.toString());
            a = a.add(b).divide(TOW, P);
            b = sqrt(an.multiply(b));
            t = t.subtract(p.multiply(an.subtract(a)).multiply(an.subtract(a)));
            p = TOW.multiply(p);
        }
        System.out.println((a.add(b)).multiply(a.add(b)).divide(FOUR.multiply(t), P));
    }
 
    static BigDecimal sqrt(BigDecimal x) {
        BigDecimal H = BigDecimal.valueOf(100);
        BigDecimal TEN = BigDecimal.valueOf(10);
        BigDecimal TOW = BigDecimal.valueOf(2);
        BigDecimal s = BigDecimal.ONE;
        StringBuilder sb = new StringBuilder();
        for(int i=0, len=0; len < 270;) {
            if(x.compareTo(s) < 1) {
                x = x.multiply(H);
                sb.append(i);
                len++;
                i = 0;
                s = s.subtract(BigDecimal.ONE).multiply(TEN).add(BigDecimal.ONE);
            } else {
                x = x.subtract(s);
                i++;
                s = s.add(TOW);
            }
        }
        return new BigDecimal(new StringBuilder().append(sb.substring(0, 1)).append(".").append(sb.delete(0, 1)).toString());
    }
}
