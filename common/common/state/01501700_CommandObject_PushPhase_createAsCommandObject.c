// addr: 0x01501700
// name: CommandObject_PushPhase_createAsCommandObject
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * CommandObject_PushPhase_createAsCommandObject(void) */

void * CommandObject_PushPhase_createAsCommandObject(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates CommandObject_PushPhase, calls its constructor, and returns the
                       secondary CommandObject subobject pointer at +8 when allocation succeeds. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b45bb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x124);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CommandObject_PushPhase_ctor(uVar1);
  }
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return (void *)(iVar2 + 8);
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

