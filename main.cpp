#include <iostream>
#include <string>
#include"BookB.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "BookShelf.h"

using namespace std;

int main(int argc, char** argv){
	system ("chcp 1251");
	int mode = -1;
	vector<BookShelf> bshelfs;
	BookShelf bshelf;
	while(mode!=0){
		cout<<" -= ���� =- "<<endl;
		cout<<"1. �������� ����."<<endl;
		cout<<"2. �������� ����� � ����."<<endl;
		cout<<"3. �������� �����."<<endl;
		cout<<"4. ����� �� �����."<<endl;
		cout<<"0. �����."<<endl;
		cout<<"������� ����� � ������� <ENTER>"<<endl;
		cin>>mode;
		switch(mode){
			case 0: continue;
			case 1:
				
				bshelfs.push_back(bshelf);
				cout<<"���� ��������!"<<endl<<endl;
				break;
			case 2:
				if(bshelfs.size()>0){
					cout<<"�������� "<<bshelfs.size()<<" ������"<<endl;
					cout<<"������� ����� ����� (�� 1 �� "<<bshelfs.size()<<"): ";
					int n = 0;
					cin>>n;
					if(n>0 && n<=bshelfs.size()){
						bshelfs[n-1].addShelf();
						cout<<"����� ���������!"<<endl<<endl;
					}else{
						cout<<"������ � ������ �����. ���������."<<endl<<endl;
					}
				}else{
					cout<<"��������� ����� �����������!"<<endl<<endl;
					
				}
				break;
			case 3:
				if(bshelfs.size()>0){
					cout<<"�������� "<<bshelfs.size()<<" ������"<<endl;
					cout<<"������� ����� ����� (�� 1 �� "<<bshelfs.size()<<"): ";
					int n = 0;
					cin>>n;
					if(n>0 && n<=bshelfs.size()){
						cout<<"������� ����� �����: ";
						int m=0;
						cin>>m;
						PrintBook pb;
						cout<<"������� �������� �����: ";
						string name;
						cin>>name;
						cout<<"������� ���-�� �������: ";
						int pages;
						cin>>pages;
						pb.setName(name);
						pb.setPages(pages);
						bshelfs[n].addBook(pb,m-1);
					}else{
						cout<<"������ � ������ ������ ���������."<<endl<<endl;
					}
				}else{
					cout<<"��������� ����� �����������!"<<endl<<endl;	
	
				}
				break;
			case 4:
				for(int i=0;i<bshelfs.size();i++){
					cout<<"===���� �"<<i+1<<" ==="<<endl;
					bshelfs[i].Print();				
				}
			break;
		}
	}
	cout<<"����!";
	return 0;
};
