// addr: 0x014b7140
// name: LoginCommand_RespondToChallenge_getField58
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LoginCommand_RespondToChallenge_getField58(void * this, void * out) */

void * __thiscall LoginCommand_RespondToChallenge_getField58(void *this,void *out)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the string at offset 0x58 from the login challenge response command.
                       Exact field name is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a82a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)out + 0x18) = 0xf;
  *(undefined4 *)((int)out + 0x14) = 0;
  *(undefined1 *)((int)out + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (out,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 ((int)this + 0x58),0,0xffffffff);
  ExceptionList = local_c;
  return out;
}

