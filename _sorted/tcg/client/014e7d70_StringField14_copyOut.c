// addr: 0x014e7d70
// name: StringField14_copyOut
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StringField14_copyOut(void * this, void * out) */

void * __thiscall StringField14_copyOut(void *this,void *out)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the std::string at offset 0x14 into out. Exact class/field name is
                       unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b04d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)out + 0x18) = 0xf;
  *(undefined4 *)((int)out + 0x14) = 0;
  *(undefined1 *)((int)out + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (out,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 ((int)this + 0x14),0,0xffffffff);
  ExceptionList = local_c;
  return out;
}

