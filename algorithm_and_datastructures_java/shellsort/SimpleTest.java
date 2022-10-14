import org.junit.Assert;
import org.junit.Test;

import javax.sound.midi.Sequence;
import java.util.Arrays;

public class SimpleTest {

    @Test
    public void test1() {
        int[] invoer = new int[]{78,34,29,85,56,24,93,52,94,54,36,73,17,67};
        Tabel invoerTabel = new Tabel(invoer);

        int[] gesorteerdeInvoer = invoer.clone();
        Arrays.sort(gesorteerdeInvoer);
        Tabel gesorteerdeTabel = new Tabel(gesorteerdeInvoer);

        ShellSorteerder shellSorteerder = new ShellSorteerder(new int[]{1,3,7});
        shellSorteerder.sorteer(invoerTabel);

        Assert.assertEquals("De invoerrij werd niet correct stijgend gesorteerd ", gesorteerdeTabel, invoerTabel);
    }

    @Test
    public void test2() {
        int[] invoer = new int[]{65,23,28,63,29,45,12,25,49,42,82,37,71,19};
        Tabel invoerTabel = new Tabel(invoer);

        int[] gesorteerdeInvoer = invoer.clone();
        Arrays.sort(gesorteerdeInvoer);
        Tabel gesorteerdeTabel = new Tabel(gesorteerdeInvoer);

        ShellSorteerder shellSorteerder = new ShellSorteerder(new int[]{1,2,4});
        shellSorteerder.sorteer(invoerTabel);

        Assert.assertEquals("De invoerrij werd niet correct stijgend gesorteerd ", gesorteerdeTabel, invoerTabel);
    }

    @Test
    public void test3() {
        int[] invoer = new int[]{45,98,7,15,1,897,44,25,1,99,48,555,3,78,988,115,465,91,44,8,15,4,39,48,98,14};
        Tabel invoerTabel = new Tabel(invoer);

        int[] gesorteerdeInvoer = invoer.clone();
        Arrays.sort(gesorteerdeInvoer);
        Tabel gesorteerdeTabel = new Tabel(gesorteerdeInvoer);

        ShellSorteerder shellSorteerder = new ShellSorteerder(new int[]{1,4,13});
        shellSorteerder.sorteer(invoerTabel);

        Assert.assertEquals("De invoerrij werd niet correct stijgend gesorteerd ", gesorteerdeTabel, invoerTabel);
    }

}
