// addr: 0x0139d200
// name: FUN_0139d200
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_0139d200(void) */

void * FUN_0139d200(void)

{
  uint id_;
  void *pvVar1;
  undefined4 archetype_;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x140-byte object via FUN_0139d010 and returns the embedded
                       subobject at +8 when construction succeeds. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016852db;
  local_c = ExceptionList;
  id_ = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x140);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = Card_ctor(local_10,archetype_,id_);
  }
  if (pvVar1 != (void *)0x0) {
    ExceptionList = local_c;
    return (void *)((int)pvVar1 + 8);
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

