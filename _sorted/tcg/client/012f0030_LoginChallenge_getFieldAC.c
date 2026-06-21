// addr: 0x012f0030
// name: LoginChallenge_getFieldAC
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LoginChallenge_getFieldAC(void * this, void * out) */

void * __thiscall LoginChallenge_getFieldAC(void *this,void *out)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the std::string at offset 0xac from a login challenge/response object
                       into out. Field purpose is unknown but caller context is login challenge
                       handling. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673da9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)out + 0x18) = 0xf;
  *(undefined4 *)((int)out + 0x14) = 0;
  *(undefined1 *)((int)out + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (out,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 ((int)this + 0xac),0,0xffffffff);
  ExceptionList = local_c;
  return out;
}

