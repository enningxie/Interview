import java.util.Stack;

// 如何仅用递归函数和栈操作逆序一个栈
public class ReverseStack {
    public int getAndRemoveLastElement(Stack<Integer> stack){
        int result = stack.pop();
        if(stack.empty()){
            return result;
        }else{
            int last = getAndRemoveLastElement(stack);
            stack.push(result);
            return last;
        }
    }

    public void reverse(Stack<Integer> stack){
        if(stack.empty()){
            return;
        }
        int i = getAndRemoveLastElement(stack);
        reverse(stack);
        stack.push(i);
    }
}
