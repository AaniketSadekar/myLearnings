public class DataTypes {
    public static void main(String[] args) {
        // Data Types
        // ------ Primitive Data Types ------
        System.out.println("==== byte Range ====");
        System.out.println(Byte.MIN_VALUE);
        System.out.println(Byte.MAX_VALUE);

        System.out.println("==== short Range ====");
        System.out.println(Short.MIN_VALUE);
        System.out.println(Short.MAX_VALUE);

        System.out.println("==== int Range ====");
        System.out.println(Integer.MIN_VALUE);
        System.out.println(Integer.MAX_VALUE);

        System.out.println("==== Long Range ====");
        System.out.println(Long.MIN_VALUE);
        System.out.println(Long.MAX_VALUE);

        System.out.println();

        // ------ byte ------
        byte b = 100;
        System.out.println("Byte Size is: "+Byte.BYTES +" byte");

        // ------ short ------
        short s = 30000;
        System.out.println("Short Size is: "+Short.BYTES +" bytes");

        // ------ integer ------
        int i = 100000;
        System.out.println("Integer Size is: "+Integer.BYTES +" bytes");

        // ------ long ------
        long l = 10000000000000L;
        System.out.println("Long Size is: "+Long.BYTES +" bytes");

        // ------ float ------
        float f = 3.14f;
        System.out.println("Float Size is: "+Float.BYTES +" bytes");

        // ------ double ------
        double d = 3.14159265359;
        System.out.println("Double Size is: "+Double.BYTES +" bytes");

        // ------ char ------
        char  c = 'a';
        System.out.println("Char Size is: "+Character.BYTES +" bytes");

        // ------ boolean ------
        boolean flag = true;
        System.out.println("Boolean Size is: "+flag + " bit");

        // ------ Non-Primitive Data Types ------

        // ------ String ------
        String str = "Hello, Java";
        System.out.println("String : " + str);
    }
}
