package DS;
import java.util.ArrayList;

public class HashMap{
  public class Node{
    String key;
    int value;
    Node next;
    public Node(String key,int value){
      this.key = key;
      this.value = value;
    }
  }
  private ArrayList<Node> bucketarray;
  int size = 0 ; 
  public HashMap(){
    this.bucketarray = new ArrayList<>();
    for(int i : cap.size()){
      this.bucketarray.add(null);
    }
  } 
  public HashMap(){
    this(4);
  }
public void put(String key , int value)
{
    int bn  = hashfunc(key);
    Node temp = this.bucketarray.get(bn);
    while(temp!=null){
      if(temp.key .equals(key)){
        temp.value = value;
        return;
      }
      temp = temp.next;
    }
    Node nn = new Node(key, value);
    temp = this.bucketarray.get(bn);
    nn.next  = temp;
    this.bucketarray.set(bn,nn);
    this.size++;
    double thf = 2.0;
    double lf = (1.0*this.size)/this.bucketarray.size();
    if(lf>thf){
      rehasing();
    }
}
private void rehasing(){
  ArrayList<Node> nba = new ArrayList<>();
  for(int i = 0 ; i<2*this.bucketarray.size();i++){
    nba.add(null);
  }
  ArrayList<Node> oba = this.bucketarray;
  this.size = 0;
  this.bucketarray = nba;
  for(Node temp : oba){
    while(temp!=null){
      put(temp.key,temp.value);
      temp = temp.next;
    }
  }

}
public Integer get(String key){
 int bn  = hashfunc(key);
  Node temp = this.bucketarray.get(bn);
    while(temp!=null){
      if(temp.key .equals(key)){
        temp.value = value;
        return temp.value;
      }
      temp = temp.next;
    }
    return null;
}
public boolean contains(String key){
  int bn  = hashfunc(key);
  Node temp = this.bucketarray.get(bn);
    while(temp!=null){
      if(temp.key .equals(key)){
        temp.value = value;
        return true;
      }xx
      temp = temp.next;
    }
    return false;
}
public Integer remove(String key){
  int bn = hashfunc(key);
  Node temp = this.bucketarray.get(bn);
  Node prev = null;
  while(temp!=null){
    if(temp.key.equals(key)){
      break;
    }
    prev = temp;
    temp = temp.next;
  }
  if(temp == null){
    return null;
  }
  if(prev == null){
    this.bucketarray.set(bn,temp.next);
    temp.next = null;
  }
}

public int hashfunc(String key){
  int hv = key.hashCode()%this.bucketarray.size();
  if(hv<0){
    hv+=this.bucketarray.size();
  }
  return hv;
}
}