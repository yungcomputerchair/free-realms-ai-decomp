// addr: 0x01099e50
// name: FUN_01099e50
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_01099e50(void * owner) */

void __fastcall FUN_01099e50(void *owner)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x18-byte reference-counted buffer/object, stores it at
                       owner+0xb0, then releases it if registration with owner+0x60 fails. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164444b;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pvVar6 = Mem_Alloc(0x18);
  local_4 = 0;
  if (pvVar6 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_0083fe90(uVar5);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)owner + 0xb0) = uVar7;
  cVar4 = FUN_010fb8e0(*(undefined4 *)((int)owner + 0x60),uVar7);
  if (cVar4 == '\0') {
    iVar2 = *(int *)((int)owner + 0xb0);
    piVar1 = (int *)(iVar2 + 0x14);
    LOCK();
    iVar3 = *piVar1 + -1;
    *piVar1 = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)(*(int *)(iVar2 + 0x10) + 4))();
    }
    *(undefined4 *)((int)owner + 0xb0) = 0;
  }
  ExceptionList = local_c;
  return;
}

