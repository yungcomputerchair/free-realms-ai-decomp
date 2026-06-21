// addr: 0x00f53840
// name: Chess_gen_zob_key
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* private: unsigned __int64 __thiscall Chess::gen_zob_key(void) */

__uint64 __thiscall Chess::Chess_gen_zob_key(Chess *this)

{
  Chess CVar1;
  uint uVar2;
  uint uVar3;
  Chess *pCVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
                    /* Generates the full 64-bit Zobrist key for a Chess position by scanning board
                       squares and XORing piece/color entries. */
  uVar2 = 0;
  uVar3 = 0;
  iVar8 = 0;
  pCVar4 = this + 0x18;
  do {
    iVar6 = *(int *)(pCVar4 + -4);
    if (iVar6 < 0) {
      iVar6 = iVar8 + iVar6 * -0x80;
      uVar5 = *(uint *)(&DAT_01ca0de0 + iVar6 * 8);
      uVar7 = *(uint *)(&DAT_01ca0de4 + iVar6 * 8);
LAB_00f53885:
      uVar2 = uVar2 ^ uVar5;
      uVar3 = uVar3 ^ uVar7;
    }
    else if (iVar6 != 0) {
      iVar6 = iVar6 * 0x80 + iVar8;
      uVar5 = *(uint *)(&DAT_01ca0be0 + iVar6 * 8);
      uVar7 = *(uint *)(&DAT_01ca0be4 + iVar6 * 8);
      goto LAB_00f53885;
    }
    iVar6 = *(int *)pCVar4;
    if (iVar6 < 0) {
      iVar6 = iVar8 + iVar6 * -0x80;
      uVar5 = *(uint *)(&DAT_01ca0de8 + iVar6 * 8);
      uVar7 = *(uint *)(&DAT_01ca0dec + iVar6 * 8);
LAB_00f538bd:
      uVar2 = uVar2 ^ uVar5;
      uVar3 = uVar3 ^ uVar7;
    }
    else if (iVar6 != 0) {
      iVar6 = iVar6 * 0x80 + iVar8;
      uVar5 = *(uint *)(&DAT_01ca0be8 + iVar6 * 8);
      uVar7 = *(uint *)(&DAT_01ca0bec + iVar6 * 8);
      goto LAB_00f538bd;
    }
    iVar6 = *(int *)(pCVar4 + 4);
    if (iVar6 < 0) {
      iVar6 = iVar8 + iVar6 * -0x80;
      uVar5 = *(uint *)(&DAT_01ca0df0 + iVar6 * 8);
      uVar7 = *(uint *)(&DAT_01ca0df4 + iVar6 * 8);
LAB_00f538f6:
      uVar2 = uVar2 ^ uVar5;
      uVar3 = uVar3 ^ uVar7;
    }
    else if (iVar6 != 0) {
      iVar6 = iVar6 * 0x80 + iVar8;
      uVar5 = *(uint *)(&DAT_01ca0bf0 + iVar6 * 8);
      uVar7 = *(uint *)(&DAT_01ca0bf4 + iVar6 * 8);
      goto LAB_00f538f6;
    }
    iVar6 = *(int *)(pCVar4 + 8);
    if (iVar6 < 0) {
      iVar6 = iVar8 + iVar6 * -0x80;
      uVar5 = *(uint *)(&DAT_01ca0df8 + iVar6 * 8);
      uVar7 = *(uint *)(&DAT_01ca0dfc + iVar6 * 8);
LAB_00f5392f:
      uVar2 = uVar2 ^ uVar5;
      uVar3 = uVar3 ^ uVar7;
    }
    else if (iVar6 != 0) {
      iVar6 = iVar6 * 0x80 + iVar8;
      uVar5 = *(uint *)(&DAT_01ca0bf8 + iVar6 * 8);
      uVar7 = *(uint *)(&DAT_01ca0bfc + iVar6 * 8);
      goto LAB_00f5392f;
    }
    iVar8 = iVar8 + 4;
    pCVar4 = pCVar4 + 0x10;
    if (0x3f < iVar8) {
      CVar1 = this[0x12];
      if (((byte)CVar1 & 2) == 0) {
        uVar2 = uVar2 ^ (uint)castle_zob;
        uVar3 = uVar3 ^ DAT_01ca29ec;
      }
      if (((byte)CVar1 & 1) == 0) {
        uVar2 = uVar2 ^ DAT_01ca29f0;
        uVar3 = uVar3 ^ DAT_01ca29f4;
      }
      if (((byte)CVar1 & 0x10) == 0) {
        uVar2 = uVar2 ^ DAT_01ca29f8;
        uVar3 = uVar3 ^ DAT_01ca29fc;
      }
      if (((byte)CVar1 & 8) == 0) {
        uVar2 = uVar2 ^ DAT_01ca2a00;
        uVar3 = uVar3 ^ DAT_01ca2a04;
      }
      CVar1 = this[0x11];
      if (CVar1 != (Chess)0x0) {
        uVar2 = uVar2 ^ (uint)(&en_passant_zob)[(char)CVar1 * 2];
        uVar3 = uVar3 ^ (&DAT_01ca27e4)[(char)CVar1 * 2];
      }
      if (this[0x10] == (Chess)0x1) {
        uVar2 = uVar2 ^ (uint)change_side_zob;
        uVar3 = uVar3 ^ change_side_zob._4_4_;
      }
      return CONCAT44(uVar3,uVar2);
    }
  } while( true );
}

