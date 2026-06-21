// addr: 0x013ef5e0
// name: Exception_setSourceFile
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Exception_setSourceFile(void * this, void * sourceFile) */

void __thiscall Exception_setSourceFile(void *this,void *sourceFile)

{
                    /* Assigns the supplied std::string into the second Exception string field at
                       offset +0x20, likely source-file context. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x20),
             sourceFile,0,0xffffffff);
  return;
}

