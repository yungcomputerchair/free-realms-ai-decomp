// addr: 0x013c3ee0
// name: TwoStringRecord_setStrings
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool TwoStringRecord_setStrings(void * this, void * first, void * second) */

bool __thiscall TwoStringRecord_setStrings(void *this,void *first,void *second)

{
                    /* Assigns two string fields at offsets 8 and 0x24 and returns true. No class
                       evidence exists, so the name describes observed behavior. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 8),
             first,0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x24),
             second,0,0xffffffff);
  return true;
}

