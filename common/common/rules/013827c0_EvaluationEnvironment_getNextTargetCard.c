// addr: 0x013827c0
// name: EvaluationEnvironment_getNextTargetCard
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getNextTargetCard(void * env) */

void * __fastcall EvaluationEnvironment_getNextTargetCard(void *env)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  
                    /* Advances an iterator over the target card list, updates the cached current
                       target id, and returns the newly selected target card. Returns null at the
                       end of the list. */
  uVar1 = *(uint *)((int)env + 0x44);
  if (uVar1 < *(uint *)((int)env + 0x40)) {
    FUN_00d83c2d();
  }
  if ((*(int *)((int)env + 0x5c) == 0) || (*(int *)((int)env + 0x5c) != (int)env + 0x3c)) {
    FUN_00d83c2d();
  }
  if (*(uint *)((int)env + 0x60) == uVar1) {
    *(undefined4 *)((int)env + 0xc) = 0;
    return (void *)0x0;
  }
  uVar1 = *(uint *)((int)env + 0x40);
  if ((uVar1 != 0) && ((int)(*(int *)((int)env + 0x44) - uVar1) >> 2 != 0)) {
    uVar2 = *(uint *)((int)env + 0x44);
    if (uVar2 < uVar1) {
      FUN_00d83c2d();
    }
    if (*(int *)((int)env + 0x5c) == 0) {
      FUN_00d83c2d();
    }
    if (*(uint *)(*(int *)((int)env + 0x5c) + 8) <= *(uint *)((int)env + 0x60)) {
      FUN_00d83c2d();
    }
    *(int *)((int)env + 0x60) = *(int *)((int)env + 0x60) + 4;
    if ((*(int *)((int)env + 0x5c) == 0) || (*(int *)((int)env + 0x5c) != (int)env + 0x3c)) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)env + 0x60) == uVar2) {
      *(undefined4 *)((int)env + 0xc) = 0;
    }
    else {
      if (*(int *)((int)env + 0x5c) == 0) {
        FUN_00d83c2d();
      }
      if (*(uint *)(*(int *)((int)env + 0x5c) + 8) <= *(uint *)((int)env + 0x60)) {
        FUN_00d83c2d();
      }
      uVar3 = PlayElement_getId();
      *(undefined4 *)((int)env + 0xc) = uVar3;
    }
  }
  if (*(int *)((int)env + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
  }
  pvVar4 = find_play_element_in_maps(*(void **)((int)env + 4),*(int *)((int)env + 0xc));
  return pvVar4;
}

