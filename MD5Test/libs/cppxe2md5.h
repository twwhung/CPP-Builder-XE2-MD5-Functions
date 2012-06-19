#ifndef CPPXE2MD5_H

#define CPPXE2MD5_H

#include <vcl.h>
#include "md5.h"


String StringToMD5String(String input){
    MD5 md5;
	return md5.digestString(AnsiString(input).c_str());
}
String FileToMD5String(String path){
	MD5 md5;
	return md5.digestFile( AnsiString(path).c_str());
}
String TStreamToMD5String(TStream * inputstream){
	TMemoryStream *m = new 	TMemoryStream();
	m->LoadFromStream(inputstream);
	MD5 md5;
	String output = md5.digestMemory((unsigned char*)m->Memory,m->Size);
	m->Free();
    return output;
}
#endif
