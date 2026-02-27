public class Operators {
    static void main(String[] args) {
        // Operators
        int n1 = 8;
        int n2 = 5;
        System.out.println("------ Arithmetic Operators ------");
        System.out.println(n1+n2);
        System.out.println(n1-n2);
        System.out.println(n1*n2);
        System.out.println(n1/n2);
        System.out.println(n1%n2);

        System.out.println("------ Relational Operators ------");
        System.out.println(5 == 5);
        System.out.println(5 != 4);
        System.out.println(5 < 6);
        System.out.println(5 <= 6);
        System.out.println(5 > 4);
        System.out.println(5 >= 4);

        System.out.println("------ Logical Operators ------");
        System.out.println((5 > 4) && (5 < 6));
        System.out.println((5 > 4) || (5 > 6));
        System.out.println(!(5<4));

        System.out.println("------ Assignment Operators ------");
        System.out.println(n1 = 10);
        System.out.println(n1 += 10);
        System.out.println(n1 -= 10);
        System.out.println(n1 *= 10);
        System.out.println(n1 /= 10);
        System.out.println(n1 %= 10);


        System.out.println("------ Unary Operators ------");
        System.out.println(n1++);
        System.out.println(n2--);






        System.out.println("------ Ternary Operators ------");
        int max = (5 > 4)? 5 : 4;
        System.out.println(max);


        System.out.println("------ Bitwise = Operators ------");
        int a = 5;
        System.out.println(Integer.toBinaryString(a));

        // &
        System.out.println(5 & 4);

        // |
        System.out.println(5 | 4);

        // ^
        System.out.println(5 ^ 4);

        // ~
        System.out.println(~ 5);

        // <<
        System.out.println(5<<1);

        // >>
        System.out.println(5>>1);

        // unsigned right shift >>>
        System.out.println(-5>>>1);



    }
}
