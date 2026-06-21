// addr: 0x01424370
// name: CommandObjectList_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObjectList_ctor(void * this) */

void * __fastcall CommandObjectList_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a small object with several zeroed fields and constructs an
                       embedded command/action object via FUN_01417e60. Called by playable-action
                       and state code that build command lists. */
  puStack_8 = &LAB_01694d5e;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = 1;
  ReturnValueMap_ctor(uVar1);
  ExceptionList = local_c;
  return this;
}

