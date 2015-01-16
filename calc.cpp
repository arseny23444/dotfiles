	

    #include <iostream>
    using namespace std;
     
    class Math
    {
    private:
        int answer;
    public:
        /*void getAn()
        {
            cout << answer;
        }*/
        int add(int x, int y)
    {
        cout << "Add two numbers:\n";
        cin >> x;
        cin >> y;
        answer = x + y;
        return answer;
    }
        int sub(int x, int y)
    {
        cout << "Subtract one number from the other:\n";
        cin >> x;
        cin >> y;
        answer = x - y;
        return answer;
    }
        int multi(int x, int y)
    {
        cout << "Multiply two numbers:\n";
        cin >> x;
        cin >> y;
        answer = x * y;
        return answer;
    }
        int divi(int x, int y)
    {
        cout << "Divide two numbers:\n";
        cin >> x;
        cin >> y;
        answer = x / y;
        return answer;
    }
    };
     
    int main()
    {
        int choice;
        int x,y;
        int learning = 1;
        Math doMath;
        cout << "This is a calculator!\n" << endl;
        while(learning==1)
        {
            //doMath.getAn();
            cout << endl;
            cout << "Menu:\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Quit\n" << endl;
            cout << "Choose your option.\n";
            cin >> choice;
            if(choice==1)
            {
                cout << doMath.add(x,y) << endl;
            }else if(choice==2)
            {
                cout << doMath.sub(x,y) << endl;
            }else if(choice==3)
            {
                cout << doMath.multi(x,y) << endl;
            }else if(choice==4)
            {
                cout << doMath.divi(x,y) << endl;
            }else if(choice==5)
            {
                learning = 0;
            }else
            {
                cout << "Just do it" << endl;
                learning = 0;
            }
        }
        return 0;
    }

