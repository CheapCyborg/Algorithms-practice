using System;

class MainClass {
  public static string LetterCapitalize(string str) {
        char[] array = str.ToCharArray();
        // Handle the first letter in the string.
        if (array.Length >= 1)
        {
            if (char.IsLower(array[0]))
            {
                array[0] = char.ToUpper(array[0]);
            }
        }
        
        for (int i = 1; i < array.Length; i++)
        {
            if (array[i - 1] == ' ')
            {
                if (char.IsLower(array[i]))
                {
                    array[i] = char.ToUpper(array[i]);
                }
            }
        }

    return new string (array);
            
  }

  static void Main() {  
    Console.WriteLine(LetterCapitalize(Console.ReadLine()));
  } 
   
}