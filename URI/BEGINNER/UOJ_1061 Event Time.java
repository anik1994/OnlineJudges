import java.io.*;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        //input starting time
        String str1 = br.readLine();
        String str2 = br.readLine();

        String tokens[] = str1.split(" ");
        String tokens2[] = str2.split(" : ");

        int startDay = Integer.parseInt(tokens[1]);
        int startHr = Integer.parseInt(tokens2[0]);
        int startMin = Integer.parseInt(tokens2[1]);
        int startSec = Integer.parseInt(tokens2[2]);

        //input ending time
        String str3 = br.readLine();
        String str4 = br.readLine();

        String tokens3[] = str3.split(" ");
        String tokens4[] = str4.split(" : ");

        int endDay = Integer.parseInt(tokens3[1]);
        int endHr = Integer.parseInt(tokens4[0]);
        int endMin = Integer.parseInt(tokens4[1]);
        int endSec = Integer.parseInt(tokens4[2]);

        int totalDay = 0;
        int totalHr = 0;
        int totalMin = 0;
        int totalSec = 0;

        if (endSec >= startSec) {
            totalSec = endSec - startSec;
        } else {
            startMin++;
            totalSec = (60 + endSec) - startSec;
        }

        if (endMin >= startMin) {
            totalMin = endMin - startMin;
        } else {
            startHr++;
            totalMin = (60 + endMin) - startMin;
        }

        if (endHr >= startHr) {
            totalHr = endHr - startHr;
        } else {
            startDay++;
            totalHr = (24 + endHr) - startHr;
        }

        if (endDay >= startDay) {
            totalDay = endDay - startDay;
        } else {
            totalDay = (30 + endDay) - startDay;
        }
        System.out.println(totalDay + " dia(s)");
        System.out.println(totalHr + " hora(s)");
        System.out.println(totalMin + " minuto(s)");
        System.out.println(totalSec + " segundo(s)");
 
    }
 
}