#include <iostream>

void examplefunction()
{
    class LocalClass  
    {
    public:
        void display()
        {
            std::cout << "hello from local class!" << std::endl;
        }
    };

    LocalClass obj;     
    obj.display();      
}

int main()
{
    examplefunction();
    return 0;
}
