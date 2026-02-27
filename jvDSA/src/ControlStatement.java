import java.lang.classfile.instruction.SwitchCase;

public class ControlStatement {
    static void main(String[] args) {
        System.out.println("------ Control Statement ------");
        int age = 19;

        System.out.println();

        System.out.println("------ if Statement ------");
        if(age>18){
            System.out.println("Adult");
        }

        System.out.println();

        System.out.println("------ if-else Statement ------");
        if(age>18){
            System.out.println("Adult");
        }
        else{
            System.out.println("Not Adult");
        }

        System.out.println();

        System.out.println("------ if-else-if Statement ------");
        if(age<13){
            System.out.println("Child");
        }
        else if(age<18){
            System.out.println("Teenager");
        }
        else{
            System.out.println("Adult");
        }

        System.out.println();

        System.out.println("------ nested if-else Statement ------");
        if(age<13){
            if(age<5){
                System.out.println("Baby");
            }
            else{
                System.out.println("Child");
            }
        }
        else if(age<18){
            System.out.println("Teenager");
        }
        else{
            System.out.println("Adult");
        }

        System.out.println();

        System.out.println("------ switch Statement ------");

        int day = 5;
        switch (day){
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
                break;
            case 5:
                System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
            default:
                System.out.println("Invalid Input");
        }


    }
}
