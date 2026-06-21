// addr: 0x014d8ee0
// name: GameCommand_SetObserverMode_ctorWithContext
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_SetObserverMode_ctorWithContext(void * this, undefined4
   context_) */

void * __thiscall GameCommand_SetObserverMode_ctorWithContext(void *this,undefined4 context_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_SetObserverMode with supplied context and clears an
                       observer-mode field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad9d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  local_4 = 0;
  *(undefined ***)this = GameCommand_SetObserverMode::vftable;
  FUN_0141b3d0(context_);
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

