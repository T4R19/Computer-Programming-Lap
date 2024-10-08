/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนขึ้นไปนมากกว่า 80
    (กำหนดให้ข้อนี้ใช้คำสั่ง if else ได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !

    Test case:
        enter score :
            hello
    Output:
        please enter number only.
*/

#include <stdio.h>

int main() {
    int score ;
    int them ;
    printf ( " please score enter ") ;
    scanf( "%d" , & score ) ;
    switch(score /5) {
        case 20:
        case 19:
        case 18:
        case 17:
        case 16:
            printf(" A ") ;
            break;
        case 15:
            printf(" B+ ") ;
            break;
        case 14:
            printf( " B " ) ;
            break;
        case 13:
            printf( " C+ ") ;
            break;
        case 12:
            printf( " C " ) ;
            break;
        case 11:
            printf( " D+ ") ;
            break;
        case 10:
            printf( " D " ) ;
            break;
        default:
            printf( " F " ) ;
            break;
    }//end switch
    return 0 ;
}//end main function