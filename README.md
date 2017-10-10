compiled with `-std=c++11 -O3 -g`:

### `perf stat --repeat 10 ./test01 -a -vector`:

```
 Performance counter stats for './test01 -a -vector' (10 runs):

       1880.211907      task-clock (msec)         #    0.995 CPUs utilized            ( +-  0.52% )
               219      context-switches          #    0.116 K/sec                    ( +-  9.81% )
                 1      cpu-migrations            #    0.001 K/sec                    ( +- 26.51% )
             3,893      page-faults               #    0.002 M/sec                    ( +-  1.31% )
     5,818,088,797      cycles                    #    3.094 GHz                      ( +-  0.36% )  (83.25%)
     4,230,632,484      stalled-cycles-frontend   #   72.72% frontend cycles idle     ( +-  0.51% )  (83.33%)
     3,157,094,529      stalled-cycles-backend    #   54.26% backend  cycles idle     ( +-  0.74% )  (66.74%)
     4,125,830,670      instructions              #    0.71  insns per cycle        
                                                  #    1.03  stalled cycles per insn  ( +-  0.06% )  (83.42%)
       828,742,482      branches                  #  440.771 M/sec                    ( +-  0.12% )  (83.42%)
            98,590      branch-misses             #    0.01% of all branches          ( +-  7.31% )  (83.29%)

       1.889729734 seconds time elapsed                                          ( +-  0.61% )
```

### `perf stat --repeat 10 ./test01 -a -valarray`

```
 Performance counter stats for './test01 -a -valarray' (10 runs):

       1848.890913      task-clock (msec)         #    0.997 CPUs utilized            ( +-  0.58% )
               192      context-switches          #    0.104 K/sec                    ( +-  7.54% )
                 1      cpu-migrations            #    0.000 K/sec                    ( +- 38.67% )
             3,944      page-faults               #    0.002 M/sec                    ( +-  1.73% )
     5,708,875,408      cycles                    #    3.088 GHz                      ( +-  0.32% )  (83.25%)
     4,295,608,908      stalled-cycles-frontend   #   75.24% frontend cycles idle     ( +-  0.42% )  (83.30%)
     3,587,576,566      stalled-cycles-backend    #   62.84% backend  cycles idle     ( +-  1.18% )  (66.74%)
     2,922,774,007      instructions              #    0.51  insns per cycle        
                                                  #    1.47  stalled cycles per insn  ( +-  0.08% )  (83.40%)
       626,900,878      branches                  #  339.069 M/sec                    ( +-  0.13% )  (83.42%)
            94,901      branch-misses             #    0.02% of all branches          ( +-  4.38% )  (83.35%)

       1.854230636 seconds time elapsed                                          ( +-  0.59% )
```

### `perf stat --repeat 10 ./test01 -s -vector`

```
 Performance counter stats for './test01 -s -vector' (10 runs):

       1873.915812      task-clock (msec)         #    0.997 CPUs utilized            ( +-  0.36% )
               193      context-switches          #    0.103 K/sec                    ( +-  5.29% )
                 1      cpu-migrations            #    0.001 K/sec                    ( +- 36.99% )
             3,944      page-faults               #    0.002 M/sec                    ( +-  1.73% )
     5,801,206,183      cycles                    #    3.096 GHz                      ( +-  0.28% )  (83.26%)
     4,040,271,027      stalled-cycles-frontend   #   69.65% frontend cycles idle     ( +-  0.36% )  (83.33%)
     3,176,716,501      stalled-cycles-backend    #   54.76% backend  cycles idle     ( +-  0.92% )  (66.73%)
     4,127,355,065      instructions              #    0.71  insns per cycle        
                                                  #    0.98  stalled cycles per insn  ( +-  0.06% )  (83.40%)
       828,555,433      branches                  #  442.152 M/sec                    ( +-  0.07% )  (83.35%)
            93,708      branch-misses             #    0.01% of all branches          ( +-  2.70% )  (83.36%)

       1.880115264 seconds time elapsed                                          ( +-  0.37% )
```

### `perf stat --repeat 10 ./test01 -s -valarray`

```
 Performance counter stats for './test01 -s -valarray' (10 runs):

       1832.208393      task-clock (msec)         #    0.996 CPUs utilized            ( +-  0.21% )
               190      context-switches          #    0.104 K/sec                    ( +-  7.43% )
                 1      cpu-migrations            #    0.001 K/sec                    ( +- 39.39% )
             3,944      page-faults               #    0.002 M/sec                    ( +-  1.73% )
     5,680,460,294      cycles                    #    3.100 GHz                      ( +-  0.19% )  (83.32%)
     4,273,388,325      stalled-cycles-frontend   #   75.23% frontend cycles idle     ( +-  0.29% )  (83.30%)
     3,133,981,108      stalled-cycles-backend    #   55.17% backend  cycles idle     ( +-  0.89% )  (66.72%)
     2,930,381,596      instructions              #    0.52  insns per cycle        
                                                  #    1.46  stalled cycles per insn  ( +-  0.06% )  (83.38%)
       628,766,537      branches                  #  343.174 M/sec                    ( +-  0.08% )  (83.37%)
            83,674      branch-misses             #    0.01% of all branches          ( +-  4.93% )  (83.37%)

       1.838804169 seconds time elapsed                                          ( +-  0.20% )
```

