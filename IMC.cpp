//int � para numeros;
//string � para letras e palavras
//boolean � para true ou false
//float � para numeros que n�o s�o inteiros (numeros com virgulas)

//IMPORTANTE: NUNCA ESQUECER DO PONTO E VIRGULA AO FINAL DA LINHA

//CIN>> para quando quiser pegar alguma informa���o do teclado dod usuario
//COUT<< para quando quiser mostrar algo em tela para o usuario

// IF � para verificar uma condi��o e ELSE � para quando essa mesma condi��o n�o � verdadeira

//IF(TU ME AMA){
//	  me compra um sorvete de flocos
//}ELSE{
//	  mim esquece
//}
//Utilizar "." para numeros quebrados
#include <iostream>
using namespace std;


int main () {
	
	float Altura;
	float Peso;
	float IMC;
	string Resultado;
	
	
	cout<<"Qual sua altura?\n";
	cin>>Altura;
	cout<<"\n\nQual seu peso?\n";
	cin>>Peso;
	
	IMC = Peso/(Altura+Altura);
	
	if(IMC<=16){
	Resultado = "Voce esta em desnutricao severa!";
	}else if(IMC<=18.4){
		Resultado = "Voce esta em desnutricao!";
	}else if(IMC<=22){
		Resultado = "Voce esta abaixo do peso!";
	}else if(IMC<=24.9){
		Resultado = "Voce esta no peso normal!";
	}else if(IMC<=29.9){
		Resultado = "Voce esta acima do peso!";
	}else if(IMC<=34.9){
		Resultado = "Voce esta com obesidade tipo 1!";
	}else if(IMC<=39.9){
		Resultado = "Voce esta com obesidade tipo 2!";
	}else{
		Resultado = "Voce esta com obesidade tipo 3!";
	};
	
	
	
	
	cout<<"\n\n"<<Resultado;
	
	}

