/**
 *
 * @author Vanessa Pessoa
 */
public class FilaPrioridade {
    private final int infinito = 214748364;
    private Vertice [] vertices;
    private int tamanho;

    public FilaPrioridade(Vertice[] vertices) {
        this.vertices = vertices;
        this.tamanho = vertices.length;
    }
    
    public FilaPrioridade(){
        this.tamanho = 0;
    }
    
    public void troca( Vertice v1, Vertice v2){
        Vertice aux = v1;
        vertices[v1.getId()] = v2;
        vertices[v2.getId()]= aux;
    }
    
    public void troca( int v1, int v2){
        Vertice aux = vertices[v1];
        vertices[v1] = vertices[v2];
        vertices[v2] = aux;
    }
       
    public void max_Heapify(Vertice v ){
        int i = v.getDistancia();
        int esquerdo = 2*i + 1;
        int direito = 2*i + 2;
        int menor = i;
        if(esquerdo <= tamanho && vertices[esquerdo].getDistancia() < vertices[menor].getDistancia()){
            menor = esquerdo;
        }else{
            menor = i;
        }if(direito <= tamanho && vertices[direito].getDistancia() < vertices[menor].getDistancia()){
            menor = esquerdo;
        }
        
        if(menor != i){
            troca(i, menor);
            max_Heapify(vertices[menor]);
        }
        indexHeap();
    }
    
    public void buildHeap(){
       for(int i = tamanho/2; i >0; i --){
           max_Heapify(vertices[i]);
       }
    }
    
    public Vertice minimum(){
        return vertices[0];
    }
    
    public Vertice extractMin(){
        Vertice aux = vertices[0];
        troca(0,tamanho-1);
        tamanho--;
        max_Heapify(vertices[0]);
        return aux;
    }
    
    public void decrease(int  v, int distancia){
        if(distancia < vertices[v].getDistancia()){
            return;
        }
        vertices[v].setDistancia(distancia);
        while(v > 1 && vertices[v/2].getDistancia() > vertices[v].getDistancia()){
           troca(v, v/2);
           v = v/2;
        }
    }
    
    public void insert(int distancia){
        ++tamanho;
        vertices[tamanho].setDistancia(infinito);
        decrease(tamanho, distancia);
    }

    public boolean vazio(){
        return tamanho == 0;
    }
    
    public Vertice[] getVertices() {
        return vertices;
    }

    public int getTamanho() {
        return tamanho;
    }
    
    public void indexHeap(){
        for(int i = 0; i < vertices.length; i++){
            vertices[i].setIdHeap(i);
        }
    }
}
