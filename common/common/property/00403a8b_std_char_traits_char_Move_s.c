// addr: 0x00403a8b
// name: std_char_traits_char_Move_s
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * std_char_traits_char_Move_s(char * dst, int dstSize, char * src, int
   count) */

char * __cdecl
std::char_traits<char>::std_char_traits_char_Move_s(char *dst,int dstSize,char *src,int count)

{
                    /* Visual Studio std::char_traits<char>::_Move_s wrapper around _memmove_s that
                       returns the destination pointer. Ghidra already identified this as a library
                       function. */
  _memmove_s(dst,dstSize,src,count);
  return dst;
}

