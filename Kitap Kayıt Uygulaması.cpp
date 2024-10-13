#include<iostream>
#include<string>
using namespace std;


class Card{
	private:
		string KitapAdi;
		string Yazar;
		int Adet;
	public:
		void store(Card[]); //store'u nesne dizisi olarak tan�mlayaca��m�z i�in burada s�n�f dizisi olarak tan�mlad�k
		void show(Card[]);
		void setKitapAdi(string KitapAdi){this->KitapAdi=KitapAdi;}
		void setYazar(string Yazar){this->Yazar=Yazar;};
		void setAdet(int Adet){this->Adet=Adet;}
		string getKitapAdi(){return KitapAdi;}
		string getYazar(){return Yazar;}
		int getAdet(){return Adet;}
};

class Card2 : public Card{ // b�yle bir s�r� class� a�a��daki tek bir void Card:: store(Card book[]) fonksiyonu yetti
	
	
};

void Card :: store(Card book[]){  //storda Card ns�n�f�ndan bir nesne dizisi olarak olu�turduk
	string a; string b; int c;
	for(int i=0;i<2;i++){
		cout<<i+1<<". urun ismini giriniz:"<<endl;cin>>a;
		book[i].setKitapAdi(a);
		cout<<i+1<<". urun yazar�n� giriniz:"<<endl;cin>>b;
		book[i].setYazar(b);
		cout<<i+1<<". urun say�s�n� giriniz:"<<endl;cin>>c;
		book[i].setAdet(c);
		
	}
}


void Card :: show(Card book[]){  
	
	for(int i=0;i<2;i++){
		cout<<i+1<<". Kitap Adi:"<<book[i].getKitapAdi()<<endl;
		cout<<i+1<<". Kitab�n Yazar�:"<<book[i].getYazar()<<endl;
		cout<<i+1<<". Kitb�n Adeti:"<<book[i].getAdet()<<endl;
	}
	
}



int main(){
	
	Card book[2];
	Card2 card2[2];
	
	book[0].store(book); // store fonksiyonunu �a��rmak i�in rastgele bir (s�f�r� se�tik) s�radaki nesnedeki storea book nesnesini nesne olarak atad�k.
	book[0].show(book);
	card2[0].store(card2);
	card2[0].show(card2);
	
	
	
	return 0;
}
