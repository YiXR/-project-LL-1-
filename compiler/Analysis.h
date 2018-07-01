#ifndef _ANALYSIS_H_
#define _ANALYSIS_H_
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <iomanip>
#include <map>
#include <cmath>
#include <stack>
#include <fstream>
using namespace std;

struct node
{
	string left;
	string right[100];
};

class Analysis
{
protected:
	int T;
	node analysis_str[100];

	set<string> first_set[100];//first��
	set<string> follow_set[100];//follow��
	vector<string> ter_withoutblack; //ȥ�����ս��
	vector<string> terminal;//�ս��
	vector<string> nonterminal;//���ս��

public:
	Analysis() :T(0) {}
	bool isNotTerminal(string c);//�ж��Ƿ�Ϊ���ս��
	void remove();//��ݹ�����
	int get_index(string target);//������ս�������е��±�
	int get_non_index(string target);//����ڷ��ս�������е��±�
	void get_first(string target); //�õ�first����
	void get_follow(string target);//�õ�follow����
	void inputAndSolve(); //����õ�first��follow
	void display(); //��ʾ

};
#endif 
