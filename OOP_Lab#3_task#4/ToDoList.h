using namespace std;
class ToDoList {
    vector<Task*> tasks;
public:
    void addTask(const string& desc) { tasks.push_back(new Task(desc)); }
    void TodoList() {
        if (tasks.empty()) {
            cout << "No tasks in the ToDo list.\n";
        }
        else {
            cout << "Tasks in the ToDo list:\n";
            for (int i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i]->description;
                if (tasks[i]->completed) {
                    cout << " It is Completed";
                }
                cout << "\n";
            }
        }
    }
    void TaskCompleted(int index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1]->completed = true;
            cout << "Task marked as completed: " << tasks[index - 1]->description << "\n";
        }
        else {
            cout << "Invalid task index.\n";
        }
    }

    
    ~ToDoList() { for (auto& task : tasks) delete task; }
};
