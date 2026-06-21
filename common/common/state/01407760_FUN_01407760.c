// addr: 0x01407760
// name: FUN_01407760
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01407801) */

void __thiscall FUN_01407760(int param_1,void *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  void *unaff_EDI;
  int local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  puVar3 = (undefined4 *)PlayAreaStringMap_getOrCreateValue(param_2);
  *puVar3 = param_3;
  uVar7 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x1c;
  }
  if (0 < local_4) {
    param_3 = 0;
    do {
      if ((*(int *)(param_1 + 0xc) == 0) ||
         ((uint)((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x1c) <= uVar7)) {
        FUN_00d83c2d();
      }
      iVar4 = *(int *)(param_1 + 0xc) + param_3;
      uVar1 = *(uint *)((int)param_2 + 0x14);
      if (*(uint *)((int)param_2 + 0x18) < 0x10) {
        iVar6 = (int)param_2 + 4;
      }
      else {
        iVar6 = *(int *)((int)param_2 + 4);
      }
      uVar2 = *(uint *)(iVar4 + 0x14);
      uVar5 = uVar2;
      if (uVar1 <= uVar2) {
        uVar5 = uVar1;
      }
      if (*(uint *)(iVar4 + 0x18) < 0x10) {
        iVar4 = iVar4 + 4;
      }
      else {
        iVar4 = *(int *)(iVar4 + 4);
      }
      iVar4 = FUN_00f93bd0(iVar4,iVar6,uVar5);
      if (((iVar4 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) {
        return;
      }
      param_3 = param_3 + 0x1c;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < local_4);
  }
  StdVector28_pushBack((void *)(param_1 + 8),param_2,unaff_EDI);
  return;
}

