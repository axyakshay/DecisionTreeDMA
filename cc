digraph Tree {
node [shape=box] ;
0 [label="X[0] <= 6930.5\ngini = 0.342\nsamples = 10000\nvalue = [7807, 2193]"] ;
1 [label="X[1] <= 284.5\ngini = 0.161\nsamples = 8060\nvalue = [7346, 714]"] ;
0 -> 1 [labeldistance=2.5, labelangle=45, headlabel="True"] ;
5 [label="X[1] <= 17.5\ngini = 0.3\nsamples = 3800\nvalue = [3102, 698]"] ;
1 -> 5 ;
7 [label="X[1] <= 1.5\ngini = 0.034\nsamples = 2819\nvalue = [2770, 49]"] ;
5 -> 7 ;
17 [label="gini = 0.001\nsamples = 2611\nvalue = [2610, 1]"] ;
7 -> 17 ;
18 [label="X[1] <= 2.5\ngini = 0.355\nsamples = 208\nvalue = [160, 48]"] ;
7 -> 18 ;
19 [label="gini = 0.105\nsamples = 18\nvalue = [1, 17]"] ;
18 -> 19 ;
20 [label="gini = 0.273\nsamples = 190\nvalue = [159, 31]"] ;
18 -> 20 ;
8 [label="X[0] <= 550.0\ngini = 0.448\nsamples = 981\nvalue = [332, 649]"] ;
5 -> 8 ;
9 [label="X[1] <= 38.0\ngini = 0.163\nsamples = 234\nvalue = [213, 21]"] ;
8 -> 9 ;
23 [label="gini = 0.397\nsamples = 22\nvalue = [6, 16]"] ;
9 -> 23 ;
24 [label="gini = 0.046\nsamples = 212\nvalue = [207, 5]"] ;
9 -> 24 ;
10 [label="X[0] <= 4661.0\ngini = 0.268\nsamples = 747\nvalue = [119, 628]"] ;
8 -> 10 ;
15 [label="X[0] <= 1199.0\ngini = 0.241\nsamples = 728\nvalue = [102, 626]"] ;
10 -> 15 ;
27 [label="gini = 0.088\nsamples = 368\nvalue = [17, 351]"] ;
15 -> 27 ;
28 [label="gini = 0.361\nsamples = 360\nvalue = [85, 275]"] ;
15 -> 28 ;
16 [label="gini = 0.188\nsamples = 19\nvalue = [17, 2]"] ;
10 -> 16 ;
6 [label="X[1] <= 1492.0\ngini = 0.007\nsamples = 4260\nvalue = [4244, 16]"] ;
1 -> 6 ;
21 [label="gini = 0.003\nsamples = 4250\nvalue = [4244, 6]"] ;
6 -> 21 ;
22 [label="gini = 0.0\nsamples = 10\nvalue = [0, 10]"] ;
6 -> 22 ;
2 [label="X[0] <= 29976.5\ngini = 0.362\nsamples = 1940\nvalue = [461, 1479]"] ;
0 -> 2 [labeldistance=2.5, labelangle=-45, headlabel="False"] ;
3 [label="X[1] <= 1134.5\ngini = 0.162\nsamples = 1616\nvalue = [144, 1472]"] ;
2 -> 3 ;
11 [label="X[1] <= 15.5\ngini = 0.092\nsamples = 1543\nvalue = [75, 1468]"] ;
3 -> 11 ;
13 [label="gini = 0.204\nsamples = 78\nvalue = [69, 9]"] ;
11 -> 13 ;
14 [label="gini = 0.008\nsamples = 1465\nvalue = [6, 1459]"] ;
11 -> 14 ;
12 [label="gini = 0.104\nsamples = 73\nvalue = [69, 4]"] ;
3 -> 12 ;
4 [label="X[0] <= 60839.0\ngini = 0.042\nsamples = 324\nvalue = [317, 7]"] ;
2 -> 4 ;
25 [label="gini = 0.0\nsamples = 317\nvalue = [317, 0]"] ;
4 -> 25 ;
26 [label="gini = 0.0\nsamples = 7\nvalue = [0, 7]"] ;
4 -> 26 ;
}