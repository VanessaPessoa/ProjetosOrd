/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package huffman;

/**
 *
 * @author MCC04
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Leitura arq = new Leitura();
        int freq[] = arq.ler();
        Node[] nodes = new Node[arq.getCont()];
        int cont = 0;
        for(int i = 0; i < 256; i++){
            if(freq[i] != 0){
                nodes[cont++] = new Node(freq[i], (char)i);
            }
        }
        Huffman huffman = new Huffman(freq, nodes);
        Node raiz = huffman.doHuffman();
        String teste = "";
        huffman.printTree(teste, raiz, "");
    }
    
}
