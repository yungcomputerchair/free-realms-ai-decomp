// addr: 0x00fbf1f0
// name: AppUtil_DefaultFileRep_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * AppUtil_DefaultFileRep_create(void) */

void * AppUtil_DefaultFileRep_create(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs an AppUtil::DefaultFileRep object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162d79b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x70);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)AppUtil_DefaultFileRep_ctor(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

