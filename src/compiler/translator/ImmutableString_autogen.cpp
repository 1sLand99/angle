// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#include "compiler/translator/ImmutableString.h"

namespace sh
{

std::ostream &operator<<(std::ostream &os, const ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

}  // namespace sh

#if defined(_MSC_VER)
#    pragma warning(disable : 4309)  // truncation of constant value
#endif

namespace
{

constexpr int mangledkT1[] = {444,  1347, 2411, 431,  2282, 804,  2338, 20,   74,   74,
                              1270, 1644, 2471, 1830, 1952, 2471, 2461, 1205, 437,  1399,
                              1428, 2558, 907,  1860, 1910, 384,  340,  213,  1028, 1474,
                              233,  1572, 1397, 2214, 2065, 1240, 1307, 307,  81,   1838};
constexpr int mangledkT2[] = {1894, 451,  2116, 81,   2046, 968,  1123, 2108, 1234, 1081,
                              822,  1256, 1355, 61,   2360, 373,  629,  1576, 1869, 1074,
                              1140, 749,  2257, 1061, 1948, 706,  2264, 1475, 1361, 712,
                              1166, 1950, 181,  1106, 2540, 2567, 1310, 1429, 2549, 711};
constexpr int mangledkG[]  = {
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    528,  0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    939,  0,    0,    0,    0,
    772,  645,  0,    0,    0,    2137, 0,    0,    0,    0,    0,    0,    0,    0,    572,  0,
    0,    0,    447,  0,    0,    745,  0,    0,    91,   0,    1647, 1694, 0,    0,    0,    0,
    0,    0,    0,    2176, 0,    0,    0,    0,    0,    0,    0,    0,    1956, 0,    0,    0,
    0,    0,    0,    502,  0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1618,
    2196, 0,    0,    0,    0,    374,  0,    0,    1600, 0,    0,    0,    0,    0,    0,    0,
    0,    117,  0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    741,  0,    0,
    0,    0,    0,    1550, 432,  0,    0,    0,    0,    0,    0,    0,    0,    0,    1153, 0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1986, 0,    0,    0,    0,
    944,  791,  2274, 0,    0,    0,    0,    0,    381,  1870, 0,    0,    0,    0,    1593, 0,
    0,    566,  0,    1897, 541,  0,    856,  0,    0,    749,  1547, 0,    0,    0,    1939, 0,
    1655, 0,    0,    0,    474,  0,    0,    0,    839,  0,    617,  0,    1777, 1787, 0,    0,
    0,    0,    2522, 0,    2491, 0,    0,    2307, 613,  0,    0,    0,    777,  429,  0,    1153,
    1911, 0,    0,    0,    2274, 0,    0,    722,  0,    172,  0,    0,    0,    1746, 0,    0,
    0,    0,    657,  0,    0,    2435, 0,    2475, 955,  1120, 1041, 0,    894,  0,    0,    773,
    1029, 492,  0,    0,    2108, 0,    0,    2571, 0,    0,    0,    2541, 0,    0,    0,    0,
    0,    0,    0,    1643, 0,    0,    0,    0,    0,    0,    229,  0,    0,    907,  2533, 0,
    2086, 508,  0,    1163, 2459, 0,    0,    0,    1145, 0,    0,    1585, 0,    0,    0,    268,
    0,    0,    0,    0,    2045, 0,    809,  0,    0,    0,    0,    2595, 1392, 0,    1862, 747,
    1029, 0,    2639, 0,    2275, 0,    0,    0,    1407, 0,    0,    0,    0,    163,  430,  322,
    0,    0,    856,  0,    673,  0,    0,    0,    0,    0,    329,  0,    0,    2608, 2009, 0,
    0,    2004, 1205, 1228, 1864, 0,    2273, 1528, 2624, 0,    0,    700,  0,    0,    2352, 0,
    840,  1659, 0,    0,    0,    1397, 2567, 0,    0,    1903, 0,    1347, 568,  0,    0,    147,
    281,  0,    0,    0,    1498, 856,  685,  1122, 984,  0,    0,    1712, 0,    1478, 0,    0,
    0,    2570, 337,  771,  0,    0,    1175, 0,    2396, 1453, 0,    0,    1097, 0,    0,    0,
    0,    0,    2659, 109,  0,    0,    0,    0,    0,    0,    0,    0,    0,    1003, 0,    0,
    2445, 0,    0,    857,  0,    1513, 0,    0,    0,    472,  0,    1454, 0,    2648, 0,    0,
    729,  0,    0,    312,  808,  0,    0,    80,   0,    0,    0,    0,    361,  0,    0,    1994,
    0,    293,  222,  0,    0,    2104, 1027, 438,  0,    0,    0,    443,  471,  0,    1022, 0,
    0,    626,  1727, 1279, 0,    0,    511,  0,    2208, 927,  0,    0,    0,    1770, 145,  569,
    728,  0,    2159, 2179, 714,  0,    2368, 0,    1138, 1587, 585,  0,    1149, 0,    0,    1013,
    1136, 0,    0,    0,    0,    6,    197,  0,    0,    0,    75,   2461, 843,  0,    0,    328,
    0,    1853, 1945, 2379, 268,  1413, 464,  933,  0,    1077, 0,    0,    620,  0,    0,    0,
    0,    2221, 0,    0,    1420, 2267, 1251, 2208, 0,    768,  0,    498,  0,    0,    0,    0,
    788,  0,    0,    1281, 1760, 0,    0,    464,  0,    0,    2615, 0,    753,  0,    1933, 0,
    0,    0,    0,    0,    0,    1395, 1088, 355,  0,    139,  2456, 0,    0,    910,  1000, 0,
    1155, 203,  172,  2636, 1375, 1649, 1563, 0,    177,  0,    765,  1206, 0,    2086, 1389, 1924,
    2206, 0,    0,    0,    719,  194,  0,    198,  0,    916,  0,    0,    2008, 967,  255,  0,
    1556, 0,    0,    0,    0,    279,  0,    1517, 0,    0,    2177, 2172, 0,    410,  1182, 0,
    0,    2452, 2613, 0,    2032, 0,    0,    30,   2075, 682,  647,  1280, 676,  2331, 0,    0,
    0,    0,    0,    630,  0,    355,  1202, 0,    689,  0,    218,  0,    0,    960,  1140, 675,
    878,  305,  0,    278,  2451, 1708, 723,  0,    0,    245,  1258, 0,    570,  1915, 2151, 0,
    2152, 1390, 0,    0,    0,    88,   0,    0,    1827, 331,  0,    477,  0,    2004, 0,    1421,
    2421, 1652, 2605, 0,    0,    0,    1792, 0,    0,    1179, 1593, 0,    0,    0,    277,  1056,
    0,    2121, 0,    2488, 0,    957,  0,    1664, 481,  2235, 0,    210,  2586, 240,  0,    0,
    902,  0,    0,    0,    0,    817,  655,  1125, 838,  1889, 0,    0,    125,  2341, 1972, 0,
    23,   0,    0,    0,    2318, 2190, 0,    0,    0,    1163, 381,  0,    2157, 2024, 0,    0,
    772,  729,  999,  0,    0,    406,  472,  0,    0,    0,    1946, 0,    0,    2137, 0,    94,
    72,   0,    0,    2490, 1041, 810,  470,  0,    1798, 2563, 0,    1099, 0,    0,    868,  0,
    2295, 0,    0,    1702, 0,    0,    1224, 1830, 0,    0,    0,    0,    0,    0,    0,    2524,
    0,    0,    0,    0,    0,    291,  0,    1366, 0,    836,  0,    2458, 0,    187,  0,    882,
    0,    0,    0,    0,    1194, 0,    935,  149,  1237, 0,    292,  0,    797,  0,    0,    1359,
    935,  1163, 0,    492,  0,    633,  1490, 201,  0,    0,    0,    1507, 0,    0,    307,  0,
    0,    1482, 0,    0,    0,    1427, 987,  2563, 2217, 934,  0,    1031, 1482, 0,    0,    2092,
    471,  689,  0,    0,    1890, 0,    2153, 0,    0,    0,    1414, 0,    0,    0,    0,    0,
    0,    257,  0,    1075, 2362, 647,  1189, 0,    0,    246,  292,  0,    0,    0,    512,  0,
    111,  0,    2264, 755,  819,  0,    44,   0,    992,  0,    1540, 0,    1763, 0,    0,    0,
    342,  0,    0,    0,    769,  0,    220,  2624, 0,    1271, 620,  1286, 0,    0,    0,    0,
    153,  1188, 671,  1183, 0,    1727, 1951, 0,    0,    0,    0,    762,  512,  339,  1091, 669,
    0,    0,    0,    463,  2624, 0,    2210, 1450, 133,  1208, 871,  0,    0,    0,    2421, 390,
    0,    774,  355,  2345, 0,    2659, 0,    0,    2251, 0,    0,    1359, 2648, 0,    2629, 0,
    0,    0,    0,    251,  0,    764,  0,    0,    48,   0,    0,    1366, 0,    491,  0,    509,
    321,  816,  1862, 405,  0,    751,  1208, 817,  38,   1195, 713,  944,  1291, 1250, 0,    1328,
    1954, 0,    1571, 0,    0,    0,    0,    0,    0,    681,  0,    0,    470,  615,  0,    618,
    327,  0,    0,    158,  0,    0,    401,  0,    2101, 474,  1007, 2151, 0,    0,    0,    0,
    0,    1048, 0,    654,  1859, 789,  0,    0,    1093, 0,    2330, 2414, 0,    0,    0,    1028,
    0,    0,    0,    2466, 0,    762,  782,  1718, 1790, 1917, 0,    0,    1254, 0,    107,  0,
    1233, 1777, 0,    0,    78,   393,  0,    2175, 2635, 1405, 0,    29,   1098, 840,  491,  2604,
    0,    1948, 327,  820,  371,  2377, 0,    0,    0,    2089, 730,  757,  0,    1203, 0,    1872,
    0,    0,    0,    30,   2356, 1510, 0,    0,    573,  258,  649,  0,    0,    0,    0,    913,
    874,  1286, 0,    2568, 906,  1223, 208,  0,    383,  0,    0,    2335, 1395, 0,    0,    136,
    1039, 1210, 0,    0,    875,  1844, 2569, 0,    0,    0,    807,  1481, 0,    0,    0,    2619,
    0,    0,    2222, 0,    0,    0,    0,    764,  1007, 0,    0,    1719, 0,    802,  0,    0,
    0,    275,  0,    0,    553,  1587, 1406, 234,  1451, 0,    935,  1564, 509,  0,    638,  0,
    0,    209,  2179, 0,    3,    594,  275,  0,    2398, 835,  0,    0,    0,    0,    2034, 2003,
    0,    0,    0,    1648, 0,    856,  688,  0,    2044, 548,  0,    1730, 2101, 1018, 0,    0,
    0,    2205, 1313, 0,    2217, 341,  0,    0,    844,  0,    0,    0,    0,    1692, 0,    2492,
    0,    404,  2487, 1888, 0,    2256, 116,  0,    2264, 0,    1089, 0,    128,  1580, 0,    2215,
    0,    0,    1215, 0,    909,  276,  0,    0,    0,    1006, 0,    0,    2097, 2048, 2513, 878,
    0,    1398, 1111, 0,    168,  0,    578,  0,    1973, 1528, 0,    1780, 0,    0,    1337, 0,
    2076, 0,    0,    932,  437,  191,  0,    0,    356,  0,    976,  100,  0,    1157, 1030, 978,
    0,    0,    552,  568,  0,    0,    2031, 0,    2578, 0,    0,    1276, 1210, 1151, 39,   1577,
    0,    664,  825,  1294, 0,    0,    1290, 814,  0,    0,    0,    169,  0,    1979, 2632, 2096,
    632,  1890, 0,    415,  150,  0,    0,    2039, 0,    1365, 0,    0,    0,    2146, 0,    0,
    921,  0,    574,  451,  0,    0,    0,    0,    1075, 1304, 123,  0,    2140, 0,    0,    749,
    317,  0,    2179, 930,  0,    1102, 0,    545,  0,    523,  2564, 0,    0,    0,    11,   2371,
    2253, 182,  0,    638,  0,    104,  0,    711,  0,    0,    0,    1152, 2555, 0,    0,    0,
    0,    1922, 103,  1486, 0,    363,  1558, 2030, 2456, 52,   0,    2073, 1011, 770,  1007, 903,
    366,  2361, 2349, 0,    0,    898,  571,  881,  0,    0,    0,    0,    0,    626,  0,    796,
    1628, 594,  0,    0,    389,  0,    1302, 0,    0,    132,  0,    1271, 2093, 0,    2426, 0,
    424,  2462, 264,  0,    0,    957,  2311, 1706, 0,    1275, 0,    1740, 1148, 2211, 0,    198,
    0,    496,  0,    1994, 889,  0,    909,  970,  0,    2326, 0,    1596, 1161, 0,    1040, 103,
    0,    0,    0,    1086, 1527, 0,    125,  815,  964,  459,  428,  230,  2664, 688,  584,  577,
    0,    2618, 0,    2467, 692,  524,  1101, 89,   615,  0,    0,    1211, 2129, 2039, 74,   0,
    1225, 2639, 2283, 765,  1355, 0,    0,    2339, 0,    9,    1733, 0,    0,    0,    1196, 0,
    84,   49,   0,    0,    321,  2297, 1255, 0,    0,    842,  2656, 0,    0,    0,    1263, 0,
    579,  89,   0,    712,  2274, 0,    1508, 525,  0,    1337, 0,    703,  1244, 651,  365,  282,
    0,    856,  0,    0,    0,    1227, 1538, 2631, 0,    1056, 1515, 1400, 0,    0,    795,  0,
    0,    230,  2234, 0,    73,   1658, 0,    1353, 178,  2193, 0,    459,  1418, 2162, 718,  0,
    575,  1097, 0,    0,    1266, 778,  1149, 0,    0,    1467, 2473, 0,    0,    2597, 0,    294,
    630,  346,  0,    0,    0,    0,    65,   2251, 2266, 0,    522,  1152, 971,  2051, 0,    0,
    542,  1074, 1104, 2567, 582,  0,    1262, 0,    2318, 2605, 1322, 0,    1307, 0,    2094, 2152,
    283,  1308, 1891, 0,    776,  0,    246,  348,  1174, 0,    2415, 0,    2063, 716,  727,  0,
    0,    0,    0,    0,    1669, 1407, 1271, 0,    2373, 264,  840,  0,    2536, 9,    901,  581,
    763,  0,    906,  0,    1800, 1394, 0,    1478, 0,    1899, 0,    0,    0,    2217, 1340, 267,
    816,  0,    0,    0,    0,    0,    0,    0,    0,    2645, 1978, 0,    726,  759,  0,    2617,
    15,   1366, 966,  0,    2,    0,    0,    2515, 0,    1236, 0,    0,    2233, 0,    0,    1144,
    0,    0,    0,    1321, 1102, 1204, 0,    1368, 1302, 2505, 1282, 2210, 366,  798,  1598, 1207,
    2495, 1396, 0,    999,  0,    734,  632,  810,  0,    2191, 1361, 1340, 778,  0,    105,  850,
    1936, 0,    1950, 0,    0,    0,    869,  1314, 582,  0,    0,    818,  382,  1225, 0,    82,
    951,  1773, 2248, 1292, 181,  2517, 0,    0,    0,    0,    0,    0,    32,   0,    2154, 0,
    318,  563,  0,    0,    658,  0,    266,  1817, 0,    1848, 0,    1446, 0,    69,   0,    426,
    419,  19,   0,    368,  731,  381,  754,  0,    87,   370,  340,  0,    851,  2275, 1500, 192,
    1448, 1253, 0,    0,    0,    0,    0,    169,  0,    1387, 0,    2184, 0,    0,    2083, 2586,
    1399, 1141, 0,    2484, 0,    0,    383,  1055, 0,    0,    0,    464,  0,    430,  1192, 0,
    1673, 0,    0,    0,    781,  0,    577,  272,  350,  716,  0,    0,    1378, 589,  1207, 115,
    1293, 0,    0,    264,  2058, 0,    0,    0,    0,    1103, 2539, 1006, 0,    0,    944,  436,
    0,    0,    1702, 702,  968,  32,   702,  674,  1602, 0,    0,    0,    0,    345,  516,  88,
    784,  2656, 0,    0,    514,  2138, 2499, 0,    0,    0,    0,    0,    659,  0,    744,  2661,
    0,    2000, 1574, 1095, 588,  198,  2082, 249,  1734, 1262, 2523, 1505, 913,  329,  727,  2352,
    742,  1043, 0,    0,    1306, 0,    1172, 0,    643,  2415, 121,  0,    358,  0,    0,    2534,
    0,    0,    0,    798,  0,    0,    687,  0,    247,  175,  771,  0,    1806, 116,  129,  325,
    919,  314,  0,    0,    2516, 0,    2439, 1916, 0,    1281, 0,    2644, 860,  0,    0,    0,
    278,  0,    0,    271,  284,  0,    1980, 0,    0,    0,    189,  44,   194,  1358, 0,    1953,
    0,    1199, 2329, 0,    0,    1326, 0,    929,  0,    0,    915,  0,    0,    303,  64,   998,
    0,    0,    0,    2128, 2119, 0,    0,    2625, 819,  1149, 1522, 0,    399,  0,    1130, 733,
    0,    1695, 546,  1252, 362,  1315, 0,    1764, 1751, 28,   0,    98,   0,    261,  478,  0,
    1240, 550,  0,    0,    2317, 2634, 706,  0,    270,  0,    0,    0,    21,   2234, 665,  665,
    1347, 2306, 1621, 1398, 0,    2326, 954,  143,  2637, 623,  2153, 1040, 2424, 0,    1416, 0,
    1,    383,  1998, 23,   1017, 130,  2440, 413,  0,    459,  792,  693,  717,  1681, 883,  0,
    793,  0,    0,    148,  1249, 0,    0,    1465, 0,    0,    807,  0,    1174, 418,  536,  700,
    135,  1176, 782,  1297, 0,    2562, 0,    0,    977,  0,    122,  2254, 1031, 126,  0,    0,
    14,   2169, 0,    2650, 0,    1003, 956,  0,    1539, 0,    892,  2395, 1540, 0,    1588, 765,
    1519, 131,  1950, 0,    0,    0,    0,    0,    1127, 15,   1142, 1356, 0,    214,  575,  0,
    0,    0,    1101, 0,    507,  0,    0,    453,  196,  0,    0,    0,    2225, 966,  0,    817,
    1124, 283,  0,    0,    1111, 1340, 0,    0,    923,  0,    732,  0,    953,  252,  0,    737,
    0,    0,    0,    2415, 381,  0,    0,    0,    0,    1859, 1350, 0,    1117, 1895, 0,    0,
    0,    0,    0,    2427, 71,   483,  631,  499,  1113, 0,    1259, 2083, 2244, 0,    1047, 1505,
    581,  0,    0,    836,  1850, 521,  779,  0,    1150, 533,  417,  112,  66,   0,    0,    527,
    320,  1391, 0,    361,  0,    94,   0,    689,  779,  0,    1674, 0,    186,  508,  897,  1164,
    0,    1470, 2572, 2076, 786,  2488, 1506, 1836, 0,    127,  1033, 0,    1186, 0,    1270, 0,
    1574, 951,  0,    1143, 513,  925,  1444, 0,    0,    779,  510,  2276, 239,  1223, 0,    326,
    1674, 1429, 0,    583,  527,  1387, 0,    1765, 242,  1117, 928,  2359, 1345, 229,  0,    133,
    1605, 2068, 0,    1927, 0,    0,    621,  1405, 769,  2065, 0,    0,    0,    0,    0,    0,
    0,    2447, 0,    0,    0,    0,    1403, 0,    641,  1029, 1032, 0,    957,  1820, 532,  0,
    0,    1317, 1531, 0,    0,    0,    1230, 0,    0,    195,  2544, 170,  0,    12,   1270, 0,
    75,   333,  944,  0,    834,  0,    149,  0,    0,    0,    0,    0,    0,    1337, 697,  0,
    0,    2307, 1426, 1926, 0,    1635, 0,    1246, 0,    2543, 0,    147,  1011, 494,  0,    1239,
    824,  2147, 0,    1290, 33,   153,  2434, 472,  1637, 1343, 807,  295,  211,  0,    547,  316,
    0,    1059, 0,    1166, 2434, 908,  698,  2164, 65,   150,  0,    666,  0,    0,    0,    0,
    588,  1253, 0,    0,    2147, 512,  0,    0,    2354, 1792, 506,  1014, 1918, 0,    627,  0,
    0,    0,    279,  0,    0,    0,    0,    0,    0,    156,  402,  736,  2282, 0,    0,    2598,
    0,    1264, 1338, 1241, 2624, 0,    0,    0,    1890, 216,  66,   188,  0,    0,    1780, 0,
    0,    0,    124,  312,  0,    1256, 681,  1702, 2608, 5,    0,    1089, 1293, 2129, 608,  0,
    594,  538,  810,  0,    0,    2099, 0,    579,  705,  0,    93,   488,  1380, 554,  2202, 1044,
    0,    0,    0,    0,    0,    66,   1205, 2148, 1002, 1012, 0,    939,  376,  1295, 711,  2460,
    0,    2097, 1386, 0,    1247, 1118, 370,  0,    2086, 350,  0,    0,    1329, 1760, 2133, 2185,
    598,  0,    0,    2321, 0,    313,  1356, 10,   1076, 314,  950,  0,    523,  1075, 72,   2080,
    0,    1543, 0,    444,  2641, 375,  684,  0,    2466, 377,  119,  0,    0,    1563, 0,    1060,
    258,  508,  1033, 0,    1232, 0,    1756, 997,  2505, 643,  981,  401,  0,    637,  956,  1154,
    391,  1778, 1321, 0,    1734, 112,  0,    488,  2459, 1480, 418,  0,    1904, 0,    1622, 947,
    66,   403,  0,    1401, 0,    73,   0,    1023, 2539, 13,   183,  0,    2015, 152,  0,    0,
    0,    47,   0,    0,    2227, 2395, 2545, 2589, 1119, 0,    0,    0,    1215, 563,  0,    1178,
    1090, 848,  424,  1073, 2447, 956,  0,    0,    1242, 1647, 0,    587,  0,    1294, 0,    1732,
    442,  1199, 839,  1265, 0,    587,  0,    0,    543,  846,  1562, 2575, 574,  1898, 0,    2471,
    1940, 2616, 207,  157,  0,    1319, 163,  0,    0,    2672, 51,   0,    223,  0,    42,   143,
    318,  0};

int MangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 2674;
    }
    return mangledkG[sum];
}

