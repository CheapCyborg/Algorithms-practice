﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FizzBuzz
{
	class Program
	{
		static void Main(string[] args)
		{
			for (var i = 1; i <= 100; i++)
			{
				FizzBuzz(i);
			}
			Console.ReadKey();
		}

		static void FizzBuzz(int number)
		{
				if (number % 15 == 0)
				{
					Console.WriteLine("FizzBuzz");
				}
				else if (number % 5 == 0)
				{
					Console.WriteLine("Buzz");
				}
				else if (number % 3 == 0)
				{
					Console.WriteLine("Fizz");
				}
				else
				{
					Console.WriteLine(number);
				}
		}
	}
}
