// addr: 0x012ec720
// name: StringVector_getOrDefault
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StringVector_getOrDefault(void * vector, void * out, int index_, void *
   defaultValue) */

void * __thiscall
StringVector_getOrDefault(void *this,void *vector,void *out,int index_,void *defaultValue)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies vector[index] into out when index is within a vector of 0x1c-byte
                       strings; otherwise copies defaultValue. It validates bounds before indexing.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673379;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(int *)((int)this + 8) != 0) &&
     (out < (void *)((*(int *)((int)this + 0xc) - *(int *)((int)this + 8)) / 0x1c))) {
    if ((*(int *)((int)this + 8) == 0) ||
       ((void *)((*(int *)((int)this + 0xc) - *(int *)((int)this + 8)) / 0x1c) <= out)) {
      FUN_00d83c2d(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
    }
    iVar1 = *(int *)((int)this + 8);
    *(undefined4 *)((int)vector + 0x18) = 0xf;
    *(undefined4 *)((int)vector + 0x14) = 0;
    *(undefined1 *)((int)vector + 4) = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (vector,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(iVar1 + (int)out * 0x1c),0,0xffffffff);
    ExceptionList = local_c;
    return vector;
  }
  *(undefined4 *)((int)vector + 0x18) = 0xf;
  *(undefined4 *)((int)vector + 0x14) = 0;
  *(undefined1 *)((int)vector + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (vector,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    index_,0,0xffffffff);
  ExceptionList = local_c;
  return vector;
}