### `perf stat --repeat 10 ./test01 -m -vector`

```
 Performance counter stats for './test01 -m -vector' (10 runs):

       1953.916221      task-clock (msec)         #    0.997 CPUs utilized            ( +-  0.35% )
               200      context-switches          #    0.102 K/sec                    ( +-  4.72% )
                 1      cpu-migrations            #    0.001 K/sec                    ( +- 24.28% )
             3,842      page-faults               #    0.002 M/sec                    ( +-  0.01% )
     6,026,185,629      cycles                    #    3.084 GHz                      ( +-  0.36% )  (83.25%)
     4,418,863,429      stalled-cycles-frontend   #   73.33% frontend cycles idle     ( +-  0.44% )  (83.29%)
     3,355,551,502      stalled-cycles-backend    #   55.68% backend  cycles idle     ( +-  0.80% )  (66.71%)
     4,126,859,336      instructions              #    0.68  insns per cycle        
                                                  #    1.07  stalled cycles per insn  ( +-  0.04% )  (83.41%)
       828,343,562      branches                  #  423.940 M/sec                    ( +-  0.10% )  (83.42%)
           114,127      branch-misses             #    0.01% of all branches          ( +-  7.08% )  (83.37%)

       1.960118720 seconds time elapsed                                          ( +-  0.35% )
```       

### `perf stat --repeat 10 ./test01 -m -valarray`

```
 Performance counter stats for './test01 -m -valarray' (10 runs):

       1859.722279      task-clock (msec)         #    0.997 CPUs utilized            ( +-  0.88% )
               183      context-switches          #    0.098 K/sec                    ( +-  5.55% )
                 1      cpu-migrations            #    0.000 K/sec                    ( +- 48.59% )
             3,944      page-faults               #    0.002 M/sec                    ( +-  1.73% )
     5,746,680,348      cycles                    #    3.090 GHz                      ( +-  0.62% )  (83.29%)
     4,333,485,224      stalled-cycles-frontend   #   75.41% frontend cycles idle     ( +-  0.83% )  (83.36%)
     3,690,086,295      stalled-cycles-backend    #   64.21% backend  cycles idle     ( +-  1.00% )  (66.67%)
     2,927,532,098      instructions              #    0.51  insns per cycle        
                                                  #    1.48  stalled cycles per insn  ( +-  0.05% )  (83.36%)
       628,144,558      branches                  #  337.763 M/sec                    ( +-  0.09% )  (83.36%)
           102,275      branch-misses             #    0.02% of all branches          ( +-  9.52% )  (83.35%)

       1.865528045 seconds time elapsed                                          ( +-  0.93% )
```
### `perf stat --repeat 10 ./test01 -d -vector`

```
 Performance counter stats for './test01 -d -vector' (10 runs):

       2561.731164      task-clock (msec)         #    0.994 CPUs utilized            ( +-  0.23% )
               305      context-switches          #    0.119 K/sec                    ( +-  8.44% )
                 2      cpu-migrations            #    0.001 K/sec                    ( +- 22.27% )
             3,893      page-faults               #    0.002 M/sec                    ( +-  1.31% )
     7,930,534,316      cycles                    #    3.096 GHz                      ( +-  0.13% )  (83.27%)
     6,150,153,289      stalled-cycles-frontend   #   77.55% frontend cycles idle     ( +-  0.17% )  (83.35%)
     4,243,452,420      stalled-cycles-backend    #   53.51% backend  cycles idle     ( +-  0.85% )  (66.68%)
     4,135,045,035      instructions              #    0.52  insns per cycle        
                                                  #    1.49  stalled cycles per insn  ( +-  0.05% )  (83.35%)
       830,771,951      branches                  #  324.301 M/sec                    ( +-  0.07% )  (83.36%)
           117,750      branch-misses             #    0.01% of all branches          ( +-  4.08% )  (83.37%)

       2.576438782 seconds time elapsed                                          ( +-  0.31% )
```

### `perf stat --repeat 10 ./test01 -d -valarray`

```
 Performance counter stats for './test01 -d -valarray' (10 runs):

       2538.347694      task-clock (msec)         #    0.996 CPUs utilized            ( +-  0.18% )
               246      context-switches          #    0.097 K/sec                    ( +-  3.47% )
                 1      cpu-migrations            #    0.001 K/sec                    ( +- 28.57% )
             3,944      page-faults               #    0.002 M/sec                    ( +-  1.73% )
     7,873,755,499      cycles                    #    3.102 GHz                      ( +-  0.12% )  (83.30%)
     6,453,491,141      stalled-cycles-frontend   #   81.96% frontend cycles idle     ( +-  0.12% )  (83.35%)
     5,574,319,670      stalled-cycles-backend    #   70.80% backend  cycles idle     ( +-  0.34% )  (66.73%)
     2,931,851,130      instructions              #    0.37  insns per cycle        
                                                  #    2.20  stalled cycles per insn  ( +-  0.06% )  (83.35%)
       628,968,969      branches                  #  247.787 M/sec                    ( +-  0.13% )  (83.39%)
           116,365      branch-misses             #    0.02% of all branches          ( +-  6.01% )  (83.27%)

       2.547345037 seconds time elapsed                                          ( +-  0.21% )
```


