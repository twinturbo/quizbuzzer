EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 2
Title "Quiz Buzzer"
Date "2023-02-24"
Rev "V0.1.0"
Comp "Tobin Stage"
Comment1 "By TwinTurbo"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Connector:Conn_01x07_Female J5
U 1 1 639E0EB7
P 9600 1000
F 0 "J5" H 9628 1026 50  0000 L CNN
F 1 "Reciver 1" H 9628 935 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x07_P2.54mm_Vertical" H 9600 1000 50  0001 C CNN
F 3 "~" H 9600 1000 50  0001 C CNN
	1    9600 1000
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x07_Female J6
U 1 1 639E23ED
P 9600 1850
F 0 "J6" H 9628 1876 50  0000 L CNN
F 1 "Reciver 2" H 9628 1785 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x07_P2.54mm_Vertical" H 9600 1850 50  0001 C CNN
F 3 "~" H 9600 1850 50  0001 C CNN
	1    9600 1850
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x07_Female J7
U 1 1 639E2D2B
P 9650 2750
F 0 "J7" H 9678 2776 50  0000 L CNN
F 1 "Reciver 3" H 9678 2685 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x07_P2.54mm_Vertical" H 9650 2750 50  0001 C CNN
F 3 "~" H 9650 2750 50  0001 C CNN
	1    9650 2750
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x07_Female J8
U 1 1 639E62CA
P 9650 3650
F 0 "J8" H 9678 3676 50  0000 L CNN
F 1 "Reciver 4" H 9678 3585 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x07_P2.54mm_Vertical" H 9650 3650 50  0001 C CNN
F 3 "~" H 9650 3650 50  0001 C CNN
	1    9650 3650
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x07_Female J10
U 1 1 639E6F2C
P 10700 1050
F 0 "J10" H 10728 1076 50  0000 L CNN
F 1 "Reciver 5" H 10728 985 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x07_P2.54mm_Vertical" H 10700 1050 50  0001 C CNN
F 3 "~" H 10700 1050 50  0001 C CNN
	1    10700 1050
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x07_Female J11
U 1 1 639E8042
P 10700 1850
F 0 "J11" H 10728 1876 50  0000 L CNN
F 1 "Reciver 6" H 10728 1785 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x07_P2.54mm_Vertical" H 10700 1850 50  0001 C CNN
F 3 "~" H 10700 1850 50  0001 C CNN
	1    10700 1850
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR015
U 1 1 639E891E
P 9400 800
F 0 "#PWR015" H 9400 650 50  0001 C CNN
F 1 "+5V" V 9415 928 50  0000 L CNN
F 2 "" H 9400 800 50  0001 C CNN
F 3 "" H 9400 800 50  0001 C CNN
	1    9400 800 
	0    -1   -1   0   
$EndComp
$Comp
L power:+5V #PWR016
U 1 1 639E9A80
P 9400 1650
F 0 "#PWR016" H 9400 1500 50  0001 C CNN
F 1 "+5V" V 9415 1778 50  0000 L CNN
F 2 "" H 9400 1650 50  0001 C CNN
F 3 "" H 9400 1650 50  0001 C CNN
	1    9400 1650
	0    -1   -1   0   
$EndComp
$Comp
L power:+5V #PWR018
U 1 1 639EA27F
P 9450 2550
F 0 "#PWR018" H 9450 2400 50  0001 C CNN
F 1 "+5V" V 9465 2678 50  0000 L CNN
F 2 "" H 9450 2550 50  0001 C CNN
F 3 "" H 9450 2550 50  0001 C CNN
	1    9450 2550
	0    -1   -1   0   
$EndComp
$Comp
L power:+5V #PWR020
U 1 1 639EACA0
P 9450 3450
F 0 "#PWR020" H 9450 3300 50  0001 C CNN
F 1 "+5V" V 9465 3578 50  0000 L CNN
F 2 "" H 9450 3450 50  0001 C CNN
F 3 "" H 9450 3450 50  0001 C CNN
	1    9450 3450
	0    -1   -1   0   
