using System;
using ManagedDll;

namespace TestCS
{
    class Program
    {
        static void Main()
        {
            DoWork addWork = new DoWork();
            DoWork showWork = new DoWork();
            Console.WriteLine("Do some work: {0}", showWork.GetValue(addWork.AddToValue(3, 1)));
            Console.ReadLine();
        }
    }
}
