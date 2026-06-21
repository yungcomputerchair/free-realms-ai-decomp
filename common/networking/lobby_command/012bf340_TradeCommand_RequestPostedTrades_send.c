// addr: 0x012bf340
// name: TradeCommand_RequestPostedTrades_send
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_RequestPostedTrades_send(void) */

void TradeCommand_RequestPostedTrades_send(void)

{
  void *handle;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a stack TradeCommand_RequestPostedTrades, ensures the client
                       application/command system exists, sends it through the common send helper,
                       then destroys it. Evidence: ctor/dtor callees install
                       TradeCommand_RequestPostedTrades::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166e0b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012bf190(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  DisplayActionManager_ensureSingleton();
  TradeCommand_RequestPostedTrades_ctor(local_18);
  local_4 = 0;
  CommandHandle_releaseIfPresent(handle);
  local_4 = 0xffffffff;
  TradeCommand_RequestPostedTrades_dtor(local_18);
  ExceptionList = local_c;
  return;
}

