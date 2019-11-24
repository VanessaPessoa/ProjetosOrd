/**
 *
 * @author Vanessa Pessoa
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Vertice v0 = new Vertice(0);
        Vertice v1 = new Vertice(1);
        Vertice v2 = new Vertice(2);
        Vertice v3 = new Vertice(3);
        Vertice v4 = new Vertice(4);
        Vertice v5 = new Vertice(5);
        
        Aresta n1 = new Aresta(v0, v1, 1);
        Aresta n2 = new Aresta(v0, v3, 1);
        Aresta n4 = new Aresta(v0, v4, 1);
        Aresta n5 = new Aresta(v1, v2, 1);
        Aresta n6 = new Aresta(v1, v4, 1);
        Aresta n7 = new Aresta(v3, v4, 1);
        Aresta n8 = new Aresta(v2, v4, 1);
        Aresta n9 = new Aresta(v3, v5, 1);
        Aresta n10 = new Aresta(v4, v5, 1);
        Aresta n11 = new Aresta(v5, v1, 7);

        
        Aresta[] a = {n1, n2, n4};
        Aresta[] b = {n5, n6};
        Aresta[] c = {n8};
        Aresta[] d = {n7, n9};
        Aresta[] e = {n10};
        Aresta[] f = {n11};
        
        v0.setVizinhos(a);
        v1.setVizinhos(b);
        v2.setVizinhos(c);
        v3.setVizinhos(d);
        v4.setVizinhos(e);
        v5.setVizinhos(f);
        
        Vertice[] vertices = {v0, v1, v2, v3, v4, v5};

        Grafo grafo = new Grafo(vertices);

        grafo.dijkstra(0);

    }

}
