#include "phonebook.hpp"
#include <string>
#include <iostream>

//kullanıcıdan değer al gelen değer ADD SEARCH EXIT ise işlemler yaptır. ADD ise bir kere çalışıp ekleyecek. 
//indexler arasında gez boş olanı görene kadar ilerle
//boş olan yoksa 1.ye ekle?
//ADD dışında başka bişeyler alırsa hiçbişey yapma tekrar bişey yapmasını iste.
//add istediğinde 1 tane ekle sadece
//search dediğinde 8 tane kullanıcı listesinden namei lastnameini soracak program da ona getirecek
//ismin karakter sayısı 10dan büyükse 9 karakter yazıp sonuna nokta. 

int main(){

    Phonebook a;
    while (1)
    {
        std::string str;
        std::cout << "Enter command -> ";
        std::getline(std::cin,str);

        if(str == "ADD")
            a.add();
        else if(str == "SEARCH")
            a.search();
        else if(str == "EXIT")
            return 1;
        else
            continue;
    }
}