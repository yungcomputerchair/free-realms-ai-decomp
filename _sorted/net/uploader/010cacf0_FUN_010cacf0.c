// addr: 0x010cacf0
// name: FUN_010cacf0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_010cacf0(void * factory, void * arg) */

void __thiscall FUN_010cacf0(void *this,void *factory,void *arg)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates space for a 0x2d8-byte object, obtains a construction argument
                       through a factory virtual method, and initializes it via FUN_010d4f60.
                       Specific type is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164a61b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x2d8);
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = (**(code **)(*(int *)this + 0x24))(factory,uVar1);
    FUN_010d4f60(uVar3,factory);
  }
  ExceptionList = local_c;
  return;
}

