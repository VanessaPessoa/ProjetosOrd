package huffman;

public class Huffman {

    private FilaPrioridade heap;
    private int[] freq;
    private Node[] nodes;

    public Huffman(int[] freq, Node[] nodes) {
        this.freq = freq;
        this.nodes = nodes;
        heap = new FilaPrioridade(this.nodes);
    }

    public Node doHuffman() {
        Node pai = new Node();

        while (heap.getSize() > 1) {
            Node esquerdo = heap.extractMin();
            Node direito = heap.extractMin();
            pai = new Node(direito.getFreq() + esquerdo.getFreq(), '-');

            pai.setEsq(esquerdo);
            pai.setDir(direito);

            heap.insert(pai);
        }
        return pai;
    }

    public void printTree(String text, Node node, String bit) {
        if (node.isLeaf()) {
            text = " -> " + bit;
            System.out.println(node.getSimbolo()+ text);
            return;
        }
        printTree(text, node.getEsq(), bit + "0");
        printTree(text, node.getDir(), bit + "1");
    }
}
