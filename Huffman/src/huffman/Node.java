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
public class Node {
    private int freq; 
    private int lado;
    private char simbolo;
    private Node pai;
    private Node esq;
    private Node dir;
    
    public Node(){
        
    }
    
    public Node(int freq, char simbolo){
        this.freq = freq;
        this.simbolo = simbolo;
        this.esq = null;
        this.dir = null;
    }

    public Node(int freq, char simbolo, Node pai, Node esq, Node dir) {
        this.freq = freq;
        this.simbolo = simbolo;
        this.pai = pai;
        this.esq = esq;
        this.dir = dir;
    }

    public int getFreq() {
        return freq;
    }

    public void setFreq(int freq) {
        this.freq = freq;
    }

    public int getLado() {
        return lado;
    }

    public void setLado(int lado) {
        this.lado = lado;
    }

    public char getSimbolo() {
        return simbolo;
    }

    public void setSimbolo(char simbolo) {
        this.simbolo = simbolo;
    }

    public Node getPai() {
        return pai;
    }

    public void setPai(Node pai) {
        this.pai = pai;
    }

    public Node getEsq() {
        return esq;
    }

    public void setEsq(Node esq) {
        this.esq = esq;
    }

    public Node getDir() {
        return dir;
    }

    public void setDir(Node dir) {
        this.dir = dir;
    }
    
    public boolean isLeaf(){
        return esq == null && dir == null;
    }
}
