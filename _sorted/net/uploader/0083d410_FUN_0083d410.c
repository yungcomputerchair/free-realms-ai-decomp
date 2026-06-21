// addr: 0x0083d410
// name: FUN_0083d410
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void FUN_0083d410(void) */

void FUN_0083d410(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a 12-byte global structure at DAT_01be1598 if absent and
                       initializes its three dword fields to zero. Specific owner/type is unknown.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156e41b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01be1598 == (undefined4 *)0x0) {
    DAT_01be1598 = Mem_Alloc(0xc);
    if (DAT_01be1598 == (undefined4 *)0x0) {
      DAT_01be1598 = (undefined4 *)0x0;
    }
    else {
      *DAT_01be1598 = 0;
      DAT_01be1598[1] = 0;
      DAT_01be1598[2] = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

