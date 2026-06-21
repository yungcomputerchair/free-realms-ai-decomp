// addr: 0x0150a620
// name: CommandObject_DrawCard_createAsCommandObject
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * CommandObject_DrawCard_createAsCommandObject(void) */

void * CommandObject_DrawCard_createAsCommandObject(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates CommandObject_DrawCard, calls its constructor, and returns the
                       secondary CommandObject subobject pointer at +8 when allocation succeeds. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b598b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x13c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CommandObject_DrawCard_ctor(pvVar1);
  }
  if (pvVar1 != (void *)0x0) {
    ExceptionList = local_c;
    return (void *)((int)pvVar1 + 8);
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

