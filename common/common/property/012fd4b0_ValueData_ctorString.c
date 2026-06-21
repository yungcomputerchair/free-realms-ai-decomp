// addr: 0x012fd4b0
// name: ValueData_ctorString
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall ValueData_ctorString(undefined4 *param_1,char *param_2)

{
  char cVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ValueData string value by installing
                       PersistentBase/PersistentComponent/ValueData vtables, setting type id 3,
                       allocating a std::string, and assigning the input text. */
  puStack_8 = &LAB_0167587b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  local_4 = 1;
  *param_1 = ValueData::vftable;
  param_1[2] = 0;
  param_1[1] = 3;
  this = Mem_Alloc(0x1c);
  if (this == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  else {
    *(undefined4 *)(this + 0x18) = 0xf;
    *(undefined4 *)(this + 0x14) = 0;
    this[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  }
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),1);
  param_1[2] = this;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this,param_2,(int)pcVar2 - (int)(param_2 + 1));
  ExceptionList = local_c;
  return param_1;
}

