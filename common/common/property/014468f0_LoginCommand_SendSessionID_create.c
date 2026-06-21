// addr: 0x014468f0
// name: LoginCommand_SendSessionID_create
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * LoginCommand_SendSessionID_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a LoginCommand_SendSessionID object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016999eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xf4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LoginCommand_SendSessionID_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

