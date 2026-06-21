// addr: 0x01099fd0
// name: FUN_01099fd0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_01099fd0(void * owner) */

void __fastcall FUN_01099fd0(void *owner)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates a new reference-counted buffer, sizes it from the current buffer,
                       attempts to transform/copy data into it, and swaps it into owner+0xb0 on
                       success. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016444ab;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  pvVar4 = Mem_Alloc(0x18);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0083fe90(uVar3);
  }
  local_4 = 0xffffffff;
  iVar6 = *(int *)(*(int *)((int)owner + 0xb0) + 8);
  if (iVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(*(int *)((int)owner + 0xb0) + 4);
  }
  iVar6 = FUN_010ebd70(uVar7,iVar6);
  if (*(int *)(iVar5 + 0xc) < iVar6 + 4) {
    FUN_00701cc0(iVar6 + 4,1);
  }
  iVar6 = *(int *)(*(int *)((int)owner + 0xb0) + 8);
  if (iVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(*(int *)((int)owner + 0xb0) + 4);
  }
  cVar2 = FUN_010ebee0(uVar7,iVar6,iVar5);
  if (cVar2 == '\0') {
    LOCK();
    iVar6 = *(int *)(iVar5 + 0x14) + -1;
    *(int *)(iVar5 + 0x14) = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      (**(code **)(*(int *)(iVar5 + 0x10) + 4))();
    }
    iVar5 = *(int *)((int)owner + 0xb0);
    if (iVar5 != 0) {
      LOCK();
      iVar6 = *(int *)(iVar5 + 0x14) + -1;
      *(int *)(iVar5 + 0x14) = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        (**(code **)(*(int *)(iVar5 + 0x10) + 4))();
      }
      *(undefined4 *)((int)owner + 0xb0) = 0;
    }
    *(undefined4 *)((int)owner + 0xb0) = 0;
    ExceptionList = local_c;
    return;
  }
  iVar6 = *(int *)((int)owner + 0xb0);
  if (iVar6 != 0) {
    LOCK();
    iVar1 = *(int *)(iVar6 + 0x14) + -1;
    *(int *)(iVar6 + 0x14) = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      (**(code **)(*(int *)(iVar6 + 0x10) + 4))();
    }
    *(undefined4 *)((int)owner + 0xb0) = 0;
  }
  *(int *)((int)owner + 0xb0) = iVar5;
  ExceptionList = local_c;
  return;
}

