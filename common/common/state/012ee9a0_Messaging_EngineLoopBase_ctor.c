// addr: 0x012ee9a0
// name: Messaging_EngineLoopBase_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Messaging_EngineLoopBase_ctor(void * this) */

void * __fastcall Messaging_EngineLoopBase_ctor(void *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Messaging::EngineLoopBase, initializes its base named
                       'EngineLoop', installs the EngineLoopBase vftable, and clears several member
                       fields. Evidence is the EngineLoop string and
                       Messaging::EngineLoopBase::vftable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167398b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"EngineLoop",10);
  local_4 = 0;
  FUN_012eaa90(this,local_28);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  *(undefined ***)this = Messaging::EngineLoopBase::vftable;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  ExceptionList = local_c;
  return this;
}

