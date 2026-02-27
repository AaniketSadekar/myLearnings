public class Loops {
    static void main(String[] args) {
        System.out.println("------ Loops ------");

        System.out.println("------ for Loop ------");
        for(int i=1;i<=10;i++){
            System.out.print(i+" ");
        }

        System.out.println();

        System.out.println("------ while Loop ------");
        int i = 1;
        while(i<=10){
            System.out.print(i+" ");
            i++;
        }

        System.out.println();

        System.out.println("------ do-while Loop ------");
        int n = 11;
        do{
            System.out.print(n+" ");
        }
        while(n<=10);

        System.out.println();

        System.out.println("------ break ------");
        for(int x=1;x<=10;x++){
            if(x==6){
                break;
            }
            System.out.print(x+" ");
        }


        System.out.println();

        System.out.println("------ continue ------");
        for(int y=1;y<=10;y++){
            if(y%2!=0){
                continue;
            }
            System.out.print(y+" ");
        }
    }
}