$EndComp
$Comp
L power:+5V #PWR024
U 1 1 639EB4EB
P 10500 850
F 0 "#PWR024" H 10500 700 50  0001 C CNN
F 1 "+5V" V 10515 978 50  0000 L CNN
F 2 "" H 10500 850 50  0001 C CNN
F 3 "" H 10500 850 50  0001 C CNN
	1    10500 850 
	0    -1   -1   0   
$EndComp
$Comp
L power:+5V #PWR026
U 1 1 639EC6ED
P 10500 1650
F 0 "#PWR026" H 10500 1500 50  0001 C CNN
F 1 "+5V" V 10515 1778 50  0000 L CNN
F 2 "" H 10500 1650 50  0001 C CNN
F 3 "" H 10500 1650 50  0001 C CNN
	1    10500 1650
	0    -1   -1   0   
$EndComp
$Comp
L power:+5V #PWR05
U 1 1 639EDF5C
P 2800 5100
F 0 "#PWR05" H 2800 4950 50  0001 C CNN
F 1 "+5V" V 2815 5228 50  0000 L CNN
F 2 "" H 2800 5100 50  0001 C CNN
F 3 "" H 2800 5100 50  0001 C CNN
	1    2800 5100
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR019
U 1 1 639F167C
P 9450 3350
F 0 "#PWR019" H 9450 3100 50  0001 C CNN
F 1 "GND" V 9455 3222 50  0000 R CNN
F 2 "" H 9450 3350 50  0001 C CNN
F 3 "" H 9450 3350 50  0001 C CNN
	1    9450 3350
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR017
U 1 1 639F1FAD
P 9450 2450
F 0 "#PWR017" H 9450 2200 50  0001 C CNN
F 1 "GND" V 9455 2322 50  0000 R CNN
F 2 "" H 9450 2450 50  0001 C CNN
F 3 "" H 9450 2450 50  0001 C CNN
	1    9450 2450
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR014
U 1 1 639F277E
P 9400 700
F 0 "#PWR014" H 9400 450 50  0001 C CNN
F 1 "GND" V 9405 572 50  0000 R CNN
F 2 "" H 9400 700 50  0001 C CNN
F 3 "" H 9400 700 50  0001 C CNN
	1    9400 700 
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR023
U 1 1 639F3154
P 10500 750
F 0 "#PWR023" H 10500 500 50  0001 C CNN
F 1 "GND" V 10505 622 50  0000 R CNN
F 2 "" H 10500 750 50  0001 C CNN
F 3 "" H 10500 750 50  0001 C CNN
	1    10500 750 
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR025
U 1 1 639F3EAA
P 10500 1550
F 0 "#PWR025" H 10500 1300 50  0001 C CNN
F 1 "GND" V 10505 1422 50  0000 R CNN
F 2 "" H 10500 1550 50  0001 C CNN
F 3 "" H 10500 1550 50  0001 C CNN
	1    10500 1550
	0    1    1    0   
