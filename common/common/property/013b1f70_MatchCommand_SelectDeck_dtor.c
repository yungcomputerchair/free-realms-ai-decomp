// addr: 0x013b1f70
// name: MatchCommand_SelectDeck_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SelectDeck_dtor(void * this) */

void __fastcall MatchCommand_SelectDeck_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destructor for MatchCommand_SelectDeck. It releases an owned virtual object
                       pointer, destroys the inline string if heap-backed, resets it to empty, then
                       destructs the MatchCommand base. */
  puStack_8 = &LAB_01687783;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = MatchCommand_SelectDeck::vftable;
  local_4 = 1;
  if (*(undefined4 **)((int)this + 0x2c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x2c))(1,uVar1);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (0xf < *(uint *)((int)this + 0x24)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  local_4 = 0xffffffff;
  MatchCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

