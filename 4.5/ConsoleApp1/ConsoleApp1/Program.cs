using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] num;
            Func<int> func1 = () => 42;
            Func<int, int> funk2 = (Func<int, int>)(object)func1;
            var a = funk2(13);
        }
    }
}
