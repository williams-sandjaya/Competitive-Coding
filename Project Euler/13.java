using System;
using System.IO;
using System.Numerics;
using System.Diagnostics;

    class Problem13 {

        public static void Main(string[] args) {
            new Problem13().Solve();
        }

        public void Solve() {

            string filename = Environment.GetFolderPath(Environment.SpecialFolder.DesktopDirectory) + "\\input.txt";

            BigInteger result = new BigInteger();
            string line;
            StreamReader r = new StreamReader(filename);
                        
            while ((line = r.ReadLine()) != null) {
                result += BigInteger.Parse(line);                
            }

            r.Close();

            Console.WriteLine("The first ten digits are: {0}", result.ToString().Substring(0, 10));

        }

    }