int MangledPerfectHash(const char *key)
{
    if (strlen(key) > 40)
        return 0;

    return (MangledHashG(key, mangledkT1) + MangledHashG(key, mangledkT2)) % 2674;
}

constexpr int unmangledkT1[] = {5,   243, 269, 18, 166, 172, 166, 94,  139, 124, 44,
                                223, 131, 43,  66, 43,  67,  39,  105, 117, 114, 237,
                                234, 191, 127, 71, 30,  206, 111, 221, 232, 64};
constexpr int unmangledkT2[] = {247, 144, 271, 36,  31,  34,  151, 48,  97,  17,  155,
                                261, 16,  9,   119, 217, 179, 242, 46,  267, 260, 80,
                                57,  156, 248, 258, 197, 20,  1,   257, 126, 273};
constexpr int unmangledkG[]  = {
    0,   0,   0,   0,   78,  266, 191, 101, 0,   0,   56,  0,   143, 0,   0,   152, 232, 0,   0,
    108, 0,   0,   239, 0,   199, 0,   60,  40,  48,  72,  24,  147, 0,   69,  96,  0,   0,   0,
    0,   0,   0,   214, 221, 0,   120, 236, 0,   121, 0,   196, 268, 2,   248, 0,   266, 0,   132,
    0,   0,   0,   0,   0,   264, 54,  272, 232, 0,   0,   0,   109, 94,  0,   98,  0,   0,   72,
    0,   252, 19,  149, 0,   194, 0,   118, 0,   208, 9,   101, 0,   76,  0,   11,  0,   44,  0,
    0,   187, 0,   106, 0,   0,   0,   280, 116, 51,  0,   6,   208, 133, 38,  283, 0,   125, 65,
    121, 115, 175, 74,  49,  0,   62,  0,   267, 81,  118, 0,   252, 45,  0,   177, 0,   179, 195,
    0,   0,   0,   162, 0,   241, 92,  272, 182, 49,  242, 0,   232, 0,   0,   0,   251, 0,   226,
    198, 144, 199, 255, 177, 233, 126, 155, 218, 124, 92,  212, 223, 161, 148, 155, 120, 97,  241,
    0,   90,  172, 71,  0,   0,   0,   41,  121, 0,   130, 5,   191, 177, 17,  184, 0,   189, 16,
    171, 103, 0,   25,  228, 150, 0,   242, 0,   79,  95,  79,  11,  144, 92,  63,  69,  0,   206,
    0,   230, 71,  20,  115, 0,   0,   41,  0,   0,   64,  0,   0,   138, 72,  64,  0,   0,   160,
    0,   263, 63,  97,  279, 30,  37,  37,  0,   212, 0,   58,  133, 0,   0,   0,   42,  0,   202,
    12,  0,   0,   99,  219, 0,   0,   201, 222, 204, 23,  121, 113, 1,   0,   211, 268, 0,   37,
    183, 126, 170, 216, 30,  59,  0,   243, 171, 0,   177, 0,   82,  71,  0,   122, 0,   0};

int UnmangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 284;
    }
    return unmangledkG[sum];
}

int UnmangledPerfectHash(const char *key)
{
    if (strlen(key) > 32)
        return 0;

    return (UnmangledHashG(key, unmangledkT1) + UnmangledHashG(key, unmangledkT2)) % 284;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return MangledPerfectHash(data());
}

uint32_t ImmutableString::unmangledNameHash() const
{
    return UnmangledPerfectHash(data());
}

}  // namespace sh
