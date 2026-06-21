// addr: 0x00d34e00
// name: FUN_00d34e00
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int FUN_00d34e00(void * request, void * asset) */

int __thiscall FUN_00d34e00(void *this,void *request,void *asset)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Handles completion of an asynchronous asset/resource request: retains
                       optional asset, updates request state, creates a result object when pending
                       count reaches zero, releases held data, marks complete, and invokes a
                       callback. Exact class is unknown. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161382b;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  uVar5 = 0;
  pvStack_10 = this;
  if (request != (void *)0x0) {
    LOCK();
    *(int *)((int)request + 4) = *(int *)((int)request + 4) + 1;
    UNLOCK();
    pvStack_10 = (void *)(**(code **)(**(int **)((int)request + 0x2c) + 0x18))(uVar4);
    uVar5 = FUN_00d34d10(&pvStack_10,&request);
  }
  piVar1 = (int *)((int)this + 0x48);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    request = Mem_Alloc(0x88);
    uStack_4 = 0;
    if (request == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)((int)this + 0x50) + 8);
      if (iVar2 == 0) {
        uVar5 = FUN_010a4d50(*(undefined4 *)((int)this + 8),0,0);
      }
      else {
        uVar5 = FUN_010a4d50(*(undefined4 *)((int)this + 8),
                             *(undefined4 *)(*(int *)((int)this + 0x50) + 4),iVar2);
      }
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)((int)this + 0xc) = uVar5;
    iVar2 = *(int *)((int)this + 0x50);
    if (iVar2 != 0) {
      LOCK();
      iVar3 = *(int *)(iVar2 + 0x14) + -1;
      *(int *)(iVar2 + 0x14) = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*(int *)(iVar2 + 0x10) + 4))();
      }
      *(undefined4 *)((int)this + 0x50) = 0;
    }
    *(undefined1 *)((int)this + -0xc) = 1;
    uVar5 = (**(code **)**(undefined4 **)((int)this + 0x4c))((int)this + -0x28);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}