$EndComp
Text GLabel 5400 4500 2    50   Input ~ 0
Rec1
Text GLabel 5400 4600 2    50   Input ~ 0
Rec2
Text GLabel 5400 4700 2    50   Input ~ 0
Rec3
Text GLabel 5400 4800 2    50   Input ~ 0
Rec4
Text GLabel 5400 4900 2    50   Input ~ 0
Rec5
Text GLabel 5400 5000 2    50   Input ~ 0
Rec6
Text GLabel 9400 1200 0    50   Output ~ 0
Rec1
Text GLabel 9400 2050 0    50   Output ~ 0
Rec2
Text GLabel 9450 2950 0    50   Output ~ 0
Rec3
Text GLabel 9450 3850 0    50   Output ~ 0
Rec4
Text GLabel 10500 1250 0    50   Output ~ 0
Rec5
Text GLabel 10500 2050 0    50   Output ~ 0
Rec6
$Comp
L Connector:Conn_01x07_Female J12
U 1 1 63A2CA1C
P 10750 2800
F 0 "J12" H 10778 2826 50  0000 L CNN
F 1 "Reciver 7" H 10778 2735 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x07_P2.54mm_Vertical" H 10750 2800 50  0001 C CNN
F 3 "~" H 10750 2800 50  0001 C CNN
	1    10750 2800
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x07_Female J13
U 1 1 63A2CDB8
P 10750 3600
F 0 "J13" H 10778 3626 50  0000 L CNN
F 1 "Reciver 8" H 10778 3535 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x07_P2.54mm_Vertical" H 10750 3600 50  0001 C CNN
F 3 "~" H 10750 3600 50  0001 C CNN
	1    10750 3600
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR028
U 1 1 63A2CDC2
P 10550 2600
F 0 "#PWR028" H 10550 2450 50  0001 C CNN
F 1 "+5V" V 10565 2728 50  0000 L CNN
F 2 "" H 10550 2600 50  0001 C CNN
F 3 "" H 10550 2600 50  0001 C CNN
	1    10550 2600
	0    -1   -1   0   
$EndComp
$Comp
L power:+5V #PWR030
U 1 1 63A2CDCC
P 10550 3400
F 0 "#PWR030" H 10550 3250 50  0001 C CNN
F 1 "+5V" V 10565 3528 50  0000 L CNN
F 2 "" H 10550 3400 50  0001 C CNN
F 3 "" H 10550 3400 50  0001 C CNN
	1    10550 3400
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR027
U 1 1 63A2CDD6
P 10550 2500
F 0 "#PWR027" H 10550 2250 50  0001 C CNN
F 1 "GND" V 10555 2372 50  0000 R CNN
F 2 "" H 10550 2500 50  0001 C CNN
F 3 "" H 10550 2500 50  0001 C CNN
	1    10550 2500
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR029
U 1 1 63A2CDE0
P 10550 3300
F 0 "#PWR029" H 10550 3050 50  0001 C CNN
F 1 "GND" V 10555 3172 50  0000 R CNN
F 2 "" H 10550 3300 50  0001 C CNN
F 3 "" H 10550 3300 50  0001 C CNN
	1    10550 3300
	0    1    1    0   
$EndComp
Text GLabel 10550 3000 0    50   Output ~ 0
Rec7
Text GLabel 10550 3800 0    50   Output ~ 0
Rec8
Text GLabel 5400 5100 2    50   Input ~ 0
Rec7
Text GLabel 5400 5400 2    50   Input ~ 0
Rec10
Text GLabel 5400 2200 2    50   Output ~ 0
Lamp1
Text GLabel 5400 2300 2    50   Output ~ 0
Lamp2
Text GLabel 5400 2400 2    50   Output ~ 0
Lamp3
Text GLabel 5400 2500 2    50   Output ~ 0
Lamp4
Text GLabel 5400 2600 2    50   Output ~ 0
Lamp5
Text GLabel 5400 2700 2    50   Output ~ 0
Lamp6
Text GLabel 5400 2800 2    50   Output ~ 0
Lamp7
Text GLabel 5400 2900 2    50   Output ~ 0
Lamp8
Text GLabel 2800 1900 0    50   Output ~ 0
SDA
Text GLabel 2800 2000 0    50   Output ~ 0
SCL
NoConn ~ 9400 900 
NoConn ~ 9400 1000
NoConn ~ 9400 1100
NoConn ~ 9400 1300
NoConn ~ 10500 950 
NoConn ~ 10500 1050
NoConn ~ 10500 1150
NoConn ~ 10500 1350
NoConn ~ 10500 1750
NoConn ~ 10500 1850
NoConn ~ 10500 1950
NoConn ~ 10500 2150
NoConn ~ 10550 2700
NoConn ~ 10550 2800
NoConn ~ 10550 2900
NoConn ~ 10550 3100
NoConn ~ 10550 3500
NoConn ~ 10550 3600
NoConn ~ 10550 3700
NoConn ~ 10550 3900
NoConn ~ 9450 3950
NoConn ~ 9450 3750
NoConn ~ 9450 3650
NoConn ~ 9450 3550
NoConn ~ 9450 3050
NoConn ~ 9450 2850
NoConn ~ 9450 2750
NoConn ~ 9450 2650
NoConn ~ 9400 1750
NoConn ~ 9400 1850
NoConn ~ 9400 1950
NoConn ~ 9400 2150
$Comp
L Regulator_Linear:L7805 U1
U 1 1 63BEF348
P 8150 5750
F 0 "U1" H 8150 5992 50  0000 C CNN
F 1 "L7805" H 8150 5901 50  0000 C CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 8175 5600 50  0001 L CIN
F 3 "http://www.st.com/content/ccc/resource/technical/document/datasheet/41/4f/b3/b0/12/d4/47/88/CD00000444.pdf/files/CD00000444.pdf/jcr:content/translations/en.CD00000444.pdf" H 8150 5700 50  0001 C CNN
	1    8150 5750
	1    0    0    -1  
