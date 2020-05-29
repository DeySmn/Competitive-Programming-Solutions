import java.util.*;
import java.text.*;

public class Solution {
    
    public static void main(String[] args) {
        /* Save input */
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();

        /* Create custom Locale for India - I used the "IANA Language Subtag Registry" to find India's country code 
    or https://www.oracle.com/java/technologies/javase/jdk8-jre8-suported-locales.html
refer to locale codes here*/

        Locale indiaLocale = new Locale("en", "IN");

        /* Create NumberFormats using Locales */
        NumberFormat us     = NumberFormat.getCurrencyInstance(Locale.US);
        NumberFormat india  = NumberFormat.getCurrencyInstance(indiaLocale);
        NumberFormat china  = NumberFormat.getCurrencyInstance(Locale.CHINA);
        NumberFormat france = NumberFormat.getCurrencyInstance(Locale.FRANCE);

        /* Print output */        
        System.out.println("US: "     + us.format(payment));
        System.out.println("India: "  + india.format(payment));
        System.out.println("China: "  + china.format(payment));
        System.out.println("France: " + france.format(payment));
        
    }
}
