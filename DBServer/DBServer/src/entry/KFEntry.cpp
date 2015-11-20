/**
*  DBServer entry
*  Copyright(C) kf
*  Author: confiner
*/

#include "iostream"
#include "mysql.h"

#pragma comment( lib, "libmysql.lib" )
#pragma comment( lib, "ws2_32.lib" )

int main( int argc, char** argv )
{
    using namespace std;
    std::cout << "entry success";

    //�ر���һ�����ݽṹ
    MYSQL mydata;

    //��ʼ�����ݿ�
    if ( 0 == mysql_library_init( 0, NULL, NULL ) ) {
        cout << "mysql_library_init() succeed" << endl;
    }
    else {
        cout << "mysql_library_init() failed" << endl;
        return -1;
    }

    //��ʼ�����ݽṹ
    if ( NULL != mysql_init( &mydata ) ) {
        cout << "mysql_init() succeed" << endl;
    }
    else {
        cout << "mysql_init() failed" << endl;
        return -1;
    }

    system( "pause" );
    return 0;
}