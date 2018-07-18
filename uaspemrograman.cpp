#include <iostream>
using namespace std;

class Box{
	public:
		double length; //panjang box
		double width; //lebar box
		double height; //tinggi box
		
		void print(){
			cout<<"printing box object"<<endl;
		
		}
};

int main()
{
	
	Box obj1, obj2; //deklarasi 2 objek obj1 dan obj2 ubtuk kelas box
	double volume = 0.0; //menyimpan volume dari box
	
	//spesifikasi box obj1
	obj1.height = 4.0;
	obj1.length = 6.0;
	obj1.width = 3.0;
	
	//spesifikasi box obj2
	obj2.height = 10.0;
	obj2.length = 12.0;
	obj2.width = 12.0;
	
	
	//volume box obj1
	volume = obj1.height * obj1.length * obj1.width;
	cout<<"volume of box 1 : "<<volume<<endl;
	
	//volume box obj2
	volume = obj2.height * obj2.length * obj2.width;
	cout<<"volume of box 2 : "<<volume<<endl;
	
	
}
