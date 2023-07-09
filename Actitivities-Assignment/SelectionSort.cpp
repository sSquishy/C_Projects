using System;

namespace SelectionSort
{
    class SelectionSort
    {
        static void Main(string[] args)
        {
            int n = 5; // number of customers
            Customer[] customers = new Customer[n];

            Console.WriteLine("Enter the details of " + n + " customers:");
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Enter the customer number of customer " + (i + 1) + ": ");
                int customerNumber = Convert.ToInt32(Console.ReadLine());

                Console.WriteLine("Enter the name of customer " + (i + 1) + ": ");
                string name = Console.ReadLine();

                Console.WriteLine("Enter the arrival time of customer " + (i + 1) + " (hh:mm): ");
                string arrivalTime = Console.ReadLine();

                Console.WriteLine("Enter the type of laundry of customer " + (i + 1) + " (wash, dry, or wash & dry): ");
                string type = Console.ReadLine();

                customers[i] = new Customer(customerNumber, name, arrivalTime, type);
                customers[i].FinishedTime = CalculateFinishedTime(arrivalTime, type);
            }

            Console.WriteLine("Original Array: ");
            PrintArray(customers);

            SelectionSort(customers);

            Console.WriteLine("Sorted Array: ");
            PrintArray(customers);

            Console.WriteLine("The first customer to be finished with their laundry is: ");
            Console.WriteLine("Customer " + customers[0].CustomerNumber + ": " + customers[0].Name + " with type " + customers[0].Type + " will finish at " + customers[0].FinishedTime);

            Console.ReadLine();
        }

        static void SelectionSort(Customer[] customers)
        {
            int n = customers.Length;

            for (int i = 0; i < n - 1; i++)
            {
                int minIndex = i;
                for (int j = i + 1; j < n; j++)
                {
                    if (String.Compare(customers[j].FinishedTime, customers[minIndex].FinishedTime) < 0)
                    {
                        minIndex = j;
                    }
                }

                Customer temp = customers[minIndex];
                customers[minIndex] = customers[i];
                customers[i] = temp;
            }
        }

        static void PrintArray(Customer[] customers)
        {
            int n = customers.Length;
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Customer " + customers[i].CustomerNumber + ": " + customers[i].Name + " with type " + customers[i].Type + " will finish at " + customers[i].FinishedTime);
            }
            Console.WriteLine();
        }

        private static string CalculateFinishedTime(string arrivalTime, string type)
        {
         int hour = Convert.ToInt32(arrivalTime.Split(':')[0]);
         int minute = 0;
         int laundryTime;

          if (arrivalTime.Split(':').Length >= 2)
          {
             minute = Convert.ToInt32(arrivalTime.Split(':')[1]);
          }

          if (type == "wash")
          {
              laundryTime = 40;
          }
         else if (type == "dry")
        {
         laundryTime = 40;
        }
          else
        {
          laundryTime = 80;
        }

         minute += laundryTime;
          while (minute >= 60)
       {
           hour++;
            minute -= 60;
        }

           string finishedTime = hour.ToString().PadLeft(2, '0') + ":" + minute.ToString().PadLeft(2, '0');
           return finishedTime;
        }

    }

    class Customer
    {
        public int CustomerNumber { get; set; }
        public string Name { get; set; }
        public string ArrivalTime { get; set; }
        public string Type { get; set; }
        public string FinishedTime { get; set; }

        public Customer(int customerNumber, string name, string arrivalTime, string type)
        {
            this.CustomerNumber = customerNumber;
            this.Name = name;
            this.ArrivalTime = arrivalTime;
            this.Type = type;
        }
    }
}
