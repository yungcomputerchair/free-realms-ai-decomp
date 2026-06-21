// addr: 0x0144a790
// name: EventCommand_RequestCurrentSessionInfo_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * EventCommand_RequestCurrentSessionInfo_create(void) */

void * EventCommand_RequestCurrentSessionInfo_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a EventCommand_RequestCurrentSessionInfo, returning
                       null on allocation failure. Evidence is the
                       EventCommand_RequestCurrentSessionInfo_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169a72b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(8);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = EventCommand_RequestCurrentSessionInfo_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

