// addr: 0x012a8ff0
// name: RBTreeString_lowerBound_deckMap
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012a902b) */

undefined4 * __thiscall RBTreeString_lowerBound_deckMap(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *local_4;
  
                    /* Finds lower_bound for a string key in an RB-tree with larger nodes/sentinel
                       byte +0x2d. Evidence: compares std::string payloads with memcmp-like
                       FUN_00f93bd0 and traverses left/right accordingly. */
  local_4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)local_4[1] + 0x2d) == '\0') {
    uVar1 = *(uint *)(param_2 + 0x18);
    uVar2 = *(uint *)(param_2 + 0x14);
    puVar7 = (undefined4 *)local_4[1];
    do {
      piVar6 = (int *)(param_2 + 4);
      if (0xf < uVar1) {
        piVar6 = (int *)*(int *)(param_2 + 4);
      }
      uVar3 = puVar7[8];
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = uVar2;
      }
      if ((uint)puVar7[9] < 0x10) {
        puVar4 = puVar7 + 4;
      }
      else {
        puVar4 = (undefined4 *)puVar7[4];
      }
      uVar5 = FUN_00f93bd0(puVar4,piVar6,uVar5);
      if (uVar5 == 0) {
        if (uVar2 <= uVar3) {
          uVar5 = (uint)(uVar3 != uVar2);
          goto LAB_012a905e;
        }
LAB_012a9060:
        puVar4 = (undefined4 *)puVar7[2];
      }
      else {
LAB_012a905e:
        if ((int)uVar5 < 0) goto LAB_012a9060;
        puVar4 = (undefined4 *)*puVar7;
        local_4 = puVar7;
      }
      puVar7 = puVar4;
    } while (*(char *)((int)puVar4 + 0x2d) == '\0');
  }
  return local_4;
}

