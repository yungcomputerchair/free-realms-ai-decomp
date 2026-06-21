// addr: 0x014d77b0
// name: GameCommand_SynchPoint_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_SynchPoint_ctor(void * this) */

void * __fastcall GameCommand_SynchPoint_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_SynchPoint: invokes the GameCommand base
                       constructor, installs the GameCommand_SynchPoint vftable, clears three
                       payload fields, and initializes an embedded member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad623;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  local_4 = 0;
  *(undefined ***)this = GameCommand_SynchPoint::vftable;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  FUN_005258fb(uVar1);
  ExceptionList = local_c;
  return this;
}

