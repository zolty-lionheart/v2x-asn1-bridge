#include "../include/asnSec/V2XSecData.h"
#include <iostream>
#include <sstream>
using namespace std;

long hex2int(const string &hexStr)
{
    char *offset;
    if (hexStr.length() > 2)
    {
        if (hexStr[0] == '0' && hexStr[1] == 'x')
        {
            return strtol(hexStr.c_str(), &offset, 0);
        }
    }
    return strtol(hexStr.c_str(), &offset, 16);
}

//日期:2020年11月20日09:51:08
//码农:zolty
//描述:输入解码测试
void argv_decode_test(char inbuf[])
{
    stringstream is(inbuf);
    string tmp;
    uint8_t chbuf[160];
    int i = 0;
    while (getline(is, tmp, ' '))
    {
        chbuf[i] = hex2int(tmp);
        i++;
    }
    asn_dec_rval_t rval;
    V2XSecData_t *msgFrame = NULL;
    rval = uper_decode(0, &asn_DEF_V2XSecData, (void **)&msgFrame, chbuf, 160, 0, 0);
    if (rval.code != RC_OK)
    {
        printf("<Adz>decode failed ! </Adz>");
        return;
    }
    /* Print the decoded BSM type as XML */
    xer_fprint(stdout, &asn_DEF_V2XSecData, msgFrame);
}

int main(int argc , char ** argv)
{
    argv_decode_test(argv[1]);
}