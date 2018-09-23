using System;

class MainClass {
  public static string LongestWord(string sen) { 
  
    string[] words = sen.Split(' ');
    int count = 0;
    string word = "";
    foreach(string s in words){
        if(s.Length > count){
            word = s;
            count = s.Length;
        }
    }

    return word;        
  }

  static void Main() {  
    Console.WriteLine(LongestWord(Console.ReadLine()));
  } 
   
}