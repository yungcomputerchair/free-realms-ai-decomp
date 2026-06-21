// addr: 0x00f53780
// name: Chess_gen_pawn_key
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* private: unsigned __int64 __thiscall Chess::gen_pawn_key(void) */

__uint64 __thiscall Chess::Chess_gen_pawn_key(Chess *this)

{
  __uint64 *p_Var1;
  uint uVar2;
  __uint64 *p_Var3;
  uint uVar4;
  __uint64 **pp_Var5;
  Chess *pCVar6;
  
                    /* Generates a 64-bit pawn Zobrist key for the Chess board by XORing pawn
                       entries from the global zobrist table for occupied pawn squares. */
  uVar2 = 0;
  uVar4 = 0;
  pp_Var5 = &zobrist;
  pCVar6 = this + 0x18;
  do {
    if (*(int *)(pCVar6 + -4) == -1) {
      p_Var1 = pp_Var5[0x80];
      p_Var3 = pp_Var5[0x81];
LAB_00f537b4:
      uVar2 = uVar2 ^ (uint)p_Var1;
      uVar4 = uVar4 ^ (uint)p_Var3;
    }
    else if (*(int *)(pCVar6 + -4) == 1) {
      p_Var1 = *pp_Var5;
      p_Var3 = pp_Var5[1];
      goto LAB_00f537b4;
    }
    if (*(int *)pCVar6 == -1) {
      p_Var1 = pp_Var5[0x82];
      p_Var3 = pp_Var5[0x83];
LAB_00f537da:
      uVar2 = uVar2 ^ (uint)p_Var1;
      uVar4 = uVar4 ^ (uint)p_Var3;
    }
    else if (*(int *)pCVar6 == 1) {
      p_Var1 = pp_Var5[2];
      p_Var3 = pp_Var5[3];
      goto LAB_00f537da;
    }
    if (*(int *)(pCVar6 + 4) == -1) {
      p_Var1 = pp_Var5[0x84];
      p_Var3 = pp_Var5[0x85];
LAB_00f53801:
      uVar2 = uVar2 ^ (uint)p_Var1;
      uVar4 = uVar4 ^ (uint)p_Var3;
    }
    else if (*(int *)(pCVar6 + 4) == 1) {
      p_Var1 = pp_Var5[4];
      p_Var3 = pp_Var5[5];
      goto LAB_00f53801;
    }
    if (*(int *)(pCVar6 + 8) == -1) {
      p_Var1 = pp_Var5[0x86];
      p_Var3 = pp_Var5[0x87];
LAB_00f53828:
      uVar2 = uVar2 ^ (uint)p_Var1;
      uVar4 = uVar4 ^ (uint)p_Var3;
    }
    else if (*(int *)(pCVar6 + 8) == 1) {
      p_Var1 = pp_Var5[6];
      p_Var3 = pp_Var5[7];
      goto LAB_00f53828;
    }
    pp_Var5 = pp_Var5 + 8;
    pCVar6 = pCVar6 + 0x10;
    if (0x1ca11df < (int)pp_Var5) {
      return CONCAT44(uVar4,uVar2);
    }
  } while( true );
}

