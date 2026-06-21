// addr: 0x012f4720
// name: ResourcePath_setBaseDirectory
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ResourcePath_setBaseDirectory(void * directory) */

void __cdecl ResourcePath_setBaseDirectory(void *directory)

{
                    /* Stores the current/base directory in a global string and normalizes
                       backslashes to forward slashes. CardClient_ctor calls it with
                       GetCurrentDirectoryA output. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_01bb953c,
             directory,0,0xffffffff);
  String_replaceCharInPlace(&DAT_01bb953c,'\\','/');
  return;
}

