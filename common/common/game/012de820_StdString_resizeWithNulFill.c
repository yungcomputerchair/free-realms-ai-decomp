// addr: 0x012de820
// name: StdString_resizeWithNulFill
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdString_resizeWithNulFill(void * str, int new_size) */

void __thiscall StdString_resizeWithNulFill(void *this,void *str,int new_size)

{
                    /* Resizes a std::string-like object: shrinking erases from new_size to the end,
                       while growing appends zero bytes. Evidence is the std::basic_string::erase
                       call and the append/fill helper call with fill value 0. */
  if (str <= *(void **)((int)this + 0x14)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
              (this,(uint)str,0xffffffff);
    return;
  }
  FUN_01270140((int)str - (int)*(void **)((int)this + 0x14),0);
  return;
}

