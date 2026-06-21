// addr: 0x0141b5d0
// name: GameCommand_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_ctor(void * this) */

void * __fastcall GameCommand_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the GameCommand base, invokes its parent command initializer,
                       installs the GameCommand vtable, and clears common command fields. Numerous
                       GameCommand subclasses call this. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016939d3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  local_4 = 0;
  *(undefined ***)this = GameCommand::vftable;
  FUN_005258fb(uVar1);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}

