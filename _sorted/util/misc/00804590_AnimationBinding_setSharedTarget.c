// addr: 0x00804590
// name: AnimationBinding_setSharedTarget
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationBinding_setSharedTarget(void * this, void * target) */

void __thiscall AnimationBinding_setSharedTarget(void *this,void *target)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Retains a reference-counted target and assigns it into the +0xac binding,
                       replacing any existing ref-counted target, then mirrors it to +0xb0 when
                       present. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015672a0;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  if (target != (void *)0x0) {
    LOCK();
    *(int *)((int)target + 4) = *(int *)((int)target + 4) + 1;
    UNLOCK();
  }
  iVar5 = (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)this + 0xac) + 0xc) + 0x30))(uVar4);
  if (iVar5 != 0) {
    piVar6 = (int *)(**(code **)(*(int *)**(undefined4 **)(*(int *)((int)this + 0xac) + 0xc) + 0x30)
                    )();
    LOCK();
    iVar5 = piVar6[1] + -1;
    piVar6[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      (**(code **)(*piVar6 + 4))();
    }
  }
  uVar7 = FUN_00755770(target);
  uStack_4 = 0;
  puVar2 = *(undefined4 **)(*(int *)((int)this + 0xac) + 0xc);
  bVar3 = (**(code **)(*(int *)*puVar2 + 0x1c))(uVar7);
  pbVar1 = (byte *)(puVar2 + 1);
  *pbVar1 = *pbVar1 | bVar3;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00748150();
  if (*(int *)((int)this + 0xb0) != 0) {
    if (target != (void *)0x0) {
      LOCK();
      *(int *)((int)target + 4) = *(int *)((int)target + 4) + 1;
      UNLOCK();
    }
    iVar5 = (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)this + 0xb0) + 0xc) + 0x30))();
    if (iVar5 != 0) {
      piVar6 = (int *)(**(code **)(*(int *)**(undefined4 **)(*(int *)((int)this + 0xb0) + 0xc) +
                                  0x30))();
      LOCK();
      iVar5 = piVar6[1] + -1;
      piVar6[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        (**(code **)(*piVar6 + 4))();
      }
    }
    uVar7 = FUN_00755770(target);
    puStack_8 = (undefined1 *)0x1;
    puVar2 = *(undefined4 **)(*(int *)((int)this + 0xb0) + 0xc);
    bVar3 = (**(code **)(*(int *)*puVar2 + 0x1c))(uVar7);
    pbVar1 = (byte *)(puVar2 + 1);
    *pbVar1 = *pbVar1 | bVar3;
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_00748150();
  }
  ExceptionList = pvStack_10;
  return;
}

