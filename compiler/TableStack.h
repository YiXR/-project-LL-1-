#ifndef _TABLESTACK_H_
#define _TABLESTACK_H_

#include"Analysis.h"

class TableStack :public Analysis
{
protected:
	int tableMap[100][100];//Ԥ���
public:
	TableStack() { memset(tableMap, -1, sizeof(tableMap)); }
	void get_table(); //�õ�Ԥ���
	void print_out();//���
	void manage(); //�ۺ�
};
#endif
