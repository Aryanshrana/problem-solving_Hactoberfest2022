public class ShellSorteerder implements Sorteerder {
    Tabel gapGrootes;
    public ShellSorteerder(int[] ints) {
        gapGrootes = new Tabel(ints);
    }

    @Override
    public void sorteer(Tabel tabel) {
        //System.out.println(tabel);
        shellSort(tabel);
        //System.out.println(tabel);
        //insertionSort(tabel,0,1);
        //System.out.println(tabel);
    }

    public void shellSort(Tabel tabel) {
        //for (int k = 0; k< gapGrootes.size(); k++) {
        for (int k = gapGrootes.size()-1; k > -1; k--) {
            int gap = gapGrootes.get(k);
            for (int i = 0; i < gap; i++) {
                insertionSort(tabel, i, gap);
            }
        }
    }

    public void insertionSort(Tabel tabel,int start, int step) {
        for (int i = start; i < tabel.size(); i+= step) {
            int j = i;
            while (j > step-1 && tabel.get(j) < tabel.get(j - step)) {
                tabel.swap(j, j - step);
                j -= step;
            }
        }
    }
}
