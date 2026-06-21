// addr: 0x012efec0
// name: LoginService_getInstance
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginService_getInstance(void) */

void LoginService_getInstance(void)

{
  void *this;
  int extraout_EAX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates and constructs the global LoginService singleton. The
                       constructor callee installs LoginService::vftable and the allocation size is
                       0x13c. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673ceb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbd960 == 0) {
    this = Mem_Alloc(0x13c);
    local_4 = 0;
    if (this == (void *)0x0) {
      DAT_01cbd960 = 0;
    }
    else {
      LoginService_ctor(this);
      DAT_01cbd960 = extraout_EAX;
    }
  }
  ExceptionList = local_c;
  return;
}

