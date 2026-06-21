// addr: 0x01348e10
// name: FUN_01348e10
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_01348e10(void * owner) */

void __fastcall FUN_01348e10(void *owner)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces the object at owner+0x38c by deleting any existing instance,
                       allocating 0x28 bytes, constructing via FUN_01429300, and storing it. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167d39b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)owner + 0x38c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)owner + 0x38c))(1,DAT_01b839d8 ^ (uint)&stack0xffffffec);
  }
  pvVar1 = Mem_Alloc(0x28);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GameData_ctor(pvVar1);
  }
  *(void **)((int)owner + 0x38c) = pvVar1;
  ExceptionList = local_c;
  return;
}

