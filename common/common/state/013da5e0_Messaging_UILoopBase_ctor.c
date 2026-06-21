// addr: 0x013da5e0
// name: Messaging_UILoopBase_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Messaging_UILoopBase_ctor(void * this) */

void * __fastcall Messaging_UILoopBase_ctor(void *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Messaging::UILoopBase with the loop name 'UILoop' and installs the
                       UILoopBase vftable. Evidence is the string and vftable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168c3e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_28,"UILoop",6);
  local_4 = 0;
  FUN_012eab60(this,local_28,0x80);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  *(undefined ***)this = Messaging::UILoopBase::vftable;
  ExceptionList = local_c;
  return this;
}

