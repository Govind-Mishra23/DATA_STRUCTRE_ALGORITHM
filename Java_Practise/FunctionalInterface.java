package DATA_STRUCTRE_ALGORITHM.Java_Practise;

interface factorial {
    int calculate(int n);
}

public class FunctionalInterface {
    public static void main(String[] args) {
        factorial f = (n) -> {
            int i = 1;
            int res = 1;
            while (i <= n) {
                res *= i;
                i++;  // ✅ Fix: increment i
            }
            return res;
        };

        int result = f.calculate(4);
        System.out.println("Factorial of 4 is: " + result);
    }
}
