// addr: 0x01448230
// name: StringField54_setAndReleaseTemp
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StringField54_setAndReleaseTemp(void * this, undefined4 value_) */

void __thiscall StringField54_setAndReleaseTemp(void *this,undefined4 value_)

{
  void *in_stack_00000008;
  uint in_stack_0000001c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Assigns a temporary string into field offset 0x54 and releases the temporary
                       heap storage if needed. Exact class/field name is unknown. */
  puStack_8 = &LAB_0169a038;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x54),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)&value_
             ,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000008);
  }
  ExceptionList = local_c;
  return;
}

