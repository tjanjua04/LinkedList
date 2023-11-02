#include<iostream>
#include<memory>
#include<vector>
#include<string>
// Write template class Tab here
template<typename T> class Tab {
  public:
    std::string url;
    std::string Name;
    T memory;
    Tab* next;
    Tab* prev;
};
// Write template class Browser here
template<typename T> class Browser{
  public:
    void addNewTab(){
      std::string <Tab<string>> string url;
      std::string <Tab<string>> string name;
      std::string <Tab<T>> T memory;
      // create new tab
      // assign values to tab values and add it to the last position of the linked list
      // insert tab to the end and make it the current browser
    }
    void switchToPrevTab(){
      // switch from current tab to previous tab
      // print details of the tab
      // if there is no prev tab say "no previous tab"
    }
    void switchToNextTab(){
      // switch from current tab to next tab
      // print details of the tab
      // if there is no next tan print "no next tab"
    } 
    void closeCurrentTab(){
      // delete current tab
      // current tab becomes next tab
      // print "new current tab is = "
    }
    void bookmarkCurrent(){
      // saves url and name to a vector
      std::vector<std::pair<std::string>> bookmark
    }
    void showBookmarkTab(){
      // print bookmark
      // print name and url
      // basically just print the vector
    }
    void moveCurrentToFirst(){
      // move current browser to the first position in the linked list
    } 
    void total_memory(){
      // print total memory
    }
    void deleteTab(){
      // delete whichever tab has the highest memory
      // print which tab was deleted
    }

    //Add display method in Browser template class
    void display(){
    auto curr = head;
    std::cout<<"Browser tab list = "<<std::endl;
    while(curr){
    std::cout<<"| "<<curr->name<<" x|-->";
    curr = curr->next;
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
    }

};

int main(){
Browser<double> b1;
b1.addNewTab("https://www.google.com","Google",23.45);
b1.display();
std::cout<<"Switch to previous tab = "<<std::endl;
b1.switchToPrevTab();
std::cout<<"Switch to Next tab = "<<std::endl;
b1.switchToNextTab();
b1.addNewTab("https://www.youtube.com","YouTube",56);
b1.bookmarkCurrent();
b1.display();
b1.addNewTab("https://www.geeksforgeeks.com","GeeksForGeeks",45.78);
b1.bookmarkCurrent();
b1.addNewTab("https://chat.openai.com","ChatGPT",129);
b1.addNewTab("https://linkedin.com","LinkedIn",410);
b1.bookmarkCurrent();
b1.addNewTab("https://github.com","Github",110);
b1.addNewTab("https://kaggle.com","Kaggle",310);
b1.bookmarkCurrent();
b1.display();
std::cout<<"Total memory consumption = "<<b1.total_memory()<<"MB"<<std::endl;
b1.showBookmarkTab();
b1.moveCurrentToFirst();
b1.display();
b1.deleteTab();
b1.display();
std::cout<<"Switch to next tab = "<<std::endl;
b1.switchToNextTab();
std::cout<<"Switch to previous tab = "<<std::endl;
b1.switchToPrevTab();
b1.closeCurrentTab();
b1.display();
std::cout<<"Switch to previous tab = "<<std::endl;
b1.switchToPrevTab();
b1.closeCurrentTab();
b1.display();
b1.showBookmarkTab();
std::cout<<"Total Memory Consumption = "<<b1.total_memory()<<"MB"<<std::endl;
b1.deleteTab();
b1.display();
b1.addNewTab("https://docs.google.com/","Google Docs",102.34);
b1.display();
std::cout<<"Switch to previous tab = "<<std::endl;
b1.switchToPrevTab();
std::cout<<"Switch to previous tab = "<<std::endl;
b1.switchToPrevTab();
std::cout<<"Switch to previous tab = "<<std::endl;
b1.switchToPrevTab();
b1.bookmarkCurrent();
b1.showBookmarkTab();
b1.total_memory();
b1.deleteTab();
b1.display();
return 0;
}
