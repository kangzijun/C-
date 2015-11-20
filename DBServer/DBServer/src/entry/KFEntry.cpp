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

    //必备的一个数据结构
    MYSQL mydata;

    //初始化数据库
    if ( 0 == mysql_library_init( 0, NULL, NULL ) ) {
        cout << "mysql_library_init() succeed" << endl;
    }
    else {
        cout << "mysql_library_init() failed" << endl;
        return -1;
    }

    //初始化数据结构
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