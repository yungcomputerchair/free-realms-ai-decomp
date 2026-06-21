// addr: 0x014b9e90
// name: LoginCommand_DisplayMOTD_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 LoginCommand_DisplayMOTD_create(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs DisplayMOTD login command. Constructor callee
                       identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a8b9b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x44);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = LoginCommand_DisplayMOTD_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

