#include<iostream>
#include<string>
using namespace std;


class Card{
	private:
		string KitapAdi;
		string Yazar;
		int Adet;
	public:
		void store(Card[]); //store'u nesne dizisi olarak tanýmlayacaðýmýz için burada sýnýf dizisi olarak tanýmladýk
		void show(Card[]);
		void setKitapAdi(string KitapAdi){this->KitapAdi=KitapAdi;}
		void setYazar(string Yazar){this->Yazar=Yazar;};
		void setAdet(int Adet){this->Adet=Adet;}
		string getKitapAdi(){return KitapAdi;}
		string getYazar(){return Yazar;}
		int getAdet(){return Adet;}
};

class Card2 : public Card{ // böyle bir sürü classý aþaðýdaki tek bir void Card:: store(Card book[]) fonksiyonu yetti
	
	
};

void Card :: store(Card book[]){  //storda Card nsýnýfýndan bir nesne dizisi olarak oluþturduk
	string a; string b; int c;
	for(int i=0;i<2;i++){
		cout<<i+1<<". urun ismini giriniz:"<<endl;cin>>a;
		book[i].setKitapAdi(a);
		cout<<i+1<<". urun yazarýný giriniz:"<<endl;cin>>b;
		book[i].setYazar(b);
		cout<<i+1<<". urun sayýsýný giriniz:"<<endl;cin>>c;
		book[i].setAdet(c);
		
	}
}


void Card :: show(Card book[]){  
	
	for(int i=0;i<2;i++){
		cout<<i+1<<". Kitap Adi:"<<book[i].getKitapAdi()<<endl;
		cout<<i+1<<". Kitabýn Yazarý:"<<book[i].getYazar()<<endl;
		cout<<i+1<<". Kitbýn Adeti:"<<book[i].getAdet()<<endl;
	}
	
}



int main(){
	
	Card book[2];
	Card2 card2[2];
	
	book[0].store(book); // store fonksiyonunu çaðýrmak için rastgele bir (sýfýrý seçtik) sýradaki nesnedeki storea book nesnesini nesne olarak atadýk.
	book[0].show(book);
	card2[0].store(card2);
	card2[0].show(card2);
	
	
	
	return 0;
}
