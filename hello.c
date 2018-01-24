#include <iostream>
using namespace std;
int main() {
    int i, n;
    cin >> n;
    for (i=0; i<n; i++) {
        cout << "hello world\n";
    }
    return 0;
}
Raw
 gistfile2.cs
using System;
namespace Solution {
    class Solution {
        static void Main(string[] args) {
            var line1 = System.Console.ReadLine().Trim();
            var N = Int32.Parse(line1);
            for (var i = 0; i < N; i++) {
                System.Console.WriteLine("hello world");
            }
        }
    }
}
Raw
 gistfile3.java
import java.io.*;
public class Solution {
    public static void main(String args[] ) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        int N = Integer.parseInt(line);
        for (int i = 0; i < N; i++) {
            System.out.println("hello world");
        }
    }
}
Raw
 gistfile4.py
N = int(raw_input())
for i in xrange(N):
    print "hello world"
Raw
 gistfile5.rb
gets.to_i.times { puts "hello world" }
Raw
 gistfile6.lisp
(setq strN (read-line))
(setq N (parse-integer strN))
(loop for i from 1 to N do
    (write "hello world")
    (terpri)
)
