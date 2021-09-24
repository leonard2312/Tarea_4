#include <iostream>

using namespace std;
int ren=10,col=10;
string Array_2D[100][100];

void Clear(string);
void get_row_size();
void get_col_size();
void set_item(int,int,string);
void get_item(int,int);
void to_string();

int main(){
	
	Clear("gol");
	get_row_size();
	get_col_size();
	set_item(2,1,"Gustavo");
	set_item(5,3,"Mariana");
	set_item(8,5,"Erick");
	get_item(2,1);
	to_string();
}

void Clear(string dato){
	for(int i =0;i<ren;i++){
		for(int j =0;j<col;j++){
			Array_2D[i][j]=dato;
		}
	}
}

void get_row_size(){
	
	int renglon=0;
	
	for(int i =0;i<ren;i++){
		renglon++;	
	}
	
	cout<<renglon<<"\n";
}

void get_col_size(){
	
	int columna =0;
	
	for(int j =0;j<col;j++){
		columna++;
	}
	
	cout<<columna;
}

void set_item(int r,int c,string dato){
	for(int i =0;i<ren;i++){
		for(int j =0;j<col;j++){
			if((r==i)&&(c==j)){
				Array_2D[i][j] = dato;
			}
		}
	}
}

void get_item(int r,int c){
	for(int i =0;i<ren;i++){
		for(int j =0;j<col;j++){
			if((r==i)&&(c==j)){
				cout<<"\n"<<Array_2D[i][j];
			}
		}
	}
}

void to_string(){
	for(int i =0;i<ren;i++){
		for(int j =0;j<col;j++){
			cout<<" "<<Array_2D[i][j]<<" ";
		}
		cout<<"\n";
	}
}
