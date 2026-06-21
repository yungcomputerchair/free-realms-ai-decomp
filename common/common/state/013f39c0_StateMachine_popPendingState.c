// addr: 0x013f39c0
// name: StateMachine_popPendingState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StateMachine_popPendingState(void * this) */

void * __fastcall StateMachine_popPendingState(void *this)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  
                    /* Pops a pointer from the vector at +0x34/+0x38, deletes the current object at
                       +0x1c if present, stores the popped pointer at +0x1c, and returns it. Used
                       widely by state transition code. */
  iVar1 = *(int *)((int)this + 0x34);
  if ((iVar1 == 0) || (*(int *)((int)this + 0x38) - iVar1 >> 2 == 0)) {
    return (void *)0x0;
  }
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x38) - iVar1 >> 2 != 0) {
      *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -4;
    }
    if ((iVar1 != 0) && (*(int *)((int)this + 0x38) - iVar1 >> 2 != 0)) {
      puVar2 = (undefined4 *)FUN_013f3350();
      pvVar3 = (void *)*puVar2;
      goto LAB_013f3a08;
    }
  }
  pvVar3 = (void *)0x0;
LAB_013f3a08:
  if (*(undefined4 **)((int)this + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x1c))(1);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  *(void **)((int)this + 0x1c) = pvVar3;
  return pvVar3;
}

