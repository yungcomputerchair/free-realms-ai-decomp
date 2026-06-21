// addr: 0x014426d0
// name: FUN_014426d0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_014426d0(void * factory) */

void * __fastcall FUN_014426d0(void *factory)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory/registration wrapper allocating 0xc bytes, constructing with
                       FUN_01442520, and registering via virtual method. Exact command class is
                       unknown in this wrapper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01698fbb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0xc);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)FUN_01442520(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

