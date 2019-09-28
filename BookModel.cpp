#include "BookModel.h"

BookModel::BookModel(){
	
}

void BookModel::setId(string id){
	this->id = id;
}
string BookModel::getId(){
	return this->id;
}
void BookModel::setName(string name){
	this->name=name;
}
string BookModel::getName(){
	return this->name;
}
void BookModel::setAuthor(string author){
	this->author = author;
}
string BookModel::getAuthor(){
	return this->author;
}
void BookModel::setPublish(string publish){
	this->publish = publish;
}
string BookModel::getPublish(){
	return this->publish;
}
void BookModel::setPublishTime(string publishTime){
	this->publishTime = publishTime;
}
string BookModel::getPublishTime(){
	return this->publishTime;
}
void BookModel::setType(string type){
	this->type;
}
string BookModel::getType(){
	return this->type;
}
void BookModel::setPrice(double price){
	this->price = price;
}
double BookModel::getPrice(){
	return this->price;
}
void BookModel::setNumber(int number){
	this->number = number;
}
int BookModel::getNumber(){
	return this->number;
}
