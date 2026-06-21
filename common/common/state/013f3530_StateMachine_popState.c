// addr: 0x013f3530
// name: StateMachine_popState
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateMachine_popState(void * this) */

int __fastcall StateMachine_popState(void *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
                    /* Pops the top state from mStateStack, restores the previous state as
                       mCurrentState when present, calls a state virtual cleanup/exit slot, then
                       deletes the popped state. It asserts that the stack is empty after popping
                       the final state. */
  uVar1 = *(uint *)((int)this + 0xc);
  if ((uVar1 != 0) && (1 < (uint)((int)(*(int *)((int)this + 0x10) - uVar1) >> 2))) {
    uVar2 = *(uint *)((int)this + 0x10);
    if (uVar2 < uVar1) {
      FUN_00d83c2d();
    }
    if ((*(uint *)((int)this + 0x10) < uVar2 - 4) || (uVar2 - 4 < *(uint *)((int)this + 0xc))) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x10) <= (undefined4 *)(uVar2 - 4)) {
      FUN_00d83c2d();
    }
    uVar1 = *(uint *)((int)this + 0xc);
    piVar3 = *(int **)(uVar2 - 4);
    if ((uVar1 != 0) && ((int)(*(int *)((int)this + 0x10) - uVar1) >> 2 != 0)) {
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -4;
    }
    uVar2 = *(uint *)((int)this + 0x10);
    if (uVar2 < uVar1) {
      FUN_00d83c2d();
    }
    if ((*(uint *)((int)this + 0x10) < uVar2 - 4) || (uVar2 - 4 < *(uint *)((int)this + 0xc))) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x10) <= (undefined4 *)(uVar2 - 4)) {
      FUN_00d83c2d();
    }
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(uVar2 - 4);
    (**(code **)(*piVar3 + 0x48))();
    uVar5 = (**(code **)*piVar3)(1);
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar2 < uVar1) {
    FUN_00d83c2d();
  }
  if ((*(uint *)((int)this + 0x10) < uVar2 - 4) || (uVar2 - 4 < *(uint *)((int)this + 0xc))) {
    FUN_00d83c2d();
  }
  if (*(undefined4 **)((int)this + 0x10) <= (undefined4 *)(uVar2 - 4)) {
    FUN_00d83c2d();
  }
  iVar4 = *(int *)((int)this + 0xc);
  piVar3 = *(int **)(uVar2 - 4);
  if (iVar4 != 0) {
    if (*(int *)((int)this + 0x10) - iVar4 >> 2 != 0) {
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -4;
    }
    if ((iVar4 != 0) && (*(int *)((int)this + 0x10) - iVar4 >> 2 != 0)) {
      FUN_012f5a60("mStateStack.size() == 0","..\\common\\common\\state\\StateMachine.cpp",0x220);
    }
  }
  (**(code **)(*piVar3 + 0x48))();
  uVar5 = (**(code **)*piVar3)(1);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}

