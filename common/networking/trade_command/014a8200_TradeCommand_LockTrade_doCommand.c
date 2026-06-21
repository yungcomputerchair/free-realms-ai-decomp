// addr: 0x014a8200
// name: TradeCommand_LockTrade_doCommand
// subsystem: common/networking/trade_command
// source (binary assert): common/networking/trade_command/TradeCommandLockTrade.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int TradeCommand_LockTrade_doCommand(void * this) */

int __fastcall TradeCommand_LockTrade_doCommand(void *this)

{
  uint uVar1;
  int extraout_EAX;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvStack_34;
  void *local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes the lock-trade command: verifies the client app, optionally shows a
                       collection resync wait message when locking, then builds/sends a trade packet
                       with opcode 0x37, the trade id at +8, and the lock byte at +0xc. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a548e;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&pvStack_34;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  local_30 = this;
  DisplayActionManager_ensureSingleton();
  if (extraout_EAX == 0) {
    FUN_012f5a60("clientApp","..\\common\\networking\\trade_command\\TradeCommandLockTrade.cpp",0x1e
                 ,uVar1);
  }
  iVar2 = FUN_012d0920();
  if ((iVar2 != 0) && (*(char *)((int)this + 0xc) == '\x01')) {
    pvStack_34 = Mem_Alloc(0x14);
    uStack_4 = 0;
    if (pvStack_34 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_012f9eb0();
    }
    uStack_4 = 0xffffffff;
    FUN_012f8c70(2);
    FUN_012d0920();
    iVar2 = FUN_01301f30();
    DisplayActionBuilder_addIntArg(pvVar3,iVar2);
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_2c,"Please wait while collections are resynced.",0x2b);
    uStack_4 = 1;
    DisplayActionBuilder_addStringArg(pvVar3,abStack_2c);
    FUN_012d3550(pvVar3);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    this = local_30;
  }
  pvStack_34 = Mem_Alloc(0x14);
  uStack_4 = 2;
  if (pvStack_34 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x37);
  DisplayActionBuilder_addIntArg(pvVar3,*(int *)((int)this + 8));
  DisplayActionBuilder_addBoolArg(pvVar3,*(bool *)((int)this + 0xc));
  uVar4 = FUN_012d3550(pvVar3);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}

