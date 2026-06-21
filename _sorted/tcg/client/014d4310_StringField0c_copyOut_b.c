// addr: 0x014d4310
// name: StringField0c_copyOut_b
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StringField0c_copyOut_b(void * this, void * out) */

void * __thiscall StringField0c_copyOut_b(void *this,void *out)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the std::string at offset 0x0c into out. Exact class/field name is
                       unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016acbd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)out + 0x18) = 0xf;
  *(undefined4 *)((int)out + 0x14) = 0;
  *(undefined1 *)((int)out + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (out,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 ((int)this + 0xc),0,0xffffffff);
  ExceptionList = local_c;
  return out;
}

