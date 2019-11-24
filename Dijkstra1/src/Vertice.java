/**
 *
 * @author Vanessa Pessoa
 */
public class Vertice {
    private int id;
    private int idHeap;
    private Vertice pai;
    private Aresta[] vizinhos;
    private int distancia;
    
    
    public Vertice(int id){
        this.id = id;
    }

    public int getIdHeap() {
        return idHeap;
    }

    public void setIdHeap(int idHeap) {
        this.idHeap = idHeap;
    }
    

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public Vertice getPai() {
        return pai;
    }

    public void setPai(Vertice pai) {
        this.pai = pai;
    }

    public Aresta[] getVizinhos() {
        return vizinhos;
    }

    public void setVizinhos(Aresta[] vizinhos) {
        this.vizinhos = vizinhos;
    }
    
    public void setVizinhos(Aresta vizinho, int i) {
        this.vizinhos[i] = vizinho;
    }
    
    public int getDistancia() {
        return distancia;
    }

    public void setDistancia(int distancia) {
        this.distancia = distancia;
    }    
}
