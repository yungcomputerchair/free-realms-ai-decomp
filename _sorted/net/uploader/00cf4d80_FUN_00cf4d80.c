// addr: 0x00cf4d80
// name: FUN_00cf4d80
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00cf4d80(void * resource) */

void FUN_00cf4d80(void *resource)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Retains a resource, allocates a 0x58-byte helper, attaches a shared object,
                       and discards the local pointer. Exact class is unknown. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016103db;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  piVar9 = (int *)0x0;
  if (resource != (void *)0x0) {
    iVar7 = *(int *)((int)resource + 8);
    *(int *)((int)resource + 8) = iVar7 + 1;
    if (iVar7 == 0) {
      (**(code **)(*(int *)resource + 0x24))(uVar5);
    }
    pvVar6 = Mem_Alloc(0x58);
    uStack_4 = 0;
    if (pvVar6 != (void *)0x0) {
      uVar1 = *(undefined4 *)((int)resource + 0x14c);
      uVar2 = *(undefined4 *)((int)resource + 0x1a4);
      uVar3 = *(undefined4 *)((int)resource + 4);
      uVar4 = *(undefined4 *)((int)resource + 0x154);
      iVar7 = FUN_00769710();
      piVar9 = (int *)FUN_0078fea0(*(undefined4 *)(iVar7 + 0x28),uVar1,uVar4,uVar3,uVar2);
    }
    uStack_4 = 0xffffffff;
    piVar8 = (int *)FUN_0078f150();
    (**(code **)(*piVar9 + 4))(piVar8);
    LOCK();
    iVar7 = piVar8[1] + -1;
    piVar8[1] = iVar7;
    UNLOCK();
    if (iVar7 == 0) {
      (**(code **)(*piVar8 + 4))();
    }
  }
  ExceptionList = local_c;
  return;
}

