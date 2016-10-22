
#include"NcgLua.hpp"
#include<string>
#include<vector>
#include<iostream>
#include<map>

/*
	�^�X�N�F���ۂɃv�����j���O�̏���������
*/

int main() {

	NcgLuaDatabase lDatabase;
	lDatabase.Load("AI/htn_attack.lua", 0, "htnAttack");
	NcgLuaManager* LC = lDatabase.GetManager("htnAttack");
	LC->SetFunction("GetPlan", 1, 2);	//�֐��̐ݒ�

	LC->Call(true,false);	//�z��������Ƃ��ēn��

	//�߂�l�̎擾
	std::vector<std::string>vv;
	LC->Return(vv, 0);	//{"moving","hiding","shot","win"}

	for (auto&x : vv) {
		std::cout << x << std::endl;
	}
	std::cout << std::endl;


}