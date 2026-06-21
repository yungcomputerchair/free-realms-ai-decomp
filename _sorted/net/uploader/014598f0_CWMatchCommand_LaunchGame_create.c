// addr: 0x014598f0
// name: CWMatchCommand_LaunchGame_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * CWMatchCommand_LaunchGame_create(void) */

void * CWMatchCommand_LaunchGame_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a CWMatchCommand_LaunchGame, returning null on
                       allocation failure. Evidence is the CWMatchCommand_LaunchGame_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c62b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CWMatchCommand_LaunchGame_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

