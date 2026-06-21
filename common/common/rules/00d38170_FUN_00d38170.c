// addr: 0x00d38170
// name: FUN_00d38170
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void unknown_visibilityScore_update(void * state) */

void __fastcall unknown_visibilityScore_update(void *state)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
                    /* Computes a clamped rectangular overlap/visibility score and stores the capped
                       result at state+0x40. */
  iVar2 = *(int *)((int)state + 0x10);
  iVar1 = *(int *)((int)state + 0x14);
  uVar7 = *(int *)((int)state + 0x34) - iVar1;
  uVar3 = -(uint)((int)uVar7 < (int)*(uint *)(iVar2 + 0xc4e00));
  uVar4 = *(int *)((int)state + 0x38) - iVar1;
  uVar6 = ~uVar3 & uVar7 | uVar3 & *(uint *)(iVar2 + 0xc4e00);
  uVar3 = -(uint)((int)uVar4 < *(int *)(iVar2 + 0xc4e04));
  uVar7 = *(int *)(iVar2 + 0xc4e00) + *(int *)(iVar2 + 0xc4e08);
  uVar8 = ~uVar3 & uVar4 | uVar3 & *(uint *)(iVar2 + 0xc4e04);
  uVar3 = iVar1 + 1 + *(int *)((int)state + 0x34);
  uVar4 = -(uint)((int)uVar3 < (int)uVar7);
  uVar5 = *(int *)(iVar2 + 0xc4e04) + *(int *)(iVar2 + 0xc4e0c);
  uVar4 = ~uVar4 & uVar7 | uVar4 & uVar3;
  uVar3 = *(int *)((int)state + 0x38) + 1 + *(int *)((int)state + 0x14);
  uVar7 = -(uint)((int)uVar3 < (int)uVar5);
  uVar3 = ~uVar7 & uVar5 | uVar7 & uVar3;
  if ((int)uVar4 < (int)uVar6) {
    uVar4 = uVar6;
  }
  if ((int)uVar3 < (int)uVar8) {
    uVar3 = uVar8;
  }
  uVar3 = (uVar3 - uVar8) * (uVar4 - uVar6);
  iVar2 = *(int *)((int)state + 0x14) * 2 + 1;
  iVar2 = iVar2 * iVar2 - (-(uint)(0 < (int)uVar3) & uVar3);
  *(int *)((int)state + 0x40) = iVar2;
  if (*(int *)((int)state + 0x3c) < iVar2) {
    *(int *)((int)state + 0x40) = *(int *)((int)state + 0x3c);
  }
  return;
}

