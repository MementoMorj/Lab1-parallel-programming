#include "process.h"
#include "realeseAndDebug.h"
#include "memory.h"


int main(int argc, char** argv)
{
    char flag;
    switch(flag=verbose_flag(argc,argv))
    {
    case'r':
        make_arr();
        realese();
        break;

    case'd':
        make_arr();
        debug();
        break;
    }
    del_arr();

}