$EndComp
$Comp
L Device:C C2
U 1 1 63BF00AF
P 7850 5900
F 0 "C2" H 7965 5946 50  0000 L CNN
F 1 "C" H 7965 5855 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D4.3mm_W1.9mm_P5.00mm" H 7888 5750 50  0001 C CNN
F 3 "~" H 7850 5900 50  0001 C CNN
	1    7850 5900
	1    0    0    -1  
$EndComp
$Comp
L Device:C C3
U 1 1 63BF2187
P 8450 5900
F 0 "C3" H 8565 5946 50  0000 L CNN
F 1 "C" H 8565 5855 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D4.3mm_W1.9mm_P5.00mm" H 8488 5750 50  0001 C CNN
F 3 "~" H 8450 5900 50  0001 C CNN
	1    8450 5900
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4007 D1
U 1 1 63BF25B5
P 8200 5400
F 0 "D1" V 8300 5300 50  0000 L CNN
F 1 "1N4007" H 8100 5250 50  0000 L CNN
F 2 "Diode_THT:D_DO-41_SOD81_P10.16mm_Horizontal" H 8200 5225 50  0001 C CNN
F 3 "http://www.vishay.com/docs/88503/1n4001.pdf" H 8200 5400 50  0001 C CNN
	1    8200 5400
	1    0    0    1   
$EndComp
Wire Wire Line
	8350 5400 8450 5400
Wire Wire Line
	8450 5400 8450 5750
Connection ~ 8450 5750
Wire Wire Line
	8050 5400 7850 5400
Wire Wire Line
	7850 5400 7850 5750
Connection ~ 7850 5750
Wire Wire Line
	7850 6050 8150 6050
Connection ~ 8150 6050
Wire Wire Line
	8150 6050 8450 6050
Wire Wire Line
	8450 5750 9300 5750
$Comp
L power:GND #PWR012
U 1 1 63C020B9
P 8150 6100
F 0 "#PWR012" H 8150 5850 50  0001 C CNN
F 1 "GND" V 8155 5972 50  0000 R CNN
F 2 "" H 8150 6100 50  0001 C CNN
F 3 "" H 8150 6100 50  0001 C CNN
	1    8150 6100
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR013
U 1 1 63C0329A
P 9300 5750
F 0 "#PWR013" H 9300 5600 50  0001 C CNN
F 1 "+5V" V 9315 5878 50  0000 L CNN
F 2 "" H 9300 5750 50  0001 C CNN
F 3 "" H 9300 5750 50  0001 C CNN
	1    9300 5750
	0    1    1    0   
