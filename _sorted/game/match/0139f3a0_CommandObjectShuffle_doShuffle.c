// addr: 0x0139f3a0
// name: CommandObjectShuffle_doShuffle
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectShuffle_doShuffle(void * this) */

bool __fastcall CommandObjectShuffle_doShuffle(void *this)

{
  uint *puVar1;
  uint *beginPtr;
  uint uVar2;
  void *this_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *name;
  undefined4 uVar6;
  uint *local_3c;
  undefined4 local_38 [4];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Executes shuffle behavior unless the game has the named flag/value
                       "noshuffle" set. It gathers two vector ranges and calls
                       STLVector_dword_shuffle on them, then cleans up the temporary random/shuffle
                       context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01685680;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffb4;
  ExceptionList = &local_c;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"noshuffle",9);
  local_4 = 0;
  name = local_28;
  this_00 = (void *)FUN_01340340(name,uVar2);
  iVar3 = Game_findNamedEntryValue(this_00,name);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (iVar3 != 1) {
    uVar6 = *(undefined4 *)((int)this + 0x30);
    uVar4 = FUN_013487b0(uVar6);
    FUN_01419f30(uVar4,uVar6);
    local_4 = 1;
    local_3c = (uint *)0x3;
    local_38[0] = 3;
    iVar3 = FUN_01343ed0(&local_3c);
    puVar1 = *(uint **)(iVar3 + 8);
    if (puVar1 < *(uint **)(iVar3 + 4)) {
      FUN_00d83c2d();
    }
    iVar5 = FUN_01343ed0(local_38);
    local_3c = *(uint **)(iVar5 + 4);
    if (*(uint **)(iVar5 + 8) < local_3c) {
      FUN_00d83c2d();
    }
    if (iVar5 != iVar3) {
      FUN_00d83c2d();
    }
    if (local_3c != puVar1) {
      STLVector_dword_shuffle(local_3c,puVar1);
    }
    local_38[0] = 3;
    local_3c = (uint *)0x3;
    iVar3 = FUN_01343ed0(local_38);
    puVar1 = *(uint **)(iVar3 + 8);
    if (puVar1 < *(uint **)(iVar3 + 4)) {
      FUN_00d83c2d();
    }
    iVar5 = FUN_01343ed0(&local_3c);
    beginPtr = *(uint **)(iVar5 + 4);
    if (*(uint **)(iVar5 + 8) < beginPtr) {
      FUN_00d83c2d();
    }
    if (iVar5 != iVar3) {
      FUN_00d83c2d();
    }
    if (beginPtr != puVar1) {
      STLVector_dword_shuffle(beginPtr,puVar1);
    }
    local_4 = 0xffffffff;
    FUN_01419f50();
  }
  ExceptionList = local_c;
  return true;
}

