// addr: 0x013fb690
// name: GameTurn_addStateCounter
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameTurn_addStateCounter(void * this, int unusedArg_, int amount_) */

void __thiscall GameTurn_addStateCounter(void *this,int unusedArg_,int amount_)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_10;
  undefined1 auStack_c [12];
  
                    /* Looks up the current turn state key via virtual method +0x3c, preserves any
                       existing stored value, reinserts/updates the state entry, and increments a
                       counter by amount. Evidence: map lookup/insert calls and
                       GameTurn/DrawCardState callers. */
  local_10 = *(int *)((int)this + 0x20);
  local_1c = 0;
  uStack_20 = (**(code **)(*(int *)this + 0x3c))();
  piVar3 = (int *)FUN_013f9d10(auStack_c,&uStack_20);
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  if ((iVar1 == 0) || (iVar1 != (int)this + 0x1c)) {
    FUN_00d83c2d();
  }
  uVar4 = local_1c;
  if (iVar2 != local_10) {
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
  }
  local_1c = (**(code **)(*(int *)this + 0x3c))();
  uStack_18 = uVar4;
  FUN_013fb020(auStack_c,&local_1c);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + amount_;
  return;
}

