// addr: 0x00fed630
// name: PhysicsCollisionDispatcher_dispatchContactCallbacks
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PhysicsCollisionDispatcher_dispatchContactCallbacks(void * this) */

void __fastcall PhysicsCollisionDispatcher_dispatchContactCallbacks(void *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  int iStack_8;
  
                    /* Iterates contact manifolds/pairs from a physics world, checks collision
                       masks, and invokes registered callbacks for shape/user-data types 9 and 11 on
                       each involved object. */
  iVar4 = (**(code **)(**(int **)(*(int *)this + 0x18) + 0x20))();
  iStack_8 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = (**(code **)(**(int **)(*(int *)this + 0x18) + 0x24))(iStack_8);
      if (0 < *(int *)(iVar5 + 0x498)) {
        uVar1 = *(uint *)(iVar5 + 0x490);
        uVar2 = *(uint *)(iVar5 + 0x494);
        if (((*(ushort *)(*(int *)(uVar2 + 200) + 6) & *(ushort *)(*(int *)(uVar1 + 200) + 4)) != 0)
           || ((*(ushort *)(*(int *)(uVar2 + 200) + 4) & *(ushort *)(*(int *)(uVar1 + 200) + 6)) !=
               0)) {
          uVar7 = -(uint)((*(byte *)(uVar1 + 0xf4) & 2) != 0) & uVar1;
          uVar9 = -(uint)((*(byte *)(uVar2 + 0xf4) & 2) != 0) & uVar2;
          if (uVar7 != 0) {
            iVar3 = *(int *)(uVar7 + 0xf8);
            if (*(int *)(iVar3 + 0x20) == 9) {
              if (*(int *)((int)this + 8) != 0) {
                uVar6 = *(undefined4 *)(iVar3 + 0x1c);
                pcVar8 = *(code **)(**(int **)((int)this + 8) + 4);
                goto LAB_00fed707;
              }
            }
            else if ((*(int *)(iVar3 + 0x20) == 0xb) && (*(int *)((int)this + 4) != 0)) {
              uVar6 = *(undefined4 *)(iVar3 + 0x1c);
              pcVar8 = *(code **)**(undefined4 **)((int)this + 4);
LAB_00fed707:
              (*pcVar8)(uVar6,iVar5,uVar2,uVar9);
            }
          }
          if (uVar9 != 0) {
            iVar3 = *(int *)(uVar9 + 0xf8);
            if (*(int *)(iVar3 + 0x20) == 9) {
              if (*(int *)((int)this + 8) != 0) {
                (**(code **)(**(int **)((int)this + 8) + 4))
                          (*(undefined4 *)(iVar3 + 0x1c),iVar5,uVar1,uVar7);
              }
            }
            else if ((*(int *)(iVar3 + 0x20) == 0xb) && (*(int *)((int)this + 4) != 0)) {
              (**(code **)**(undefined4 **)((int)this + 4))
                        (*(undefined4 *)(iVar3 + 0x1c),iVar5,uVar1,uVar7);
            }
          }
        }
      }
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < iVar4);
  }
  return;
}

