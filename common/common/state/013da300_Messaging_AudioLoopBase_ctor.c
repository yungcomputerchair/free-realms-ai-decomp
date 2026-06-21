// addr: 0x013da300
// name: Messaging_AudioLoopBase_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Messaging_AudioLoopBase_ctor(void * this) */

void * __fastcall Messaging_AudioLoopBase_ctor(void *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Messaging::AudioLoopBase, initializes the base loop name to
                       'AudioLoop', installs the vftable, and clears loop members. Evidence is
                       AudioLoop string and vftable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168c2c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"AudioLoop",9);
  local_4 = 0;
  FUN_012eaa90(this,local_28);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  *(undefined ***)this = Messaging::AudioLoopBase::vftable;
  *(undefined1 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  ExceptionList = local_c;
  return this;
}

