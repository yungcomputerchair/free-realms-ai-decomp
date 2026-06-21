// addr: 0x00f56ba0
// name: Chess_init_tt
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x00f56c92) */
/* private: void __thiscall Chess::init_tt(void) */

void __thiscall Chess::Chess_init_tt(Chess *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
                    /* Initializes Chess transposition tables: computes table size from
                       configuration, allocates hash arrays, and sets initial sentinel/metadata
                       entries. */
  DAT_01caf540 = 0;
  iVar4 = DAT_01b964f8;
  while (iVar4 = iVar4 >> 1, iVar4 != 0) {
    DAT_01caf540 = DAT_01caf540 + 1;
  }
  uVar5 = __allshl();
  uVar3 = (uint)uVar5;
  if (DAT_01caf544 == (void *)0x0) {
    DAT_01caf544 = _malloc(uVar3 << 4);
  }
  if (DAT_01caf548 == (undefined4 *)0x0) {
    DAT_01caf548 = _malloc(uVar3 << 4);
  }
  *(undefined4 *)((int)DAT_01caf544 + 8) = 1;
  *(undefined4 *)((int)DAT_01caf544 + 0xc) = 0;
  *DAT_01caf548 = 1;
  DAT_01caf548[1] = 0;
  iVar4 = 0;
  *(undefined1 *)((int)DAT_01caf544 + 6) = 0xff;
  uVar2 = 1;
  if (((int)(uVar5 >> 0x20) != 0) || (1 < uVar3)) {
    do {
      iVar1 = uVar2 * 0x10;
      *(undefined4 *)(iVar1 + 8 + (int)DAT_01caf544) = 0;
      *(undefined4 *)(iVar1 + 0xc + (int)DAT_01caf544) = 0;
      DAT_01caf548[uVar2 * 4] = 0;
      uVar3 = uVar2 + 1;
      DAT_01caf548[uVar2 * 4 + 1] = 0;
      iVar4 = iVar4 + (uint)(0xfffffffe < uVar2);
      *(undefined1 *)(iVar1 + 6 + (int)DAT_01caf544) = 0xff;
      uVar2 = uVar3;
    } while (CONCAT44(iVar4,uVar3) < uVar5);
  }
  return;
}

