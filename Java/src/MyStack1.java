import java.util.Stack;

/*
* 实现一个特殊的栈，在实现栈的基本功能的基础上，再实现返回栈中最小元素的操作。
* */
public class MyStack1 {
  private Stack<Integer> stackData;
  private Stack<Integer> stackMin;

  public MyStack1(){
      this.stackData = new Stack<Integer>();
      this.stackMin = new Stack<Integer>();
  }

  public void push(int newNum){
      if(this.stackMin.isEmpty()){
          this.stackMin.push(newNum);
      }else if(newNum <= this.getMin()){
          this.stackMin.push(newNum);
      }
      this.stackData.push(newNum);
  }

  public int pop(){
      if(this.stackData.isEmpty()){
          throw new RuntimeException("Your stack is empty.");
      }
      int value = this.stackData.pop();
      if(value == this.getMin()){
          this.stackMin.pop();
      }
      return value;
  }

  public int getMin(){
      if(this.stackMin.isEmpty()){
          throw new RuntimeException("Your stack is empty.");
      }
      return this.stackMin.peek();
  }

  public static void main(String[] args){
      MyStack1 stack_1 = new MyStack1();
      int a[] = {1, 2, 1, -5, 4, 3};
      for(int i = 0; i < a.length; i++){
          stack_1.push(a[i]);
      }
      int min = stack_1.getMin();
      System.out.println(min);
  }
}
