// addr: 0x00968550
// name: FUN_00968550
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00968550(void * poolOrList) */

void __fastcall FUN_00968550(void *poolOrList)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates/constructs an item through a virtual allocator, initializes it with
                       FUN_009644f0, appends it to a list using fields at 0xc0/0xc4, and increments
                       a count. Class identity is unknown. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015969d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = (void *)(**(code **)(*(int *)poolOrList + 8))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FUN_009644f0(pvVar1);
  }
  *(undefined4 *)((int)pvVar1 + 0xc4) = *(undefined4 *)((int)poolOrList + 8);
  *(undefined4 *)((int)pvVar1 + 0xc0) = 0;
  if (*(int *)((int)poolOrList + 8) == 0) {
    *(void **)((int)poolOrList + 4) = pvVar1;
  }
  else {
    *(void **)(*(int *)((int)poolOrList + 8) + 0xc0) = pvVar1;
  }
  *(void **)((int)poolOrList + 8) = pvVar1;
  *(int *)((int)poolOrList + 0xc) = *(int *)((int)poolOrList + 0xc) + 1;
  ExceptionList = local_c;
  return;
}

