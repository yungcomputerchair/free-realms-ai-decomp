// addr: 0x014d7010
// name: GameCommand_ValueList_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ValueList_dtor(void * this) */

void __fastcall GameCommand_ValueList_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GameCommand_ValueList. It installs the ValueList vftable,
                       frees the dynamic array/vector stored at fields 10-12 if present, zeroes
                       those fields, then calls the GameCommand base destructor. */
  puStack_8 = &LAB_016ad503;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = GameCommand_ValueList::vftable;
  local_4 = 0;
  if (*(void **)((int)this + 0x28) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x28),*(void **)((int)this + 0x2c));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x28));
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 0xffffffff;
  FUN_0141b310(uVar1);
  ExceptionList = local_c;
  return;
}

