// addr: 0x010cf2c0
// name: GuiTradingCardCtrl_createIfRequested
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiTradingCardCtrl_createIfRequested(int shouldCreate_) */

void __cdecl GuiTradingCardCtrl_createIfRequested(int shouldCreate_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Exception-guarded wrapper that constructs a GuiTradingCardCtrl through
                       GuiTradingCardCtrl_ctor when the input is nonzero. Likely
                       allocation/placement-construction glue. */
  puStack_8 = &LAB_0164ae81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (shouldCreate_ != 0) {
    GuiTradingCardCtrl_ctor((void *)shouldCreate_);
  }
  ExceptionList = local_c;
  return;
}

