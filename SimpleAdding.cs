using System;

class MainClass {
  public static int SimpleAdding(int num) { 
  
    int result = num;
    int count = 0;
    
    while(num > 1){
        num--;
        result += num;
    }

    return result;       
  }

  static void Main() {  
    Console.WriteLine(SimpleAdding(Console.ReadLine()));
  } 
   
}