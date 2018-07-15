#include<iostream>
#include<Windows.h>

                         //q前缀为低音，1后缀为高音，s前缀为半音阶
#define q 523           //#define do 523
#define w 578           //#define re 578
#define e 659           //#define mi 659
#define r 698           //#define fa 698
#define t 784           //#define so 784
#define y 880           //#define la 880
#define u 988           //#define si 988
#define a 262          //#define qdo 262 
#define s 294          //#define qre 294
#define d 330          //#define qmi 330
#define f 349          //#define qfa 349
#define g 392          //#define qso 392
#define h 440          //#define qla 440
#define j 494          //#define qsi 494
#define z 1046         //#define do1 1046
#define x 1175         //#define re1 1175
#define c 1318         //#define mi1 1318
#define v 1480         //#define fa1 1480
#define b 1568         //#define so1 1568
#define n 1760         //#define la1 1760
#define m 1976         //#define si1 1976
#define i 554          //#define sdo 554
#define o 622          //#define sre 622
#define p 740          //#define sfa 740
#define k 831          //#define sso 831
#define l 932          //#define sla 932

//这些是因为只有26个键而没法模拟出来的音调
//#define sqdo 277         //#define sqdo 277
//#define sqre 311         //#define sqre 311
//#define sqfa 370         //#define sqfa 370
//#define sqso 415         //#define sqso 415
//#define sqla 466         //#define sqla 466
//#define sdo1 1046        //#define sdo1 1046
//#define sre1 1245        //#define sre1 1245
//#define sfa1 1480        //#define sfa1 1480
//#define sso1 1661        //#define sso1 1661
//#define sla1 1865        //#define sla1 1865
