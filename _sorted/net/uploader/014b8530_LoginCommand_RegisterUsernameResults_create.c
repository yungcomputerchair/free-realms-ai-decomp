// addr: 0x014b8530
// name: LoginCommand_RegisterUsernameResults_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 LoginCommand_RegisterUsernameResults_create(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs RegisterUsernameResults login command. Constructor
                       callee identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a86db;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0xc);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = LoginCommand_RegisterUsernameResults_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

