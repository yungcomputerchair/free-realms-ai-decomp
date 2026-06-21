// addr: 0x012fd580
// name: ValueData_ctorFromString
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ValueData_ctorFromString(void * this, void * value) */

void * __thiscall ValueData_ctorFromString(void *this,void *value)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ValueData object by installing
                       PersistentBase/PersistentComponent/ValueData vtables, setting type/id fields,
                       allocating a string payload, and copying value into it. */
  puStack_8 = &LAB_016758bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  local_4 = 1;
  *(undefined ***)this = ValueData::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 3;
  this_00 = Mem_Alloc(0x1c);
  if (this_00 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  else {
    *(undefined4 *)(this_00 + 0x18) = 0xf;
    *(undefined4 *)(this_00 + 0x14) = 0;
    this_00[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  }
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),1);
  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)((int)this + 8) = this_00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this_00,value,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}

