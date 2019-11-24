import java.util.ArrayList;
import java.util.Stack;

/**
 *
 * @author Vanessa Pessoa
 */
public class Grafo {

    private Vertice[] vertices;
    private final int infinito = 214748364;
    private int[] distancia;

    public Grafo(Vertice[] vertices) {
        this.vertices = vertices;
        this.distancia = new int[this.vertices.length];
    }

    public void dijkstra(int r) {
        Stack<Vertice> pilha = new Stack<Vertice>();
        Vertice last = new Vertice(r);

        for (int u = 0; u < vertices.length; u++) {
            vertices[u].setDistancia(infinito);
            distancia[u] = infinito;
        }

        vertices[r].setPai(null);
        vertices[r].setDistancia(0);
        FilaPrioridade heap = new FilaPrioridade(vertices);
        heap.buildHeap();

        Vertice u;
        Vertice vizinhoAtual;
        while (!heap.vazio()) {
            u = heap.extractMin();
            for (Aresta v : u.getVizinhos()) {
                int peso = v.getPeso();
                vizinhoAtual = v.getV2();
                if (vizinhoAtual.getDistancia() > u.getDistancia() + peso) {
                    distancia[vizinhoAtual.getId()] = u.getDistancia() + peso;
                    vizinhoAtual.setDistancia(u.getDistancia() + peso);
                    heap.decrease(vizinhoAtual.getIdHeap(), u.getDistancia() + peso);
                    vizinhoAtual.setPai(u);
                    pilha.add(u);
                }
            }
        }
        for (int i : this.distancia) {
            if (i == infinito) {
                System.out.print(0 + " ");
            } else {
                System.out.print(i + " ");
            }
        }
        
        System.out.println();
        
        while(!pilha.empty()){
            System.out.print(pilha.pop().getId() + " ->");
        }
            
    }

}
