import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.File;
import java.util.Scanner;

class FloydWarshall{
  public int N = 1000;
  public int graph[][] = new int[N][N];
  public File file;

  void floydWarshall(){
    
    for(int k = 0; k < N; k++){
        for(int i = 0; i < N; i++){
          for(int j = 0; j < N; j++){
            if(graph[i][k] > (graph[k][j] + graph[i][j])){
                graph[i][k] = (graph[k][j] + graph[i][j]);
            }
          }
        }
      }
  }

  void loadInput(){
    file = new File("input.txt");
    Scanner cin = new Scanner(file);

   for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            graph[j][i] = cin.nextInt();
        }
    }
  }
}

class Main {
  
  public static void main(String[] args) {
    
    FloydWarshall myFloydWarshall = new FloydWarshall();
    
    myFloydWarshall.loadInput();

    long t1 = System.nanoTime();
    myFloydWarshall.floydWarshall();
    long t2 = System.nanoTime();

    long duration = t2 - t1;
    System.out.println("Time: " + duration);
  }
}
