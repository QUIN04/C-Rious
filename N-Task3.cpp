#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdio>
#include<numeric>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<cmath>
#include<bitset>
#include<cassert>
#include<queue>
#include<stack>
#include<deque>
#include<cassert>
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    vector<char>st;
    for (int i = 0; i < (int)s.length(); i++)
    {
        if (!st.empty() && st.back() == s[i])
        {
            st.pop_back();
        }
        else
        {
            st.push_back(s[i]);
        }
    }
    if (st.empty())
    {
        printf("Empty String\n");
    }
    else
    {
        for (int i = 0; i < (int)st.size(); i++)
        {
            printf("%c", st[i]);
        }
        printf("\n");
    }
    return 0;
}

// C CODE
/*#include<stdio.h>
typedef unsigned u;
char S[111];u l=1;
int main()
{
    char c;
    while((c=getchar())<'a');
    do
    {
        S[l]=c;
        if(S[l]==S[l-1])--l;
        else++l;
    }
    while((c=getchar())>='a');
    S[l]='\0';
    printf("%s\n",l-1?S+1:"Empty String");
    return 0;
}
 

Super Reduced String HackerRank Solution in C++
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdio>
#include<numeric>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<cmath>
#include<bitset>
#include<cassert>
#include<queue>
#include<stack>
#include<deque>
#include<cassert>
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    vector<char>st;
    for (int i = 0; i < (int)s.length(); i++)
    {
        if (!st.empty() && st.back() == s[i])
        {
            st.pop_back();
        }
        else
        {
            st.push_back(s[i]);
        }
    }
    if (st.empty())
    {
        printf("Empty String\n");
    }
    else
    {
        for (int i = 0; i < (int)st.size(); i++)
        {
            printf("%c", st[i]);
        }
        printf("\n");
    }
    return 0;
}
 

Super Reduced String HackerRank Solution in Java
import java.awt.*;
import java.awt.event.*;
import java.awt.geom.*;
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*; 
import java.util.*;
import java.util.regex.*;
/*
      br = new BufferedReader(new FileReader("input.txt"));
      pw = new PrintWriter(new BufferedWriter(new FileWriter("output.txt")));
      br = new BufferedReader(new InputStreamReader(System.in));
      pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
 */


public class Solution {
    private static BufferedReader br;
    private static StringTokenizer st;
    private static PrintWriter pw;

    public static void main(String[] args) throws Exception {
        br = new BufferedReader(new InputStreamReader(System.in));
        pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        //int qq = 1;
        int qq = Integer.MAX_VALUE;
        //int qq = readInt();
        for(int casenum = 1; casenum <= qq; casenum++)	{
            String s = nextToken();
            LinkedList<Character> q = new LinkedList<Character>();
            for(int i = 0; i < s.length(); i++) {
                if(!q.isEmpty() && q.peekLast() == s.charAt(i)) {
                    q.removeLast();
                }
                else {
                    q.addLast(s.charAt(i));
                }
            }
            for(char out: q) {
                pw.print(out);
            }
            if(q.size() == 0) {
                pw.print("Empty String");
            }
            pw.println();
        }
        exitImmediately();
    }

    private static void exitImmediately() {
        pw.close();
        System.exit(0);
    }

    private static long readLong() throws IOException {
        return Long.parseLong(nextToken());
    }

    private static double readDouble() throws IOException {
        return Double.parseDouble(nextToken());
    }

    private static int readInt() throws IOException {
        return Integer.parseInt(nextToken());
    }

    private static String nextLine() throws IOException  {
        if(!br.ready()) {
            exitImmediately();
        }
        st = null;
        return br.readLine();
    }

    private static String nextToken() throws IOException  {
        while(st == null || !st.hasMoreTokens())  {
            if(!br.ready()) {
                exitImmediately();
            }
            st = new StringTokenizer(br.readLine().trim());
        }
        return st.nextToken();
    }
}
 

Super Reduced String HackerRank Solution in Python
# Enter your code here. Read input from STDIN. Print output to STDOUT
s = raw_input()

while 1:
    i=0
    flag=0
    while i<len(s)-1:
        if s[i] == s[i+1]:
            s=s[:i]+s[i+2:]
            flag=1
        else:    
            i+=1
    
    if flag==0:
        break
if len(s)>0:        
    print s        
else:
    print 'Empty String'
 

Super Reduced String HackerRank Solution in C#
using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        String s = Console.ReadLine();
        
        bool reduced = false;
        
        do {
            reduced = false;
            
            for (int i = 0; i < s.Length - 1; ) {
                if (s[i] == s[i+1]) {
                    s = s.Substring(0, i) + s.Substring(i + 2);
                    reduced = true;
                }
                else
                    ++i;
            }
        } while (reduced);
        
        if (s.Length == 0)
            Console.Out.WriteLine("Empty String");
        else
            Console.Out.WriteLine(s);
    }
}
 

/*
#include<stdio.h>
typedef unsigned u;
char S[111];u l=1;
int main()
{
    char c;
    while((c=getchar())<'a');
    do
    {
        S[l]=c;
        if(S[l]==S[l-1])--l;
        else++l;
    }
    while((c=getchar())>='a');
    S[l]='\0';
    printf("%s\n",l-1?S+1:"Empty String");
    return 0;
}
