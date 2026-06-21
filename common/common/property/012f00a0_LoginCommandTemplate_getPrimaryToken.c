// addr: 0x012f00a0
// name: LoginCommandTemplate_getPrimaryToken
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LoginCommandTemplate_getPrimaryToken(int this, void * out) */

void * __thiscall LoginCommandTemplate_getPrimaryToken(void *this,int this,void *out)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an output std::string and copies the string member at this+0xcc
                       into it. Callers use the returned temporary while constructing
                       LoginCommand_SendPassword, LoginCommand_SendSessionID, and
                       LoginCommand_RespondToChallenge objects. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673de9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 0x18) = 0xf;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined1 *)(this + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xcc),0,0xffffffff);
  ExceptionList = local_c;
  return (void *)this;
}

