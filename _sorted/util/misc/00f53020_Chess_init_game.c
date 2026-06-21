// addr: 0x00f53020
// name: Chess_init_game
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* private: void __thiscall Chess::init_game(void) */

void __thiscall Chess::Chess_init_game(Chess *this)

{
  int iVar1;
  Chess *pCVar2;
  undefined8 uVar3;
  __uint64 _Var4;
  
                    /* Initializes Chess bitboards, rotation/diagonal lookup tables, pawn/Zobrist
                       keys, piece-square arrays, and occupancy masks. */
  Chess_init_tt(this);
  *(undefined4 *)(this + 0x17c) = 0xff0000;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x168) = 0xff00;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0x24000000;
  *(undefined4 *)(this + 0x150) = 0x24;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0x42000000;
  *(undefined4 *)(this + 0x158) = 0x42;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0x81000000;
  *(undefined4 *)(this + 0x160) = 0x81;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0x8000000;
  *(undefined4 *)(this + 0x148) = 8;
  *(undefined4 *)(this + 0x14c) = 0;
  init_all_r_90(this,(__uint64 *)(this + 0x1b8));
  init_all_even_diag(this,(__uint64 *)(this + 0x1c0));
  init_all_odd_diag(this,(__uint64 *)(this + 0x1c8));
  *(undefined4 *)(this + 300) = 8;
  *(undefined4 *)(this + 0x130) = 8;
  this[0x13] = (Chess)0x1;
  this[0x10] = (Chess)0x0;
  this[0x11] = (Chess)0x0;
  this[0x12] = (Chess)0x1b;
  *(undefined4 *)(this + 0x134) = 0x3c;
  *(undefined4 *)(this + 0x118) = 0xf3c;
  *(undefined4 *)(this + 0x114) = 0xf3c;
  *(undefined4 *)(this + 0x120) = 3;
  *(undefined4 *)(this + 0x11c) = 3;
  *(undefined4 *)(this + 0x124) = 4;
  *(undefined4 *)(this + 0x128) = 4;
  *(undefined4 *)(this + 0x138) = 4;
  pCVar2 = this + 0x14;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0xd4) = 1;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0xd8) = 1;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(undefined4 *)(this + 0xdc) = 1;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0xe0) = 1;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(undefined4 *)(this + 0xe4) = 1;
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  *(undefined4 *)(this + 0xe8) = 1;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined4 *)(this + 0xec) = 1;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0xf0) = 1;
  *(undefined4 *)(this + 0x30) = 0xfffffffe;
  *(undefined4 *)(this + 0x110) = 2;
  *(undefined4 *)(this + 0xf4) = 2;
  *(undefined4 *)(this + 0x2c) = 0xfffffffd;
  *(undefined4 *)(this + 0x18) = 0xfffffffd;
  *(undefined4 *)(this + 0xf8) = 3;
  *(undefined4 *)(this + 0x10c) = 3;
  *(undefined4 *)(this + 0x14) = 0xfffffffe;
  *(undefined4 *)(this + 0x28) = 0xfffffffc;
  *(undefined4 *)(this + 0x1c) = 0xfffffffc;
  *(undefined4 *)(this + 0xfc) = 4;
  *(undefined4 *)(this + 0x108) = 4;
  *(undefined4 *)(this + 0x20) = 0xfffffffb;
  *(undefined4 *)(this + 0x100) = 5;
  *(undefined4 *)(this + 0x24) = 0xfffffffa;
  *(undefined4 *)(this + 0x104) = 6;
  uVar3 = __allshl();
  *(uint *)(this + 0x1b0) =
       (uint)uVar3 | *(uint *)(this + 0x188) | *(uint *)(this + 0x198) | *(uint *)(this + 400) |
       *(uint *)(this + 0x180) | *(uint *)(this + 0x178);
  *(uint *)(this + 0x1b4) =
       (uint)((ulonglong)uVar3 >> 0x20) | *(uint *)(this + 0x18c) | *(uint *)(this + 0x19c) |
       *(uint *)(this + 0x194) | *(uint *)(this + 0x184) | *(uint *)(this + 0x17c);
  uVar3 = __allshl();
  *(uint *)(this + 0x1a8) =
       (uint)uVar3 | *(uint *)(this + 0x168) | *(uint *)(this + 0x160) | *(uint *)(this + 0x158) |
       *(uint *)(this + 0x148) | *(uint *)(this + 0x150);
  *(uint *)(this + 0x1ac) =
       (uint)((ulonglong)uVar3 >> 0x20) | *(uint *)(this + 0x16c) | *(uint *)(this + 0x164) |
       *(uint *)(this + 0x15c) | *(uint *)(this + 0x14c) | *(uint *)(this + 0x154);
  _Var4 = Chess_gen_pawn_key(this);
  *(__uint64 *)(this + 8) = _Var4;
  _Var4 = Chess_gen_zob_key(this);
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(__uint64 *)this = _Var4;
  return;
}

