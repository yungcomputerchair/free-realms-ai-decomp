// addr: 0x00953690
// name: FUN_00953690
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_00953690(void * owner) */

void * __fastcall FUN_00953690(void *owner)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Acquires a rendering/resource lock, returns an existing resource or allocates
                       a new 0x2024-byte resource, then releases the lock. Specific type is unknown.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015949b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00fc45f0(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  if (*(int *)((int)owner + 0x94) == 0) {
    pvVar1 = Mem_Alloc(0x2024);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_008d4a40(0x10000000);
    }
  }
  else {
    pvVar1 = (void *)**(undefined4 **)((int)owner + 0x8c);
    FUN_009530e0();
  }
  local_4 = 0xffffffff;
  FUN_00fc4610();
  ExceptionList = local_c;
  return pvVar1;
}

