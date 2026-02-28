public class StringMethod {
    public static void main(String[] args) {
        // String Method
        String name = "Programming";
        String name2 = "programming";

        // .length()
        System.out.println(name.length());

        // .charAt()
        System.out.println(name.charAt(5));

        // .equals()
        System.out.println(name.equals(name2));

        // .equalIgnoreCase()
        System.out.println(name.equalsIgnoreCase(name2));

        // .compareTo()
        System.out.println(name.compareTo(name2));

        // .compareToIgnoreCase()
        System.out.println(name.compareToIgnoreCase(name2));

        // substring()
        System.out.println(name.substring(4,6));

        // .toUpperCase()
        System.out.println(name.toUpperCase());

        // .toLowerCase()
        System.out.println(name.toLowerCase());

        // .trim()
        String name3 = "    Coder";
        System.out.println(name3.trim());

        // .replace()
        String name4 = "John Smith";
        System.out.println(name4.replace("Smith","Dev"));

        // .contains()
        System.out.println(name.contains("m"));

        // .startWith()
        System.out.println(name.startsWith("P"));

        // .endsWith()
        System.out.println(name.endsWith("r"));

        // .isEmpty()
        String name5 = "";
        System.out.println(name5.isEmpty());

        // .isBlank()
        String name6 = " ";
        System.out.println(name6.isBlank());

        // .indexOf()
        System.out.println(name.indexOf("m"));

        // .lastIndexOf()
        System.out.println(name.lastIndexOf("m"));
    }
}
