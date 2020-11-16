/*
The Caesar cipher is a type of substitution cipher in which each alphabet in the plaintext or message is shifted by a number of places down the alphabet.
For example, with a shift of 1, P would be replaced by Q, Q would become R, and so on.
To pass an encrypted message from one person to another, it is first necessary that both parties have the 'key' for the cipher, so that the sender may encrypt it and the receiver may decrypt it.
the key is the number of OFFSETs to shift the cipher alphabet. Key can have basic shifts from 1 to 25 positions as there are 26 total alphabets.
As we are designing custom Caesar Cipher, in addition to alphabets, we are considering numeric digits from 0 to 9. Digits can also be shifted by key places.
For example, if given plain text contains any digit with value 5 and key = 2, then 5 will be replaced by 7. “-” (Minus sign) will remain as it is. Key value less than 0 should result into "INVALID INPUT"
Example 1:
Input:
Enter your PlainText: All the Best
Enter the Key: 1
Output:
The encrypted Text is: Bmm uif Cftu
Write a function customCaesarCipher(int key, String message) which will accept plaintext and key as input parameters and returns its cipher text as output.
*/
#include<bits/stdc++.h>
using namespace std;
void customCaesarCipher(int key,string message){
	if(key>=0 && key<=25){
		for(int i=0;i<message.size();i++){
			char ch=message[i];
			if(ch>='0' && ch<='9'){
				message[i]=((ch-'0')+key)%10+'0';
			}
			else if(ch>='a' && ch<='z'){
				message[i]=((ch-'a')+key)%27+'a';
			}
			else if(ch>='A' && ch<='Z'){
				message[i]=((ch-'A')+key)%27+'A';
			}
		}
		cout<<"\n"<<message<<endl;
	}
	else{
		cout<<"INVALID INPUT"<<endl;
	}
}
int main(){
	int key;
	string message;
	cout<<"Enter your PlainText:";
	getline(cin,message);
	cout<<"\n"<<"Enter the key:";
	cin>>key;
	customCaesarCipher(key,message);
	return 0;
}