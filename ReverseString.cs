using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Reverse_String
{
	class Program
	{
		static void Main(string[] args)
		{
			string something = "something";
			char[] chars = something.ToCharArray();
			for (int i = 0; i < chars.Length / 2; i++) //Iterate through the first half of the arrary (chars.Length / 2) or it will be reversed twice and output the same element 
			{
				char tmp = chars[i];
				chars[i] = chars[chars.Length - i - 1];
				chars[chars.Length - i - 1] = tmp;
			}
			Console.WriteLine(chars);
			Console.ReadKey();
		}
	}
}