$EndComp
$Comp
L Connector:Barrel_Jack_Switch J4
U 1 1 63C04674
P 6800 5850
F 0 "J4" H 6828 5876 50  0000 L CNN
F 1 "Powerjack" H 6750 6000 50  0000 L CNN
F 2 "Connector_BarrelJack:BarrelJack_Horizontal" H 6800 5850 50  0001 C CNN
F 3 "~" H 6800 5850 50  0001 C CNN
	1    6800 5850
	1    0    0    -1  
$EndComp
Wire Wire Line
	7250 5850 7250 5950
Wire Wire Line
	7250 6050 7850 6050
Connection ~ 7850 6050
$Comp
L power:+12V #PWR011
U 1 1 63C0CE1E
P 7550 5750
F 0 "#PWR011" H 7550 5600 50  0001 C CNN
F 1 "+12V" H 7565 5923 50  0000 C CNN
F 2 "" H 7550 5750 50  0001 C CNN
F 3 "" H 7550 5750 50  0001 C CNN
	1    7550 5750
	1    0    0    -1  
$EndComp
Connection ~ 7550 5750
Wire Wire Line
	7550 5750 7850 5750
Text GLabel 6100 5650 0    50   Output ~ 0
SCL
Text GLabel 6100 5750 0    50   Output ~ 0
SDA
$Comp
L Connector:Conn_01x04_Female J3
U 1 1 63C13731
P 6300 5750
F 0 "J3" H 6328 5776 50  0000 L CNN
F 1 "I2C" H 6250 5900 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x04_P2.54mm_Vertical" H 6300 5750 50  0001 C CNN
F 3 "~" H 6300 5750 50  0001 C CNN
	1    6300 5750
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR09
U 1 1 63C1AEEE
P 6100 5950
F 0 "#PWR09" H 6100 5800 50  0001 C CNN
F 1 "+5V" V 6115 6078 50  0000 L CNN
F 2 "" H 6100 5950 50  0001 C CNN
F 3 "" H 6100 5950 50  0001 C CNN
	1    6100 5950
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR010
U 1 1 63C1C460
P 6100 5850
F 0 "#PWR010" H 6100 5600 50  0001 C CNN
F 1 "GND" V 6105 5722 50  0000 R CNN
F 2 "" H 6100 5850 50  0001 C CNN
F 3 "" H 6100 5850 50  0001 C CNN
	1    6100 5850
	0    1    1    0   
$EndComp
Wire Wire Line
	8150 6050 8150 6100
Text Notes 7050 6750 0    118  ~ 0
quizbuzzer V0.1.0
$Comp
L power:GND #PWR08
U 1 1 63AAC89C
P 6000 2200
F 0 "#PWR08" H 6000 1950 50  0001 C CNN
F 1 "GND" V 6005 2072 50  0000 R CNN
F 2 "" H 6000 2200 50  0001 C CNN
F 3 "" H 6000 2200 50  0001 C CNN
	1    6000 2200
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR06
U 1 1 63A989D5
P 6000 1100
F 0 "#PWR06" H 6000 850 50  0001 C CNN
F 1 "GND" V 6005 972 50  0000 R CNN
F 2 "" H 6000 1100 50  0001 C CNN
F 3 "" H 6000 1100 50  0001 C CNN
	1    6000 1100
	0    1    1    0   
$EndComp
$Comp
L power:+5V #PWR07
U 1 1 63A96EF1
P 6000 1200
F 0 "#PWR07" H 6000 1050 50  0001 C CNN
F 1 "+5V" V 6015 1328 50  0000 L CNN
F 2 "" H 6000 1200 50  0001 C CNN
F 3 "" H 6000 1200 50  0001 C CNN
	1    6000 1200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5400 1300 6000 1300
Wire Wire Line
	5400 1400 6000 1400
Wire Wire Line
	5400 1500 6000 1500
