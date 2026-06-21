// addr: 0x01447410
// name: FUN_01447410
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_01447410(void * factory) */

void * __fastcall FUN_01447410(void *factory)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory/registration wrapper allocating an 8-byte event-command base object,
                       constructing with FUN_01447280, and registering virtually. Concrete class is
                       unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01699ccb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(8);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)FUN_01447280(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

