#include <iostream>
#include <vector>
#include<string>
#include "Task.h"
#include "ToDoList.h"
using namespace std;

int main() {
    ToDoList myList;
    myList.addTask("Finish Lab 3");
    myList.addTask("OOP Lab 4");
    myList.addTask("Eng Assignment");
    myList.addTask("ISl Assignment");
    myList.addTask("LA Assignment");
    
    myList.TodoList();
    myList.TaskCompleted(3);
    myList.TaskCompleted(5);
    return 0;
}
