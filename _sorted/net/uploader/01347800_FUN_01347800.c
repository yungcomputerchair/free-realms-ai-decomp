// addr: 0x01347800
// name: FUN_01347800
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_01347800(void) */

void * FUN_01347800(void)

{
  uint id_;
  void *pvVar1;
  undefined4 archetype_;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x140-byte object and constructs it via FUN_0139d010, returning
                       null on allocation failure. Specific class is not locally identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167d2ab;
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
  ExceptionList = local_c;
  return pvVar1;
}

