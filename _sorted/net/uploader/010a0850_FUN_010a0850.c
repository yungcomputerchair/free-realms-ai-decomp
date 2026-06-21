// addr: 0x010a0850
// name: FUN_010a0850
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_010a0850(void * owner) */

void __fastcall FUN_010a0850(void *owner)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x18-byte reference-counted buffer/object for owner+0x2c4 and
                       releases it if insertion/registration with owner+0x5c fails. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016459bb;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pvVar5 = Mem_Alloc(0x18);
  local_4 = 0;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0083fe90(uVar4);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)owner + 0x2c4) = uVar6;
  cVar3 = FUN_007022d0(*(undefined4 *)((int)owner + 0x5c),uVar6);
  if ((cVar3 == '\0') && (iVar1 = *(int *)((int)owner + 0x2c4), iVar1 != 0)) {
    LOCK();
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*(int *)(iVar1 + 0x10) + 4))();
    }
    *(undefined4 *)((int)owner + 0x2c4) = 0;
  }
  ExceptionList = local_c;
  return;
}

