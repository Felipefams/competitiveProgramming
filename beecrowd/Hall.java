import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Hall {

    static class People {

        private String name;
        private int data;

        public People() {

            this.name = null;
            this.data = 0;
        }

        public People(String name) {

            this.name = name;
            this.data = 0;
        }

        public String getName() {
            return this.name;
        }

        public int getData() {
            return this.data;
        }

        public void setName(String name) {
            this.name = name;
        }

        public void setData(int data) {
            this.data = data;
        }
    }

    static class PeopleList {

        private People[] array;
        private int n;

        public PeopleList() {
            this(10);
        }

        public PeopleList(int size) {

            array = new People[size];
            n = 0;
        }

        public void add(People people) throws Exception {

            if (n >= array.length)
                throw new Exception("Insert error: There is not enough space.");

            array[n] = people;
            n++;
        }

        public int length() {
            return this.n;
        }

        public People search(String name) {

            for (int i = 0; i < this.n; i++) {

                if (array[i].getName().compareTo(name) == 0)
                    return array[i];
            }
            return null;
        }

        public void printHall() {

            System.out.println("HALL OF MURDERERS");

            for (int i = 0; i < 26; i++) {

                for (int j = 0; j < this.n; j++) {

                    if (array[j].getData() > 0) {

                        if (array[j].getName().charAt(0) == i + 65)
                            System.out.println(array[j].getName() + " " + array[j].getData());
                    }
                }
            }
        }
    }

    public static void main(String[] args) throws Exception {

        String input;

        PeopleList peoples = new PeopleList(300);

        while (true) {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            input = br.readLine();

            if (input.compareTo("FIM") == 0)
                break;

            // ------------------------------------------- //

            String p[] = input.split(" ");
            People murder, murdered;

            // ------------------------------------------- //

            murder = peoples.search(p[0]);
            murdered = peoples.search(p[1]);

            if (murder == null) {

                murder = new People(p[0]);
                murder.setData(1);
                peoples.add(murder);
            } else if (murder.getData() != -1)
                murder.setData(murder.getData() + 1);

            if (murdered == null) {

                murdered = new People(p[1]);
                murdered.setData(-1);
                peoples.add(murdered);
            } else
                murdered.setData(-1);

            // ------------------------------------------- //
        }

        peoples.printHall();
    }
}