// addr: 0x014b4fe0
// name: MatchCommand_LaunchGame_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * MatchCommand_LaunchGame_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a LaunchGame match command. Constructor callee
                       identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7cdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = MatchCommand_LaunchGame_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

