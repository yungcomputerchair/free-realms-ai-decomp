// addr: 0x014b80e0
// name: LoginCommand_RespondToChallenge_create
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * LoginCommand_RespondToChallenge_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a LoginCommand_RespondToChallenge object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a85eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x138);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LoginCommand_RespondToChallenge_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

