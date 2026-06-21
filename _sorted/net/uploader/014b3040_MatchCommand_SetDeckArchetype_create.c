// addr: 0x014b3040
// name: MatchCommand_SetDeckArchetype_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * MatchCommand_SetDeckArchetype_create(void) */

void * MatchCommand_SetDeckArchetype_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a MatchCommand_SetDeckArchetype command object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a75cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x10);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = MatchCommand_SetDeckArchetype_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