Wire Wire Line
	5400 1600 6000 1600
$Sheet
S 5900 7250 700  400 
U 63FFE5A8
F0 "Relays" 50
F1 "relays.sch" 50
$EndSheet
$Comp
L Connector:Conn_01x12_Female J2
U 1 1 63A8C158
P 6200 1600
F 0 "J2" H 6228 1626 50  0000 L CNN
F 1 "MP3out" H 6228 1535 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x12_P2.54mm_Vertical" H 6200 1600 50  0001 C CNN
F 3 "~" H 6200 1600 50  0001 C CNN
	1    6200 1600
	1    0    0    -1  
$EndComp
Wire Wire Line
	5400 1700 6000 1700
Wire Wire Line
	5400 1800 6000 1800
Wire Wire Line
	5400 1900 6000 1900
Wire Wire Line
	5400 2000 6000 2000
Text GLabel 5400 5200 2    50   Input ~ 0
Rec8
Text GLabel 5400 5300 2    50   Input ~ 0
Rec9
Text GLabel 5400 3000 2    50   Output ~ 0
Lamp9
Text GLabel 5400 3100 2    50   Output ~ 0
Lamp10
$Comp
L Device:C C1
U 1 1 64085414
P 2450 4950
F 0 "C1" H 2565 4996 50  0000 L CNN
F 1 "100nf" H 2565 4905 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D4.3mm_W1.9mm_P5.00mm" H 2488 4800 50  0001 C CNN
F 3 "~" H 2450 4950 50  0001 C CNN
	1    2450 4950
	1    0    0    -1  
$EndComp
Wire Wire Line
	2450 5100 2450 5300
Wire Wire Line
	2450 5300 2800 5300
NoConn ~ 2800 5000
NoConn ~ 2800 4200
$Comp
L Connector:Conn_01x07_Female J9
U 1 1 640D4073
P 9650 4650
F 0 "J9" H 9678 4676 50  0000 L CNN
F 1 "Reciver 9" H 9678 4585 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x07_P2.54mm_Vertical" H 9650 4650 50  0001 C CNN
F 3 "~" H 9650 4650 50  0001 C CNN
	1    9650 4650
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x07_Female J14
U 1 1 640D469F
P 10750 4650
F 0 "J14" H 10778 4676 50  0000 L CNN
F 1 "Reciver 10" H 10778 4585 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x07_P2.54mm_Vertical" H 10750 4650 50  0001 C CNN
F 3 "~" H 10750 4650 50  0001 C CNN
	1    10750 4650
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR022
U 1 1 640D46A9
P 9450 4450
F 0 "#PWR022" H 9450 4300 50  0001 C CNN
F 1 "+5V" V 9465 4578 50  0000 L CNN
F 2 "" H 9450 4450 50  0001 C CNN
F 3 "" H 9450 4450 50  0001 C CNN
	1    9450 4450
	0    -1   -1   0   
$EndComp
$Comp
L power:+5V #PWR032
U 1 1 640D46B3
P 10550 4450
F 0 "#PWR032" H 10550 4300 50  0001 C CNN
F 1 "+5V" V 10565 4578 50  0000 L CNN
F 2 "" H 10550 4450 50  0001 C CNN
F 3 "" H 10550 4450 50  0001 C CNN
	1    10550 4450
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR021
U 1 1 640D46BD
P 9450 4350
F 0 "#PWR021" H 9450 4100 50  0001 C CNN
F 1 "GND" V 9455 4222 50  0000 R CNN
F 2 "" H 9450 4350 50  0001 C CNN
F 3 "" H 9450 4350 50  0001 C CNN
	1    9450 4350
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR031
U 1 1 640D46C7
P 10550 4350
F 0 "#PWR031" H 10550 4100 50  0001 C CNN
F 1 "GND" V 10555 4222 50  0000 R CNN
F 2 "" H 10550 4350 50  0001 C CNN
F 3 "" H 10550 4350 50  0001 C CNN
	1    10550 4350
	0    1    1    0   
