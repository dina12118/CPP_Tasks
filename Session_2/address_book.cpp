#include <iostream>
#include <map>
#include <string>

#define str std::string

//global map
std::map<str, str> add_book;

//List function
void List(std::map<str, str> &my_map){

    if(my_map.empty()){
        std::cout << "Address Book is empty!" << std::endl;
        return;
    }

    for(auto const &i : my_map){
        std::cout << i.first << " : " << i.second << std::endl;
    }
}

//Search
int Search(std::map<str,str> &my_map, str key, int flag = 0){
    auto it = my_map.find(key);

    if(it == my_map.end()){
        
        std::cout << key << " user deosn't exist!" << std::endl;
        return 0;
    }
    else{
        if(!flag){
            std::cout << it->first << " : " << it->second << std::endl;
        }
        return 1;
    }

}

//Delete function
void Delete(std::map<str,str> &my_map, str key){
    int result = Search(my_map, key,1);
    if(result){
        my_map.erase(key);
        std::cout << key << " is deleted!" << std::endl;
    }

}

//Add function
void Add(std::map<str, str> &my_map, str key, str value){
    //call search before for avoiding redundancy
    int result = Search(my_map, key, 1);
    if(result){ std::cout << std::endl <<"Name is existed before" << std::endl; }
    else{

        my_map[key] = value;
        std::cout << std::endl << key <<" Added!" << std::endl;
    }

}

//Edit function
void Edit(std::map<str, str> &my_map, str key, str value){
    //call search before for avoiding redundancy
    int result = Search(my_map, key, 1);
    if(result){ 
        my_map[key] = value; 
        std::cout << key <<" is Edited" << std::endl;
    }
    else{

        std::cout << key << " dosen't exist!" << std::endl;
    }

}

//Delete_all function
void Delete_all(std::map<str,str> &my_map){
    my_map.clear();
    std::cout << "Address Book is Deleted!"<< std::endl;
}

void Size(std::map<str,str> &my_map){
    std::cout << "Address Book size is :" << my_map.size() << std::endl;
}

void Store(str * key, str * value){
    std::cout << "Write the user name:" << std::endl;
    std::cin >> *key;
    std::cout << std::endl <<"Write the user address:" << std::endl;
    std::cin >> *value;
}

void Store(str * key){
    std::cout << "Write the user name:" << std::endl;
    std::cin >> *key;
}

void Start_program(std::map<str, str> my_map){
    int user_choice;
    str user_key;
    str user_value;
    str choices = "0: List all users\n\
1: Add user name and address\n\
2: Delete a selected user\n\
3: Delete all users\n\
4: Search for selected user\n\
5: Size of the Address Book\n\
6: Edit existed user address\n\
7: Close the program!\n";

    do{

        std::cout << std::endl << "-------------------" << std::endl << choices << "------------" <<std::endl;
        std::cout << "Enter the number of your choice: " << std::endl;
        std::cin >> user_choice;
        std::cout << std::endl;


        switch (user_choice) {

            case 0: 
            {   //List
                List(my_map);
                break;
            }
            case 1: 
            {   //Add
                Store(&user_key, &user_value);
                Add(my_map, user_key, user_value);
                break;
            }
            case 2: 
            {   //Delete user
                Store(&user_key);
                Delete(my_map, user_key);
                break;
            }
            case 3: 
            {   //Delete all
                Delete_all(my_map);
                break;
            }
            case 4: 
            {   //Search for user
                Store(&user_key);
                Search(my_map, user_key);
                break;
            }
            case 5: 
            {   //Get the Size of the address book
                Size(my_map);
                break;
            }
            case 6:
            {   //edit existed user
                Store(&user_key, &user_value);
                Edit(my_map, user_key, user_value);

            }
        
        }

    }while(user_choice != 7);

    std::cout << "Address Book is closed!" << std::endl;
}


int main(){

    Start_program(add_book);
    return 0;
}