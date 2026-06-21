// addr: 0x0130f520
// name: String_uppercaseCopy
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * String_uppercaseCopy(void * out, void * input) */

void * __cdecl String_uppercaseCopy(void *out,void *input)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies input into out and uppercases the result in place. Evidence is string
                       assignment followed by String_toUpperInPlace. */
  puStack_8 = &LAB_01677299;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  *(undefined4 *)((int)out + 0x18) = 0xf;
  *(undefined4 *)((int)out + 0x14) = 0;
  *(undefined1 *)((int)out + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (out,input,0,0xffffffff);
  local_4 = 0;
  String_toUpperInPlace(out);
  ExceptionList = local_c;
  return out;
}

