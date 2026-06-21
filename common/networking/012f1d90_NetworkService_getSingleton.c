// addr: 0x012f1d90
// name: NetworkService_getSingleton
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * NetworkService_getSingleton(void) */

void * NetworkService_getSingleton(void)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs the global NetworkService singleton if it does not
                       already exist, then returns/leaves it in the global slot. Evidence: checks
                       DAT_01cbd970, allocates 0x74 bytes, and calls NetworkService_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167401b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbd970 == (void *)0x0) {
    this = Mem_Alloc(0x74);
    local_4 = 0;
    if (this == (void *)0x0) {
      DAT_01cbd970 = (void *)0x0;
    }
    else {
      DAT_01cbd970 = NetworkService_ctor(this);
    }
  }
  ExceptionList = local_c;
  return DAT_01cbd970;
}

