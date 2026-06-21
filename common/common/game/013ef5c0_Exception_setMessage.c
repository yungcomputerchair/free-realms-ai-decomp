// addr: 0x013ef5c0
// name: Exception_setMessage
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Exception_setMessage(void * this, void * message) */

void __thiscall Exception_setMessage(void *this,void *message)

{
                    /* Assigns the supplied std::string into the first string field of Exception at
                       offset +4, likely the main message text. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
             message,0,0xffffffff);
  return;
}

