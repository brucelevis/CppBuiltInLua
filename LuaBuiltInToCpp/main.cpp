
#include"NcgLua.hpp"
#include<string>
#include<vector>
#include<iostream>
#include<map>

/*
	�^�X�N�F���ۂɃv�����j���O�̏���������
*/

int main() {
	
	NcgLuaManager LC;
	LC.Load("hello.lua");		//�X�N���v�g�̓ǂݍ���
	LC.SetFunction("p", 1, 2);	//�֐��̐ݒ�

	std::map<std::string, int>v3{
		{ "Hel",10 },
		{ "Pay",20 },
		{ "Tel",30 }
	};
	std::unordered_map<std::string, int>v4{
		{ "Hel2",100 },
		{ "Pay2",200 },
		{ "Tel2",300 }
	};
	LC.Call(v3,v4);	//�z��������Ƃ��ēn��

	//�߂�l�̎擾
	std::vector<std::string>vv;
	LC.Return(vv, 0);	//{"moving","hiding","shot","win"}
	std::vector<int>vv2;
	LC.Return(vv2, 0);	//{0,0,0,0}
	std::vector<bool>vv3;
	LC.Return(vv3, 0);	//{0,0,0,0}

	char lv1;
	std::vector<char> lv2;
	std::string ls1;
	std::vector<std::string> ls2;
	double d;
	LC.GetGlobal("res", d);
	LC.GetGlobal("val", lv1);	//314
	LC.GetGlobal("val", ls1);	//"314"
	LC.GetGlobal("state", lv2);	//{9,5,30}
	LC.GetGlobal("state", ls2);	//{"9","5","30"}



}