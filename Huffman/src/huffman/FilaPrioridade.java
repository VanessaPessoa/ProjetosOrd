package huffman;

public class FilaPrioridade {

    private Node[] lista;
    private int size;

    public FilaPrioridade() {
        size = 0;
    }

    public FilaPrioridade(Node[] lista) {
        this.lista = lista;
        this.size = this.lista.length;
    }

    public void heap(int i) {
        int esq = 2 * i + 1;
        int dir = 2 * i + 2;
        int menor = i;

        if (esq <= size && lista[esq].getFreq() < lista[menor].getFreq()) {
            menor = esq;
        } else {
            menor = i;
        }
        if (dir <= size && lista[dir].getFreq() < lista[menor].getFreq()) {
            menor = dir;
        }
        if (menor != i) {
            troca(i, menor);
            heap(menor);
        }
    }

    public void troca(int i, int j) {
        Node aux = lista[i];
        lista[i] = lista[j];
        lista[j] = aux;
    }

    public void build_heap() {
        for (int i = size / 2; i > 0; i--) {
            heap(i);
        }
    }

    public Node minimun() {
        return lista[0];
    }

    public Node extractMin() {
        Node aux = lista[0];
        troca(0, size - 1);
        size--;
        heap(0);
        return aux;
    }
    
   public int getPai(int i){
       return i/2;
   }
    
    public void decrease(int i,Node freq) {
        if (freq.getFreq() < lista[i].getFreq()) {
            return;
        }

        while (i > 1 && lista[i / 2].getFreq() > lista[i].getFreq()) {
            troca(i, getPai(i));
            i = getPai(i);
        }
    }

    public void insert(Node f){
        ++size;
        lista[size].setFreq(99999999);
        decrease(size, f);       
    }
    
    public int getSize() {
        return size;
    }

    public void setSize(int size) {
        this.size = size;
    }
    
}