$EndComp
Text GLabel 9450 4850 0    50   Output ~ 0
Rec9
Text GLabel 10550 4850 0    50   Output ~ 0
Rec10
NoConn ~ 9450 4550
NoConn ~ 9450 4650
NoConn ~ 9450 4750
NoConn ~ 9450 4950
NoConn ~ 10550 4550
NoConn ~ 10550 4650
NoConn ~ 10550 4750
NoConn ~ 10550 4950
$Comp
L power:GND #PWR03
U 1 1 640D0400
P 6050 4150
F 0 "#PWR03" H 6050 3900 50  0001 C CNN
F 1 "GND" V 6055 4022 50  0000 R CNN
F 2 "" H 6050 4150 50  0001 C CNN
F 3 "" H 6050 4150 50  0001 C CNN
	1    6050 4150
	1    0    0    -1  
$EndComp
Wire Wire Line
	6050 4100 6050 4150
Wire Wire Line
	5950 4100 6050 4100
Wire Wire Line
	5950 4000 5950 4100
$Comp
L Connector:Conn_01x10_Female J1
U 1 1 63AC7BF8
P 6150 3500
F 0 "J1" H 6178 3526 50  0000 L CNN
F 1 "Controls" H 6178 3435 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x10_P2.54mm_Vertical" H 6150 3500 50  0001 C CNN
F 3 "~" H 6150 3500 50  0001 C CNN
	1    6150 3500
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0101
U 1 1 641094EA
P 5950 3100
F 0 "#PWR0101" H 5950 2950 50  0001 C CNN
F 1 "+5V" V 5965 3228 50  0000 L CNN
F 2 "" H 5950 3100 50  0001 C CNN
F 3 "" H 5950 3100 50  0001 C CNN
	1    5950 3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5400 3200 5950 3200
Wire Wire Line
	5400 3300 5950 3300
Wire Wire Line
	5400 3400 5950 3400
Wire Wire Line
	5400 3500 5950 3500
Wire Wire Line
	5400 3600 5950 3600
Wire Wire Line
	5400 3700 5950 3700
Wire Wire Line
	5400 3800 5950 3800
Wire Wire Line
	5950 3900 5400 3900
Wire Wire Line
	2800 5200 2800 5300
Wire Wire Line
	2450 4800 2800 4800
Wire Wire Line
	2800 4600 2800 4700
Wire Wire Line
	2800 4700 2800 4800
Connection ~ 2800 4700
$Comp
L power:GND #PWR04
U 1 1 639EFCAE
P 2800 4700
F 0 "#PWR04" H 2800 4450 50  0001 C CNN
F 1 "GND" V 2805 4572 50  0000 R CNN
F 2 "" H 2800 4700 50  0001 C CNN
F 3 "" H 2800 4700 50  0001 C CNN
	1    2800 4700
	0    1    1    0   
$EndComp
$Comp
L AA-ROBSCH:Arduino_Mega2560_Pro_Mini XA1
U 1 1 6416EE73
P 4100 3250
F 0 "XA1" H 4100 869 60  0000 C CNN
F 1 "Arduino_Mega2560_Pro_Mini" H 4100 763 60  0000 C CNN
F 2 "AA-ROB-FULL:MEGA2560PRO-EMBED" H 4800 6000 60  0001 C CNN
F 3 "" H 4800 6000 60  0001 C CNN
	1    4100 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	2800 4500 2800 4600
Connection ~ 2800 4600
Wire Wire Line
	2800 5100 2800 5200
Connection ~ 2800 5100
Connection ~ 2800 5200
$Comp
L power:+5V #PWR0102
U 1 1 642B12B8
P 4150 650
F 0 "#PWR0102" H 4150 500 50  0001 C CNN
F 1 "+5V" V 4165 778 50  0000 L CNN
F 2 "" H 4150 650 50  0001 C CNN
F 3 "" H 4150 650 50  0001 C CNN
	1    4150 650 
	0    1    1    0   
