// addr: 0x00f4eb70
// name: Chess
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* public: __thiscall Chess::Chess(char const *) */

Chess * __thiscall Chess::Chess(Chess *this,char *param_1)

{
  Chess *pCVar1;
  int iVar2;
  
                    /* Constructs a Chess object, initializes board arrays, loads the opening book,
                       starts a new game, and links initial move buffers. */
  ChessPosition::ChessPosition_ctor((ChessPosition *)this);
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  iVar2 = 99;
  pCVar1 = this + 0x5e0;
  do {
    *pCVar1 = (Chess)0x0;
    pCVar1[1] = (Chess)0x0;
    pCVar1[2] = (Chess)0x0;
    pCVar1[3] = (Chess)0x0;
    *(undefined4 *)(pCVar1 + 4) = 0;
    *(undefined4 *)(pCVar1 + 8) = 0;
    *(undefined4 *)(pCVar1 + 0x10) = 0;
    *(undefined4 *)(pCVar1 + 0x14) = 0;
    *(undefined4 *)(pCVar1 + 0x18) = 0;
    *(undefined4 *)(pCVar1 + 0x1c) = 0;
    pCVar1 = pCVar1 + 0x20;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(this + 0x1288) = 0;
  *(undefined4 *)(this + 0x126c) = 0;
  *(undefined4 *)(this + 0x1270) = 0;
  *(undefined4 *)(this + 0x1274) = 0;
  *(undefined4 *)(this + 0x1278) = 0;
  *(undefined4 *)(this + 0x127c) = 0;
  init_const_boards(this);
  Chess_initBook(this,param_1);
  Chess_init_game(this);
  *(Chess **)(this + 0x1260) = this + 0x5e0;
  *(Chess **)(this + 0x5d8) = this + 0x218;
  this[0x214] = (Chess)0x0;
  *(undefined4 *)(this + 0x218) = *(undefined4 *)this;
  *(undefined4 *)(this + 0x21c) = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 0x1280) = 0;
  return this;
}

