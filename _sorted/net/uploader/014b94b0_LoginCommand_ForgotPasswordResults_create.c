// addr: 0x014b94b0
// name: LoginCommand_ForgotPasswordResults_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 LoginCommand_ForgotPasswordResults_create(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs ForgotPasswordResults login command. Constructor
                       callee identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a899b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0xc);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = LoginCommand_ForgotPasswordResults_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

