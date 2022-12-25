using System;
using System.Linq;
using System.Threading;

namespace New_year
{
  public static class Program
  {
	public static void Main()
	{
		int end=DateTime.Now.Year+1;
		while(DateTime.Now.Year<end)
		{
  DateTime n=DateTime.Now;
	int month=12-n.Month;
	int day=DateTime.MaxValue.Day-n.Day;
	int hour=23-n.Hour;
	int minut=59-n.Minute;
	int sekund=59-n.Second;
	Console.WriteLine("\n\n    Yangi Yilgacha "+month+" oy "+day+" kun "+hour+" soat "+minut+" minut "+sekund+" sekund vaqt qoldi");
	Thread.Sleep(1000);
	Console.Clear();
		}
		Console.WriteLine("Yangi yilingiz bilan!!!");
	}
  }
}