$EndComp
Wire Wire Line
	5400 2100 6000 2100
$Comp
L Mechanical:MountingHole_Pad H?
U 1 1 642F0ECD
P 6750 1000
AR Path="/642DAA34/642F0ECD" Ref="H?"  Part="1" 
AR Path="/642F0ECD" Ref="H1"  Part="1" 
F 0 "H1" H 6850 1049 50  0000 L CNN
F 1 "MountingHole_Pad" H 6850 958 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3_DIN965_Pad" H 6750 1000 50  0001 C CNN
F 3 "~" H 6750 1000 50  0001 C CNN
	1    6750 1000
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole_Pad H?
U 1 1 6432BBA6
P 6750 1300
AR Path="/642DAA34/6432BBA6" Ref="H?"  Part="1" 
AR Path="/6432BBA6" Ref="H2"  Part="1" 
F 0 "H2" H 6850 1349 50  0000 L CNN
F 1 "MountingHole_Pad" H 6850 1258 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3_DIN965_Pad" H 6750 1300 50  0001 C CNN
F 3 "~" H 6750 1300 50  0001 C CNN
	1    6750 1300
	-1   0    0    1   
$EndComp
$Comp
L Mechanical:MountingHole_Pad H?
U 1 1 6432C848
P 7000 1300
AR Path="/642DAA34/6432C848" Ref="H?"  Part="1" 
AR Path="/6432C848" Ref="H3"  Part="1" 
F 0 "H3" H 7100 1349 50  0000 L CNN
F 1 "MountingHole_Pad" H 7100 1258 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3_DIN965_Pad" H 7000 1300 50  0001 C CNN
F 3 "~" H 7000 1300 50  0001 C CNN
	1    7000 1300
	-1   0    0    1   
$EndComp
$Comp
L Mechanical:MountingHole_Pad H?
U 1 1 6432D114
P 7250 1300
AR Path="/642DAA34/6432D114" Ref="H?"  Part="1" 
AR Path="/6432D114" Ref="H4"  Part="1" 
F 0 "H4" H 7350 1349 50  0000 L CNN
F 1 "MountingHole_Pad" H 7350 1258 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3_DIN965_Pad" H 7250 1300 50  0001 C CNN
F 3 "~" H 7250 1300 50  0001 C CNN
	1    7250 1300
	-1   0    0    1   
$EndComp
Wire Wire Line
	6750 1100 6750 1200
Wire Wire Line
	6750 1200 7000 1200
Connection ~ 6750 1200
Connection ~ 7000 1200
Wire Wire Line
	7000 1200 7250 1200
$Comp
L power:GND #PWR0103
U 1 1 6432E9A8
P 7250 1200
F 0 "#PWR0103" H 7250 950 50  0001 C CNN
F 1 "GND" V 7255 1072 50  0000 R CNN
F 2 "" H 7250 1200 50  0001 C CNN
F 3 "" H 7250 1200 50  0001 C CNN
	1    7250 1200
	0    -1   -1   0   
$EndComp
Connection ~ 7250 1200
$Comp
L power:GND #PWR0104
U 1 1 640CC346
P 9400 1550
F 0 "#PWR0104" H 9400 1300 50  0001 C CNN
F 1 "GND" V 9405 1422 50  0000 R CNN
F 2 "" H 9400 1550 50  0001 C CNN
F 3 "" H 9400 1550 50  0001 C CNN
	1    9400 1550
	0    1    1    0   
$EndComp
Wire Wire Line
	7100 5850 7250 5850
Wire Wire Line
	7100 5950 7250 5950
Connection ~ 7250 5950
Wire Wire Line
	7250 5950 7250 6050
Wire Wire Line
	7100 5750 7550 5750
$EndSCHEMATC
