#include "Menu.h"
#include <iostream>
using namespace std;

void show_menu()
{
	cout << "     -------------------------------------------------------------------------" << endl;
	cout << "    |                                 Menu                                    |" << endl;
	cout << "     -------------------------------------------------------------------------" << endl;
	cout << "    | 文件操作 | " << "| 简介     |" << " | 格式                                          |" << endl;
	cout << "    |  create  | " << "| 创建文件 |" << " | create(文件名，文件最大字节长度，文件保护方式)|" << endl;
	cout << "    |  write   | " << "| 写文件   |" << " | write(文件描述符，要写的字节个数)             |" << endl;
	cout << "    |  open    | " << "| 打开文件 |" << " | open(文件描述符，操作方式)                    |" << endl;
	cout << "    |  read    | " << "| 读文件   |" << " | read(文件描述符，要读的字节个数)              |" << endl;
	cout << "    |  close   | " << "| 关闭文件 |" << " | close(文件描述符)                             |" << endl;
	cout << "    |  delete  | " << "| 删除文件 |" << " | delete(文件名)                                |" << endl;
	cout << "     -------------------------------------------------------------------------" << endl;
	cout << endl;

}
