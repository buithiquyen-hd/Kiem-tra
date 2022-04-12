#include <iostream.h>
#include<iomanip.h>

class SAMPHAM {
	private:
		char tenthuoc[30];
		int sl;
		char mathuoc[10];
	public:
		sanpham (char *tenthuoc = "", int sl =0, char *mathuoc = "")
		{
			strcpy(this ->tenthuoc, tenthuoc);
			       this ->sl = sl;
   			strcpy(this ->mathuoc, mathuoc);  
		}
		~SANPHAM(){}
		friend istream& operator >>(istream& is, sanpham &a)
		{
			cout<<"\nNhap ten thuoc: ";
			is>>a.tenthuoc;
		 	cout<<"\nNhap b: ";
			is>>a.sl;
			cout<<"\nNhap c: ";
			is>>a.mathuoc;
			return is;
		}
		friend ostream& operator <<(ostream& os, sanpham &a)
		{
			os<<a.tenthuoc
			  <<a.sl
			  <<a.mathuoc << endl;
			  return os;		  
		}	
		
};
class THUOC{
	private: 
		char loaithuoc[10];
		char tp[10];
}