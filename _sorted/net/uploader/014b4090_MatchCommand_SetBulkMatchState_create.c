// addr: 0x014b4090
// name: MatchCommand_SetBulkMatchState_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * MatchCommand_SetBulkMatchState_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a SetBulkMatchState match command. Constructor
                       callee identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a798b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x2c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = MatchCommand_SetBulkMatchState_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

