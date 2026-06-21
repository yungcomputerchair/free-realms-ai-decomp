// addr: 0x00ca40b0
// name: FUN_00ca40b0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00ca40b0(void * resource, void ** outObject) */

void FUN_00ca40b0(void *resource,void **outObject)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates a 0x58-byte helper from a retained resource and attaches a shared
                       object reference. Exact class is not identified. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016087fb;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  if (resource != (void *)0x0) {
    iVar7 = *(int *)((int)resource + 8);
    *(int *)((int)resource + 8) = iVar7 + 1;
    if (iVar7 == 0) {
      (**(code **)(*(int *)resource + 0x24))(uVar5);
    }
    pvVar6 = Mem_Alloc(0x58);
    uStack_4 = 0;
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)((int)resource + 0x14c);
      uVar2 = *(undefined4 *)((int)resource + 0x1a4);
      uVar3 = *(undefined4 *)((int)resource + 4);
      uVar4 = *(undefined4 *)((int)resource + 0x154);
      iVar7 = FUN_00769710();
      pvVar6 = (void *)FUN_0078fea0(*(undefined4 *)(iVar7 + 0x28),uVar1,uVar4,uVar3,uVar2);
    }
    uStack_4 = 0xffffffff;
    *outObject = pvVar6;
    piVar8 = (int *)FUN_0078f150();
    (**(code **)(*(int *)*outObject + 4))(piVar8);
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

