// addr: 0x0101c100
// name: FUN_0101c100
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0101c100(void * owner) */

void __fastcall FUN_0101c100(void *owner)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces the object pointer at owner+4 using allocator plus FUN_0101bef0
                       after destroying the old object. Specific type is unknown. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01634c1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)owner + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)owner + 4))();
  }
  pvVar1 = Mem_Alloc(0x40);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0101bef0();
  }
  *(undefined4 *)((int)owner + 4) = uVar2;
  ExceptionList = local_c;
  return;
}

