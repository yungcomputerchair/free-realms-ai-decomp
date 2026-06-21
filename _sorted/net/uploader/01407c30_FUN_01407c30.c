// addr: 0x01407c30
// name: FUN_01407c30
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_01407c30(void * factory) */

void * __fastcall FUN_01407c30(void *factory)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an 8-byte object via FUN_01407af0 and registers it through a
                       factory virtual method at offset 0x48. Specific command type is not
                       identified locally. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169182b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(8);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)FUN_01407af0(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

