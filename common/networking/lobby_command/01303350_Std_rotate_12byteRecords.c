// addr: 0x01303350
// name: Std_rotate_12byteRecords
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Std_rotate_12byteRecords(void * first, void * middle, void * last) */

int __cdecl Std_rotate_12byteRecords(void *first,void *middle,void *last)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  
                    /* Implements an in-place rotate over 12-byte records using a gcd/cycle
                       algorithm. */
  iVar10 = ((int)last - (int)first) * 0x2aaaaaab;
  iVar5 = ((int)last - (int)first) / 0xc;
  iVar4 = ((int)middle - (int)first) / 0xc;
  iVar8 = iVar4;
  iVar12 = iVar5;
  while (iVar6 = iVar8, iVar6 != 0) {
    iVar10 = iVar12 / iVar6;
    iVar8 = iVar12 % iVar6;
    iVar12 = iVar6;
  }
  if ((iVar12 < iVar5) && (0 < iVar12)) {
    iVar10 = iVar4 * 0xc;
    puVar11 = (undefined4 *)((int)first + iVar12 * 0xc);
    do {
      uVar1 = puVar11[1];
      uVar2 = *puVar11;
      uVar3 = puVar11[2];
      puVar9 = puVar11 + iVar4 * 3;
      puVar7 = puVar11;
      if (puVar11 + iVar4 * 3 == last) {
        puVar9 = first;
      }
      while (puVar9 != puVar11) {
        *puVar7 = *puVar9;
        puVar7[1] = puVar9[1];
        puVar7[2] = puVar9[2];
        iVar5 = ((int)last - (int)puVar9) / 0xc;
        puVar7 = puVar9;
        if (iVar4 < iVar5) {
          puVar9 = puVar9 + iVar4 * 3;
        }
        else {
          puVar9 = (undefined4 *)((int)first + (iVar4 - iVar5) * 0xc);
        }
      }
      *puVar7 = uVar2;
      iVar12 = iVar12 + -1;
      puVar11 = puVar11 + -3;
      puVar7[1] = uVar1;
      puVar7[2] = uVar3;
    } while (0 < iVar12);
  }
  return iVar10;
}

