// addr: 0x013ef600
// name: Exception_setFunctionName
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Exception_setFunctionName(void * this, void * functionName) */

void __thiscall Exception_setFunctionName(void *this,void *functionName)

{
                    /* Assigns the supplied std::string into the third Exception string field at
                       offset +0x40, likely function/method context. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x40),
             functionName,0,0xffffffff);
  return;
}

