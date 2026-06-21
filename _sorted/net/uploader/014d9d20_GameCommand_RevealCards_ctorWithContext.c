// addr: 0x014d9d20
// name: GameCommand_RevealCards_ctorWithContext
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_RevealCards_ctorWithContext(void * this, undefined4
   context_) */

void * __thiscall GameCommand_RevealCards_ctorWithContext(void *this,undefined4 context_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_RevealCards with context and clears several
                       card-list fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016adc53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_RevealCards::vftable;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 1;
  FUN_0141b3d0(context_);
  ExceptionList = local_c;
  return this;
}

