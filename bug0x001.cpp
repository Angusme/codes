#include <iostream>

using namespace std;

bool func(int a,char c,int b,int& result)
{
    switch(c)
    {
        case '-':
            result=a-b;
            break;
        case '+':
            result=a+b;
            break;
        default:
            return false;
    }
    return true;
}
int main()
{
    //Bug Description:
    //The right method to use the program
    //is to input A {+|-} B.
    //For example,you can input 1<SPACE>+<SPACE>2<ENTER>(which I mean "1 + 2" and then press ENTER)
    //then it will spit out "3" for me.
    //For the purpose of making the program more robust,
    //I try to input 1<SPACE>+<SPACE>2<SPACE>+<ENTER>
    //It just give me many "2" prited on the shell.
    //Is there anyone who could tell me how to fix the bug?Many thanks!
    cout<<"Usage:A {+|-} B"<<endl;
    while(true)
    {
        int a,b,result;
        char c;
        cin>>a>>c>>b;
        if(func(a,c,b,result))
        {
            cout<<result<<endl;
        }
        else
        {
            cout<<"Input Error!"<<endl;
        }
    }
    return 0;
}



//Bug has been resolved...http://stackoverflow.com/questions/30302352/how-to-make-this-c-program-more-robust
