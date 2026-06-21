// addr: 0x01429a10
// name: GameCommand_FatalError_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_FatalError_dtor(void * this) */

void __fastcall GameCommand_FatalError_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a GameCommand_FatalError, freeing its extra heap field, destroying
                       its embedded Exception, and then chaining to GameCommand_dtor. */
  puStack_8 = &LAB_016956f3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = GameCommand_FatalError::vftable;
  local_4 = 1;
  if (*(void **)((int)this + 0x88) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x88));
  }
  local_4 = 0;
  Exception_dtor((void *)((int)this + 0x24));
  local_4 = 0xffffffff;
  FUN_0141b310(uVar1);
  ExceptionList = local_c;
  return;
}

