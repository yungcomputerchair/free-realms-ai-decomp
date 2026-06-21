// addr: 0x012f0110
// name: LoginCommandTemplate_getSecondaryToken
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LoginCommandTemplate_getSecondaryToken(int this, void * out) */

void * __thiscall LoginCommandTemplate_getSecondaryToken(void *this,int this,void *out)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an output std::string and copies the string member at this+0xe8
                       into it. It is paired with 012f00a0 in multiple LoginCommand constructors to
                       populate command string fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673e29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 0x18) = 0xf;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined1 *)(this + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xe8),0,0xffffffff);
  ExceptionList = local_c;
  return (void *)this;
}

