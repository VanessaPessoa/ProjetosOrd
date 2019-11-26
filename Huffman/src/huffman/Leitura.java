package huffman;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Leitura {
    private int[] freq;
    private int cont;
    
    public Leitura(){
        freq = new int[256];
        for(int c: freq){
            c = 0;
        }
    }
    
    public int[] ler(){
       File arq = new File("C:\\Users\\MCC04\\Documents\\NetBeansProjects\\Huffman");
        try {
            FileInputStream arquivo = new FileInputStream(arq);
            byte caracter;
            caracter = (byte) arquivo.read();
            int aux;
            cont = 0;
            while(caracter != -1){
                aux = caracter;
                if(freq[aux] < 1){
                    cont++;                    
                }
                freq[aux]++;
            }
            
            
            
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Leitura.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(Leitura.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        return freq;
    }
    
    public int getCont(){
        return cont;
    }
    
}
