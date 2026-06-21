// addr: 0x0146ac90
// name: MultiActionState_clearCommandObjectVector
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MultiActionState_clearCommandObjectVector(void * this) */

void __fastcall MultiActionState_clearCommandObjectVector(void *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_8 [8];
  
                    /* Sets a ValueData-like type to 6 and clears/destroys the vector stored via
                       field +8. Exact field name is inferred from MultiActionState context. */
  FUN_01300680(6);
  iVar1 = *(int *)((int)this + 8);
  uVar2 = *(uint *)(iVar1 + 8);
  if (uVar2 < *(uint *)(iVar1 + 4)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)(iVar1 + 4);
  if (*(uint *)(iVar1 + 8) < uVar3) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_8,iVar1,uVar3,iVar1,uVar2);
  return;
}

