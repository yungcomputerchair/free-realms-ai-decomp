// addr: 0x013f3680
// name: StateMachine_popState
// subsystem: common/game/match
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
  
                    /* Pops the current state from mStateStack, calls state virtual
                       cleanup/destructor hooks, resumes the previous state when present, or clears
                       mCurrentState when the stack drains. Evidence: asserts from
                       ..\common\common\state\StateMachine.cpp on mStateStack.size() == 0 and
                       callers handling state return codes. */
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar1 == 0) {
LAB_013f3784:
    if ((uVar1 == 0) || ((int)(*(int *)((int)this + 0x10) - uVar1) >> 2 == 0)) goto LAB_013f37ab;
    uVar5 = 0x253;
  }
  else {
    if (1 < (uint)((int)(*(int *)((int)this + 0x10) - uVar1) >> 2)) {
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
      (**(code **)*piVar3)(1);
                    /* WARNING: Could not recover jumptable at 0x013f3752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(**(int **)((int)this + 0x18) + 0x44))();
      return iVar4;
    }
    if ((uVar1 == 0) || ((int)(*(int *)((int)this + 0x10) - uVar1) >> 2 != 1)) goto LAB_013f3784;
    FUN_013f3280();
    if ((*(int *)((int)this + 0xc) == 0) ||
       (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 2 == 0)) goto LAB_013f37ab;
    uVar5 = 0x24a;
  }
  FUN_012f5a60("mStateStack.size() == 0","..\\common\\common\\state\\StateMachine.cpp",uVar5);
LAB_013f37ab:
  if (*(int **)((int)this + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x18) + 0x48))();
    if (*(undefined4 **)((int)this + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x18))(1);
    }
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  return 3;
}

