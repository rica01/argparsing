public class Argparsing {

    public static void main(String[] argv) {

        CliArgs cliArgs = new CliArgs(argv);

        double A = cliArgs.switchDoubleValue("-A");
        double B = cliArgs.switchDoubleValue("-B");
        String Op = cliArgs.switchValue("-Op");
       
        double result = 0.0;
        switch(Op)
        {
            case "+":
                result = A + B;
                break;
            case "/":
                result = A / B;
                break;
        }

        System.out.println(result);
    }
}
