#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int qnt_certo, qnt_aluno, aux;
	set<int> cnjt_certo, cnjt_aluno;
	vector<int> elem_sobrou, elem_faltou;

	cin >> qnt_certo;
	for(int i = 0; i < qnt_certo; i++){
		cin >> aux;
		cnjt_certo.insert(aux);
		cnjt_aluno.insert(aux);
	} 

	cin >> qnt_aluno;
	for(int i = 0; i < qnt_aluno; i++){
		cin >> aux;

		if(cnjt_certo.count(aux) == 0) elem_sobrou.push_back(aux);
		else cnjt_aluno.erase(aux);
	}

	if(!cnjt_aluno.empty()){
		while(!cnjt_aluno.empty()){
			int aux = *cnjt_aluno.begin();
			elem_faltou.push_back(aux);
			cnjt_aluno.erase(aux);
		}
	}

	if(elem_faltou.empty() == false || elem_sobrou.empty() == false){
		if(elem_sobrou.empty() == false){
			cout << "Sobrou:" << endl;
			sort(elem_sobrou.begin(), elem_sobrou.end());
			for(int i = 0; i < elem_sobrou.size(); i++){
				cout << elem_sobrou[i] << ' ';
			}
			cout << endl;
		}
		if(elem_faltou.empty() == false){
			cout << "Faltou:" << endl;
			sort(elem_faltou.begin(), elem_faltou.end());
			for(int i = 0; i < elem_faltou.size(); i++){
				cout << elem_faltou[i] << ' ';
			}
			cout << endl;
		}
	}
	else cout << "Acertou tudo" << endl;

	return 0;
}